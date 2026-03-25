#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ColorGradingGradual.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x8A770)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ColorGradingParameter_TypeDefinitionIndex = 39360;

	struct alignas(4) ColorGradingParameter
	{
		::System::Boolean ColorGradingMethodEnable; // 0x10
		::System::Single LevelHighlightTone; // 0x14
		::System::Single LevelShadowTone; // 0x18
		::UnityEngine::Color LevelColor; // 0x1C
		::System::Boolean ColorSaturationGlobalOverrideState; // 0x2C
		::UnityEngine::Color ColorSaturationGlobalColor; // 0x30
		::System::Single ColorSaturationGlobalValue; // 0x40
		::System::Boolean ColorContrastGlobalOverrideState; // 0x44
		::UnityEngine::Color ColorContrastGlobalColor; // 0x48
		::System::Single ColorContrastGlobalValue; // 0x58
		::System::Boolean ColorGainGlobalOverrideState; // 0x5C
		::UnityEngine::Color ColorGainGlobalColor; // 0x60
		::System::Single ColorGainGlobalValue; // 0x70
		::System::Boolean ColorSaturationShadowOverrideState; // 0x74
		::UnityEngine::Color ColorSaturationShadowColor; // 0x78
		::System::Single ColorSaturationShadowValue; // 0x88
		::System::Boolean ColorContrastShadowOverrideState; // 0x8C
		::UnityEngine::Color ColorContrastShadowColor; // 0x90
		::System::Single ColorContrastShadowValue; // 0xA0
		::System::Boolean ColorGainShadowOverrideState; // 0xA4
		::UnityEngine::Color ColorGainShadowColor; // 0xA8
		::System::Single ColorGainShadowValue; // 0xB8
		::System::Boolean ColorSaturationMidtoneOverrideState; // 0xBC
		::UnityEngine::Color ColorSaturationMidtoneColor; // 0xC0
		::System::Single ColorSaturationMidtoneValue; // 0xD0
		::System::Boolean ColorContrastMidtoneOverrideState; // 0xD4
		::UnityEngine::Color ColorContrastMidtoneColor; // 0xD8
		::System::Single ColorContrastMidtoneValue; // 0xE8
		::System::Boolean ColorGainMidtoneOverrideState; // 0xEC
		::UnityEngine::Color ColorGainMidtoneColor; // 0xF0
		::System::Single ColorGainMidtoneValue; // 0x100
		::System::Boolean ColorSaturationHighlightOverrideState; // 0x104
		::UnityEngine::Color ColorSaturationHighlightColor; // 0x108
		::System::Single ColorSaturationHighlightValue; // 0x118
		::System::Boolean ColorContrastHighlightOverrideState; // 0x11C
		::UnityEngine::Color ColorContrastHighlightColor; // 0x120
		::System::Single ColorContrastHighlightValue; // 0x130
		::System::Boolean ColorGainHighlightOverrideState; // 0x134
		::UnityEngine::Color ColorGainHighlightColor; // 0x138
		::System::Single ColorGainHighlightValue; // 0x148
		::System::Boolean ColorGradingGradualParamOverrideState; // 0x14C
		::RPG::CustomRP::ColorGradingGradual ColorGradingGradualParam; // 0x150
		::System::Boolean CenterXOverrideState; // 0x154
		::System::Single CenterX; // 0x158
		::System::Boolean CenterYOverrideState; // 0x15C
		::System::Single CenterY; // 0x160
		::System::Boolean StartRadiusOverrideState; // 0x164
		::System::Single StartRadius; // 0x168
		::System::Boolean BlendRadiusOverrideState; // 0x16C
		::System::Single BlendRadius; // 0x170
		::System::Boolean AngleOverrideState; // 0x174
		::System::Single Angle; // 0x178

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGPARAMETER__CTOR_OFFSET))(this, a1);
		}
	};
}
