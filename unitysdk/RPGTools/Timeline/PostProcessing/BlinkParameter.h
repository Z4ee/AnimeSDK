#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKPARAMETER_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x3B773F0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKPARAMETER_METHOD_2_9550997717DE4AD0_OFFSET UNITYSDK_OFFSET(0x1B0A2D60)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BlinkParameter_TypeDefinitionIndex = 48995;

	struct alignas(4) BlinkParameter
	{
		::System::Single Duration; // 0x10
		::UnityEngine::Color Color; // 0x14
		::System::Single Dist; // 0x24
		::System::Single Radii; // 0x28
		::System::Single Chick; // 0x2C
		::System::Single Aspect; // 0x30
		::System::Single DownScale; // 0x34
		::System::Single SmoothRange; // 0x38
		::System::Single Offset; // 0x3C
		::System::Single Rotation; // 0x40
		::System::Boolean IsActive; // 0x44

		static ::RPGTools::Timeline::PostProcessing::BlinkParameter Method_2_9550997717DE4AD0(::System::Boolean a1)
		{
			return ((::RPGTools::Timeline::PostProcessing::BlinkParameter(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKPARAMETER_METHOD_2_9550997717DE4AD0_OFFSET))(a1);
		}

		::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKPARAMETER_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
		}
	};
}
