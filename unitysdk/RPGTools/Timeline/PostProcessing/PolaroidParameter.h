#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_POLAROIDPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x14A3A0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int PolaroidParameter_TypeDefinitionIndex = 45862;

	struct alignas(4) PolaroidParameter
	{
		::System::Boolean PolaroidOverrideState; // 0x10
		::System::Single CenterX; // 0x14
		::System::Single CenterY; // 0x18
		::System::Single CenterYScale; // 0x1C
		::System::Single Width; // 0x20
		::System::Single Height; // 0x24
		::System::Single LengthRate; // 0x28
		::System::Single LengthRateLerp; // 0x2C
		::UnityEngine::Color PolaroidColor; // 0x30
		::System::Single PolaroidScale; // 0x40
		::System::Single Rotate; // 0x44

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_POLAROIDPARAMETER__CTOR_OFFSET))(this, a1);
		}
	};
}
