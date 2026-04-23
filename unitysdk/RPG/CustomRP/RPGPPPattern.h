#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class ColorParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }
namespace UnityEngine::Rendering { class TextureParameter; }
namespace UnityEngine::Rendering { class Vector4Parameter; }

#define RPG_CUSTOMRP_RPGPPPATTERN__CTOR_OFFSET UNITYSDK_OFFSET(0x181663D0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGPPPattern_TypeDefinitionIndex = 35209;

	class RPGPPPattern : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::UnityEngine::Rendering::FloatParameter* _GrowingProgress; // 0x38
		::UnityEngine::Rendering::Vector4Parameter* _MainTex_ST; // 0x40
		::UnityEngine::Rendering::Vector4Parameter* _MainTex1_ST; // 0x48
		::UnityEngine::Rendering::TextureParameter* _MainTex1; // 0x50
		::UnityEngine::Rendering::TextureParameter* _DetailTex1; // 0x58
		::UnityEngine::Rendering::TextureParameter* _MaskTex1; // 0x60
		::UnityEngine::Rendering::Vector4Parameter* _MainTexSpeed; // 0x68
		::UnityEngine::Rendering::BoolParameter* _UseNoiseGlitch; // 0x70
		::UnityEngine::Rendering::FloatParameter* _NoiseSpeed; // 0x78
		::UnityEngine::Rendering::FloatParameter* _NoiseSeed1; // 0x80
		::UnityEngine::Rendering::FloatParameter* _NoiseSeed2; // 0x88
		::UnityEngine::Rendering::FloatParameter* _NoiseIntensity; // 0x90
		::UnityEngine::Rendering::BoolParameter* _UseDualTex; // 0x98
		::UnityEngine::Rendering::TextureParameter* _MainTex2; // 0xA0
		::UnityEngine::Rendering::TextureParameter* _DetailTex2; // 0xA8
		::UnityEngine::Rendering::TextureParameter* _MaskTex2; // 0xB0
		::UnityEngine::Rendering::ColorParameter* _PPPattern_Color; // 0xB8
		::UnityEngine::Rendering::ColorParameter* _PPPattern_Color1; // 0xC0
		::UnityEngine::Rendering::FloatParameter* _LightedSpeed; // 0xC8
		::UnityEngine::Rendering::FloatParameter* _LightedStar; // 0xD0
		::UnityEngine::Rendering::FloatParameter* _LightedWidth; // 0xD8
		::UnityEngine::Rendering::FloatParameter* _ColorBlendRange; // 0xE0
		::UnityEngine::Rendering::TextureParameter* _CloudColor; // 0xE8
		::UnityEngine::Rendering::Vector4Parameter* _CloudColor_ST; // 0xF0
		::UnityEngine::Rendering::Vector4Parameter* _CloudScale; // 0xF8
		::UnityEngine::Rendering::Vector4Parameter* _CloudMaskScale; // 0x100
		::UnityEngine::Rendering::BoolParameter* _UseOldFilm; // 0x108
		::UnityEngine::Rendering::FloatParameter* _Saturation; // 0x110
		::UnityEngine::Rendering::Vector4Parameter* _DotST; // 0x118
		::UnityEngine::Rendering::FloatParameter* _DotSpeed; // 0x120
		::UnityEngine::Rendering::FloatParameter* _DotInts; // 0x128
		::UnityEngine::Rendering::Vector4Parameter* _LineST; // 0x130
		::UnityEngine::Rendering::FloatParameter* _LineSpeed; // 0x138
		::UnityEngine::Rendering::FloatParameter* _LineInts; // 0x140
		::UnityEngine::Rendering::Vector4Parameter* _VigST; // 0x148
		::UnityEngine::Rendering::FloatParameter* _VigIntst; // 0x150
		::UnityEngine::Rendering::ColorParameter* _FrameColor; // 0x158
		::UnityEngine::Rendering::ColorParameter* _BaseColor; // 0x160
		::UnityEngine::Rendering::BoolParameter* _UseMonkeyPattern; // 0x168
		::UnityEngine::Rendering::FloatParameter* _MK_Coverage; // 0x170
		::UnityEngine::Rendering::Vector4Parameter* _MK_NoiseTiling; // 0x178
		::UnityEngine::Rendering::FloatParameter* _MK_NoiseSpeed; // 0x180
		::UnityEngine::Rendering::FloatParameter* _MK_DetailMapWeight; // 0x188
		::UnityEngine::Rendering::FloatParameter* _MK_GradientWeight; // 0x190
		::UnityEngine::Rendering::ColorParameter* _MK_BGBrightColor; // 0x198
		::UnityEngine::Rendering::ColorParameter* _MK_BGDarkColor; // 0x1A0
		::UnityEngine::Rendering::ColorParameter* _MK_BrightColor0; // 0x1A8
		::UnityEngine::Rendering::ColorParameter* _MK_DarkColor0; // 0x1B0
		::UnityEngine::Rendering::ColorParameter* _MK_BleedColor0; // 0x1B8
		::UnityEngine::Rendering::ColorParameter* _MK_BrightColor1; // 0x1C0
		::UnityEngine::Rendering::ColorParameter* _MK_DarkColor1; // 0x1C8
		::UnityEngine::Rendering::ColorParameter* _MK_BleedColor1; // 0x1D0
		::UnityEngine::Rendering::FloatParameter* _MK_Transparency; // 0x1D8
		::UnityEngine::Rendering::FloatParameter* _CenterX; // 0x1E0
		::UnityEngine::Rendering::FloatParameter* _CenterY; // 0x1E8
		::UnityEngine::Rendering::FloatParameter* _StartRadius; // 0x1F0
		::UnityEngine::Rendering::FloatParameter* _BlendRadius; // 0x1F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGPPPATTERN__CTOR_OFFSET))(this);
		}
	};
}
