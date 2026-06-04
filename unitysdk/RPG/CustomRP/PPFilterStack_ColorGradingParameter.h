#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ColorGradingGradual.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CUSTOMRP_PPFILTERSTACK_COLORGRADINGPARAMETER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x146BB0)
#define RPG_CUSTOMRP_PPFILTERSTACK_COLORGRADINGPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x146BA0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PPFilterStack_ColorGradingParameter_TypeDefinitionIndex = 48477;

	struct alignas(4) PPFilterStack_ColorGradingParameter
	{
		::System::Boolean ColorGradingMethodEnable; // 0x10
		::System::Boolean ColorCorrectionShadowMaxOverrideState; // 0x11
		::System::Single ColorCorrectionShadowMax; // 0x14
		::System::Boolean LevelHighlightToneOverrideState; // 0x18
		::System::Single LevelHighlightTone; // 0x1C
		::System::Boolean ColorCorrectionHighlightMinOverrideState; // 0x20
		::System::Single ColorCorrectionHighlightMin; // 0x24
		::System::Boolean LevelShadowToneOverrideState; // 0x28
		::System::Single LevelShadowTone; // 0x2C
		::System::Boolean LevelColorOverrideState; // 0x30
		::UnityEngine::Color LevelColor; // 0x34
		::System::Boolean ColorSaturationGlobalOverrideState; // 0x44
		::UnityEngine::Vector4 ColorSaturationGlobalColor; // 0x48
		::System::Single ColorSaturationGlobalValue; // 0x58
		::System::Boolean ColorContrastGlobalOverrideState; // 0x5C
		::UnityEngine::Vector4 ColorContrastGlobalColor; // 0x60
		::System::Single ColorContrastGlobalValue; // 0x70
		::System::Boolean ColorGainGlobalOverrideState; // 0x74
		::UnityEngine::Vector4 ColorGainGlobalColor; // 0x78
		::System::Single ColorGainGlobalValue; // 0x88
		::System::Boolean ColorSaturationShadowOverrideState; // 0x8C
		::UnityEngine::Vector4 ColorSaturationShadowColor; // 0x90
		::System::Single ColorSaturationShadowValue; // 0xA0
		::System::Boolean ColorContrastShadowOverrideState; // 0xA4
		::UnityEngine::Vector4 ColorContrastShadowColor; // 0xA8
		::System::Single ColorContrastShadowValue; // 0xB8
		::System::Boolean ColorGainShadowOverrideState; // 0xBC
		::UnityEngine::Vector4 ColorGainShadowColor; // 0xC0
		::System::Single ColorGainShadowValue; // 0xD0
		::System::Boolean ColorSaturationMidtoneOverrideState; // 0xD4
		::UnityEngine::Vector4 ColorSaturationMidtoneColor; // 0xD8
		::System::Single ColorSaturationMidtoneValue; // 0xE8
		::System::Boolean ColorContrastMidtoneOverrideState; // 0xEC
		::UnityEngine::Vector4 ColorContrastMidtoneColor; // 0xF0
		::System::Single ColorContrastMidtoneValue; // 0x100
		::System::Boolean ColorGainMidtoneOverrideState; // 0x104
		::UnityEngine::Vector4 ColorGainMidtoneColor; // 0x108
		::System::Single ColorGainMidtoneValue; // 0x118
		::System::Boolean ColorSaturationHighlightOverrideState; // 0x11C
		::UnityEngine::Vector4 ColorSaturationHighlightColor; // 0x120
		::System::Single ColorSaturationHighlightValue; // 0x130
		::System::Boolean ColorContrastHighlightOverrideState; // 0x134
		::UnityEngine::Vector4 ColorContrastHighlightColor; // 0x138
		::System::Single ColorContrastHighlightValue; // 0x148
		::System::Boolean ColorGainHighlightOverrideState; // 0x14C
		::UnityEngine::Vector4 ColorGainHighlightColor; // 0x150
		::System::Single ColorGainHighlightValue; // 0x160
		::System::Boolean ColorGradingGradualParamOverrideState; // 0x164
		::RPG::CustomRP::ColorGradingGradual ColorGradingGradualParam; // 0x168
		::System::Boolean CenterXOverrideState; // 0x16C
		::System::Single CenterX; // 0x170
		::System::Boolean CenterYOverrideState; // 0x174
		::System::Single CenterY; // 0x178
		::System::Boolean StartRadiusOverrideState; // 0x17C
		::System::Single StartRadius; // 0x180
		::System::Boolean BlendRadiusOverrideState; // 0x184
		::System::Single BlendRadius; // 0x188
		::System::Boolean AngleOverrideState; // 0x18C
		::System::Single Angle; // 0x190

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_COLORGRADINGPARAMETER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::CustomRP::PPFilterStack_ColorGradingParameter a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_ColorGradingParameter, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_COLORGRADINGPARAMETER__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}
