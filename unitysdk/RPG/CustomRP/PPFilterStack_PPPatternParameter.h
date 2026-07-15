#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }

#define RPG_CUSTOMRP_PPFILTERSTACK_PPPATTERNPARAMETER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x384F110)
#define RPG_CUSTOMRP_PPFILTERSTACK_PPPATTERNPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x384F100)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PPFilterStack_PPPatternParameter_TypeDefinitionIndex = 49496;

	struct alignas(8) PPFilterStack_PPPatternParameter
	{
		::System::Boolean PPPatternOverrideState; // 0x10
		::System::Single _GrowingProgress; // 0x14
		::UnityEngine::Vector4 _MainTex_ST; // 0x18
		::UnityEngine::Vector4 _MainTex1_ST; // 0x28
		::UnityEngine::Texture* _MainTex1; // 0x38
		::UnityEngine::Texture* _DetailTex1; // 0x40
		::UnityEngine::Texture* _MaskTex1; // 0x48
		::UnityEngine::Vector4 _MainTexSpeed; // 0x50
		::System::Boolean _UseNoiseGlitch; // 0x60
		::System::Single _NoiseSpeed; // 0x64
		::System::Single _NoiseSeed1; // 0x68
		::System::Single _NoiseSeed2; // 0x6C
		::System::Single _NoiseIntensity; // 0x70
		::System::Boolean _UseNoiseGlitchOverrideState; // 0x74
		::System::Boolean _NoiseSpeedOverrideState; // 0x75
		::System::Boolean _NoiseSeed1OverrideState; // 0x76
		::System::Boolean _NoiseSeed2OverrideState; // 0x77
		::System::Boolean _NoiseIntensityOverrideState; // 0x78
		::System::Boolean _MainTexSpeedOverrideState; // 0x79
		::System::Boolean _UseDualTex; // 0x7A
		::UnityEngine::Texture* _MainTex2; // 0x80
		::UnityEngine::Texture* _DetailTex2; // 0x88
		::UnityEngine::Texture* _MaskTex2; // 0x90
		::UnityEngine::Color _PPPattern_Color; // 0x98
		::UnityEngine::Color _PPPattern_Color1; // 0xA8
		::System::Single _LightedSpeed; // 0xB8
		::System::Single _LightedStar; // 0xBC
		::System::Single _LightedWidth; // 0xC0
		::System::Single _ColorBlendRange; // 0xC4
		::System::Boolean _GrowingProgressOverrideState; // 0xC8
		::System::Boolean _MainTex_STOverrideState; // 0xC9
		::System::Boolean _MainTex1_STOverrideState; // 0xCA
		::System::Boolean _MainTex1OverrideState; // 0xCB
		::System::Boolean _DetailTex1OverrideState; // 0xCC
		::System::Boolean _MaskTex1OverrideState; // 0xCD
		::System::Boolean _UseDualTexOverrideState; // 0xCE
		::System::Boolean _MainTex2OverrideState; // 0xCF
		::System::Boolean _DetailTex2OverrideState; // 0xD0
		::System::Boolean _MaskTex2OverrideState; // 0xD1
		::System::Boolean _PPPattern_ColorOverrideState; // 0xD2
		::System::Boolean _PPPattern_Color1OverrideState; // 0xD3
		::System::Boolean _LightedSpeedOverrideState; // 0xD4
		::System::Boolean _LightedStarOverrideState; // 0xD5
		::System::Boolean _LightedWidthOverrideState; // 0xD6
		::System::Boolean _ColorBlendRangeOverrideState; // 0xD7
		::UnityEngine::Texture* _CloudColor; // 0xD8
		::UnityEngine::Vector4 _CloudColor_ST; // 0xE0
		::UnityEngine::Vector4 _CloudScale; // 0xF0
		::UnityEngine::Vector4 _CloudMaskScale; // 0x100
		::System::Boolean _CloudColorOverrideState; // 0x110
		::System::Boolean _CloudColor_STOverrideState; // 0x111
		::System::Boolean _CloudScaleOverrideState; // 0x112
		::System::Boolean _CloudMaskScaleOverrideState; // 0x113
		::System::Boolean _UseOldFilm; // 0x114
		::System::Single _Saturation; // 0x118
		::UnityEngine::Vector4 _DotST; // 0x11C
		::System::Single _DotSpeed; // 0x12C
		::System::Single _DotInts; // 0x130
		::UnityEngine::Vector4 _LineST; // 0x134
		::System::Single _LineSpeed; // 0x144
		::System::Single _LineInts; // 0x148
		::UnityEngine::Vector4 _VigST; // 0x14C
		::System::Single _VigIntst; // 0x15C
		::UnityEngine::Color _FrameColor; // 0x160
		::UnityEngine::Color _BaseColor; // 0x170
		::System::Boolean _UseOldFilmOverrideState; // 0x180
		::System::Boolean _SaturationOverrideState; // 0x181
		::System::Boolean _DotSTOverrideState; // 0x182
		::System::Boolean _DotSpeedOverrideState; // 0x183
		::System::Boolean _DotIntsOverrideState; // 0x184
		::System::Boolean _LineSTOverrideState; // 0x185
		::System::Boolean _LineSpeedOverrideState; // 0x186
		::System::Boolean _LineIntsOverrideState; // 0x187
		::System::Boolean _VigSTOverrideState; // 0x188
		::System::Boolean _VigIntstOverrideState; // 0x189
		::System::Boolean _FrameColorOverrideState; // 0x18A
		::System::Boolean _BaseColorOverrideState; // 0x18B
		::System::Boolean _UseMonkeyPattern; // 0x18C
		::System::Single _MK_Coverage; // 0x190
		::UnityEngine::Vector4 _MK_NoiseTiling; // 0x194
		::System::Single _MK_NoiseSpeed; // 0x1A4
		::System::Single _MK_DetailMapWeight; // 0x1A8
		::System::Single _MK_GradientWeight; // 0x1AC
		::UnityEngine::Color _MK_BGBrightColor; // 0x1B0
		::UnityEngine::Color _MK_BGDarkColor; // 0x1C0
		::UnityEngine::Color _MK_BrightColor0; // 0x1D0
		::UnityEngine::Color _MK_DarkColor0; // 0x1E0
		::UnityEngine::Color _MK_BleedColor0; // 0x1F0
		::UnityEngine::Color _MK_BrightColor1; // 0x200
		::UnityEngine::Color _MK_DarkColor1; // 0x210
		::UnityEngine::Color _MK_BleedColor1; // 0x220
		::System::Single _MK_Transparency; // 0x230
		::System::Boolean _UseMonkeyPatternOverrideState; // 0x234
		::System::Boolean _MK_CoverageOverrideState; // 0x235
		::System::Boolean _MK_NoiseTilingOverrideState; // 0x236
		::System::Boolean _MK_NoiseSpeedOverrideState; // 0x237
		::System::Boolean _MK_DetailMapWeightOverrideState; // 0x238
		::System::Boolean _MK_GradientWeightOverrideState; // 0x239
		::System::Boolean _MK_BGBrightColorOverrideState; // 0x23A
		::System::Boolean _MK_BGDarkColorOverrideState; // 0x23B
		::System::Boolean _MK_BrightColor0OverrideState; // 0x23C
		::System::Boolean _MK_DarkColor0OverrideState; // 0x23D
		::System::Boolean _MK_BleedColor0OverrideState; // 0x23E
		::System::Boolean _MK_BrightColor1OverrideState; // 0x23F
		::System::Boolean _MK_DarkColor1OverrideState; // 0x240
		::System::Boolean _MK_BleedColor1OverrideState; // 0x241
		::System::Boolean _MK_TransparencyOverrideState; // 0x242
		::System::Single _CenterX; // 0x244
		::System::Single _CenterY; // 0x248
		::System::Single _StartRadius; // 0x24C
		::System::Single _BlendRadius; // 0x250
		::System::Boolean _CenterXOverrideState; // 0x254
		::System::Boolean _CenterYOverrideState; // 0x255
		::System::Boolean _StartRadiusOverrideState; // 0x256
		::System::Boolean _BlendRadiusOverrideState; // 0x257

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_PPPATTERNPARAMETER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::CustomRP::PPFilterStack_PPPatternParameter a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_PPPatternParameter, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_PPPATTERNPARAMETER__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}
