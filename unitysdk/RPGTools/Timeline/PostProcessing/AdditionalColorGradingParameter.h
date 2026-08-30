#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ColorGradingGradual.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_ADDITIONALCOLORGRADINGPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E7C0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int AdditionalColorGradingParameter_TypeDefinitionIndex = 48982;

	struct alignas(8) AdditionalColorGradingParameter
	{
		::System::Boolean ColorGradingMethodEnable; // 0x10
		::UnityEngine::Texture2D* CustomLUT; // 0x18
		::System::Single CustomLUTIntensity; // 0x20
		::System::Boolean GradualNoiseTexOverrideState; // 0x24
		::UnityEngine::Texture* GradualNoiseTex; // 0x28
		::System::Boolean GradualNoiseIntensityOverrideState; // 0x30
		::System::Single GradualNoiseIntensity; // 0x34
		::System::Boolean GradualNoiseScaleOverrideState; // 0x38
		::UnityEngine::Vector2 GradualNoiseScale; // 0x3C
		::System::Boolean GradualNoiseOffsetOverrideState; // 0x44
		::UnityEngine::Vector2 GradualNoiseOffset; // 0x48
		::System::Boolean ColorGradingGradualParamOverrideState; // 0x50
		::RPG::CustomRP::ColorGradingGradual ColorGradingGradualParam; // 0x54
		::System::Boolean CenterXOverrideState; // 0x58
		::System::Single CenterX; // 0x5C
		::System::Boolean CenterYOverrideState; // 0x60
		::System::Single CenterY; // 0x64
		::System::Boolean StartRadiusOverrideState; // 0x68
		::System::Single StartRadius; // 0x6C
		::System::Boolean RoundnessOverrideState; // 0x70
		::System::Single Roundness; // 0x74
		::System::Boolean BlendRadiusOverrideState; // 0x78
		::System::Single BlendRadius; // 0x7C
		::System::Boolean AngleOverrideState; // 0x80
		::System::Single Angle; // 0x84

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_ADDITIONALCOLORGRADINGPARAMETER__CTOR_OFFSET))(this, a1);
		}
	};
}
