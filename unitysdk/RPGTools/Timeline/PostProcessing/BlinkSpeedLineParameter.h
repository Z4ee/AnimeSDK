#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINEPARAMETER_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x8A000)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINEPARAMETER_METHOD_2_CFB02B3D31F59D6F_OFFSET UNITYSDK_OFFSET(0xAB849D0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BlinkSpeedLineParameter_TypeDefinitionIndex = 39339;

	struct alignas(4) BlinkSpeedLineParameter
	{
		::System::Single Duration; // 0x10
		::System::Single Offset; // 0x14
		::UnityEngine::Color Color; // 0x18
		::System::Single Dist; // 0x28
		::System::Single Radii; // 0x2C
		::System::Single Chick; // 0x30
		::System::Single Aspect; // 0x34
		::System::Single DownScale; // 0x38
		::System::Single SmoothRange; // 0x3C
		::System::Single Rotation; // 0x40
		::System::Single DistortStrength; // 0x44
		::System::Single DistortFreq; // 0x48
		::System::Single BlinkSpeedlineSpeed; // 0x4C
		::System::Single BlinkSpeedlineRange; // 0x50
		::System::Single BlinkSpeedlineLength; // 0x54
		::System::Single BlinkSpeedlineWidth; // 0x58
		::System::Boolean IsActive; // 0x5C

		static ::RPGTools::Timeline::PostProcessing::BlinkSpeedLineParameter Method_2_CFB02B3D31F59D6F(::System::Boolean a1)
		{
			return ((::RPGTools::Timeline::PostProcessing::BlinkSpeedLineParameter(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINEPARAMETER_METHOD_2_CFB02B3D31F59D6F_OFFSET))(a1);
		}

		::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINEPARAMETER_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
		}
	};
}
