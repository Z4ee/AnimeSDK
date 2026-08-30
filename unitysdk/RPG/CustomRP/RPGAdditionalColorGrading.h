#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace RPG::CustomRP { class ColorGradingGradualParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }
namespace UnityEngine::Rendering { class TextureParameter; }
namespace UnityEngine::Rendering { class Vector2Parameter; }

#define RPG_CUSTOMRP_RPGADDITIONALCOLORGRADING__CTOR_OFFSET UNITYSDK_OFFSET(0x185859A0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGAdditionalColorGrading_TypeDefinitionIndex = 37097;

	class RPGAdditionalColorGrading : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::UnityEngine::Rendering::TextureParameter* CustomLUT; // 0x38
		::UnityEngine::Rendering::FloatParameter* CustomLUTIntensity; // 0x40
		::UnityEngine::Rendering::TextureParameter* GradualNoiseTex; // 0x48
		::UnityEngine::Rendering::FloatParameter* GradualNoiseIntensity; // 0x50
		::UnityEngine::Rendering::Vector2Parameter* GradualNoiseScale; // 0x58
		::UnityEngine::Rendering::Vector2Parameter* GradualNoiseOffset; // 0x60
		::RPG::CustomRP::ColorGradingGradualParameter* ColorGradingGradualParam; // 0x68
		::UnityEngine::Rendering::FloatParameter* CenterX; // 0x70
		::UnityEngine::Rendering::FloatParameter* CenterY; // 0x78
		::UnityEngine::Rendering::FloatParameter* StartRadius; // 0x80
		::UnityEngine::Rendering::FloatParameter* Roundness; // 0x88
		::UnityEngine::Rendering::FloatParameter* BlendRadius; // 0x90
		::UnityEngine::Rendering::FloatParameter* Angle; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGADDITIONALCOLORGRADING__CTOR_OFFSET))(this);
		}
	};
}
