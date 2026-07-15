#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_CUSTOMRP_PPFILTERSTACK_BLINKPARAMETER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3955560)
#define RPG_CUSTOMRP_PPFILTERSTACK_BLINKPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x3955510)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PPFilterStack_BlinkParameter_TypeDefinitionIndex = 49493;

	struct alignas(4) PPFilterStack_BlinkParameter
	{
		::System::Boolean BlinkOverrideState; // 0x10
		::System::Single BlinkDuration; // 0x14
		::System::Single BlinkOffset; // 0x18
		::UnityEngine::Color BlinkMaskColor; // 0x1C
		::System::Single ChinkScale; // 0x2C
		::System::Single Dist; // 0x30
		::System::Single Radii; // 0x34
		::System::Single Aspect; // 0x38
		::System::Single DownScale; // 0x3C
		::System::Single SmoothRange; // 0x40
		::System::Single Rotation; // 0x44
		::System::Single DistortStrength; // 0x48
		::System::Single DistortFreq; // 0x4C
		::System::Boolean BlinkReverse; // 0x50
		::System::Boolean EnableBlinkSpeedline; // 0x51
		::System::Single BlinkSpeedlineSpeed; // 0x54
		::System::Single BlinkSpeedlineRange; // 0x58
		::System::Single BlinkSpeedlineLength; // 0x5C
		::System::Single BlinkSpeedlineWidth; // 0x60
		::System::Boolean BlinkDurationOverrideState; // 0x64
		::System::Boolean BlinkOffsetOverrideState; // 0x65
		::System::Boolean BlinkMaskColorOverrideState; // 0x66
		::System::Boolean ChinkScaleOverrideState; // 0x67
		::System::Boolean DistOverrideState; // 0x68
		::System::Boolean RadiiOverrideState; // 0x69
		::System::Boolean AspectOverrideState; // 0x6A
		::System::Boolean DownScaleOverrideState; // 0x6B
		::System::Boolean SmoothRangeOverrideState; // 0x6C
		::System::Boolean RotationOverrideState; // 0x6D
		::System::Boolean DistortStrengthOverrideState; // 0x6E
		::System::Boolean DistortFreqOverrideState; // 0x6F
		::System::Boolean BlinkReverseOverrideState; // 0x70
		::System::Boolean EnableBlinkSpeedlineOverrideState; // 0x71
		::System::Boolean BlinkSpeedlineSpeedOverrideState; // 0x72
		::System::Boolean BlinkSpeedlineRangeOverrideState; // 0x73
		::System::Boolean BlinkSpeedlineLengthOverrideState; // 0x74
		::System::Boolean BlinkSpeedlineWidthOverrideState; // 0x75

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_BLINKPARAMETER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::CustomRP::PPFilterStack_BlinkParameter a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_BlinkParameter, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_BLINKPARAMETER__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}
