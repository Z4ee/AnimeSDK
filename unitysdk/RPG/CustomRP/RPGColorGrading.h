#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"

namespace RPG::CustomRP { class ColorGradingGradualParameter; }
namespace RPG::CustomRP { class TrackBallParameter; }
namespace UnityEngine::Rendering { class ColorParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }
namespace UnityEngine::Rendering { class TextureParameter; }

#define RPG_CUSTOMRP_RPGCOLORGRADING_GETLUTFORMAT_OFFSET UNITYSDK_OFFSET(0x18150F10)
#define RPG_CUSTOMRP_RPGCOLORGRADING__CCTOR_OFFSET UNITYSDK_OFFSET(0x18151790)
#define RPG_CUSTOMRP_RPGCOLORGRADING__CTOR_OFFSET UNITYSDK_OFFSET(0x18150F70)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGColorGrading_TypeDefinitionIndex = 35171;

	class RPGColorGrading : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		static ::System::Int32* StaticGet_k_Lut2DSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RPGColorGrading_TypeDefinitionIndex)->GetStaticField(0x11320);
		}
		::UnityEngine::Rendering::FloatParameter* ColorCorrectionShadowMax; // 0x38
		::UnityEngine::Rendering::FloatParameter* ColorCorrectionHighlightMin; // 0x40
		::UnityEngine::Rendering::FloatParameter* LevelHighLightTone; // 0x48
		::UnityEngine::Rendering::FloatParameter* LevelShadowTone; // 0x50
		::UnityEngine::Rendering::ColorParameter* LevelColor; // 0x58
		::RPG::CustomRP::TrackBallParameter* ColorSaturationGlobal; // 0x60
		::RPG::CustomRP::TrackBallParameter* ColorContrastGlobal; // 0x68
		::RPG::CustomRP::TrackBallParameter* ColorGainGlobal; // 0x70
		::RPG::CustomRP::TrackBallParameter* ColorSaturationShadow; // 0x78
		::RPG::CustomRP::TrackBallParameter* ColorContrastShadow; // 0x80
		::RPG::CustomRP::TrackBallParameter* ColorGainShadow; // 0x88
		::RPG::CustomRP::TrackBallParameter* ColorSaturationMidtone; // 0x90
		::RPG::CustomRP::TrackBallParameter* ColorContrastMidtone; // 0x98
		::RPG::CustomRP::TrackBallParameter* ColorGainMidtone; // 0xA0
		::RPG::CustomRP::TrackBallParameter* ColorSaturationHighlight; // 0xA8
		::RPG::CustomRP::TrackBallParameter* ColorContrastHighlight; // 0xB0
		::RPG::CustomRP::TrackBallParameter* ColorGainHighlight; // 0xB8
		::UnityEngine::Rendering::TextureParameter* CustomLUT; // 0xC0
		::UnityEngine::Rendering::FloatParameter* CustomLUTIntensity; // 0xC8
		::RPG::CustomRP::ColorGradingGradualParameter* ColorGradingGradualParam; // 0xD0
		::UnityEngine::Rendering::FloatParameter* CenterX; // 0xD8
		::UnityEngine::Rendering::FloatParameter* CenterY; // 0xE0
		::UnityEngine::Rendering::FloatParameter* StartRadius; // 0xE8
		::UnityEngine::Rendering::FloatParameter* BlendRadius; // 0xF0
		::UnityEngine::Rendering::FloatParameter* Angle; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGCOLORGRADING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGCOLORGRADING__CCTOR_OFFSET))();
		}

		static ::UnityEngine::RenderTextureFormat GetLutFormat()
		{
			return ((::UnityEngine::RenderTextureFormat(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGCOLORGRADING_GETLUTFORMAT_OFFSET))();
		}
	};
}
