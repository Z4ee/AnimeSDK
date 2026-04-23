#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_DIRECTIONBLURPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0xE4930)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int DirectionBlurParameter_TypeDefinitionIndex = 45311;

	struct alignas(4) DirectionBlurParameter
	{
		::System::Boolean enableDirectionBlur; // 0x10
		::System::Single directionBlurDegree; // 0x14
		::System::Single directionBlurAngle; // 0x18
		::System::Single directionBlurOffset; // 0x1C
		::System::Boolean AvoidBrightnessBug; // 0x20

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DIRECTIONBLURPARAMETER__CTOR_OFFSET))(this, a1);
		}
	};
}
