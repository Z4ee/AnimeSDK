#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigEntityAvatarColorCorrections; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector4KeyframeCurve; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }
namespace UnityEngine::Rendering::Universal { class CharacterColorCorrection; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1C489C80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_1676BB4855527361_OFFSET UNITYSDK_OFFSET(0x1C490040)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_2C900C7BC409CFF2_OFFSET UNITYSDK_OFFSET(0x1C49BE40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0x1C48E060)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x1C48A460)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1C48A450)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_8462E42B7CEE1998_1_OFFSET UNITYSDK_OFFSET(0x1C4A33C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_8462E42B7CEE1998_OFFSET UNITYSDK_OFFSET(0x1C4A0210)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0x1C48AD50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A6570)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessCharacterColorCorrection_TypeDefinitionIndex = 85173;

	class ESPostProcessCharacterColorCorrection : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::CharacterColorCorrection*>
	{
	public:
		::MoleMole::Config::ConfigEntityAvatarColorCorrections* m_stAsset; // 0xB0
		::System::Single _DefaultPostExposure; // 0xB8
		::System::Single _DefaultContrast; // 0xBC
		::System::Single _DefaultSaturation; // 0xC0
		::UnityEngine::Color _VolDefault_ambient; // 0xC4
		::UnityEngine::Color _VolDefault_skinFrontTint; // 0xD4
		::UnityEngine::Color _VolDefault_frontTint; // 0xE4
		::UnityEngine::Color _VolDefault_skinSssTint; // 0xF4
		::UnityEngine::Color _VolDefault_sssTint; // 0x104
		::UnityEngine::Color _VolDefault_skinShallowTint; // 0x114
		::UnityEngine::Color _VolDefault_shallowTint; // 0x124
		::UnityEngine::Color _VolDefault_skinShallowFadeTint; // 0x134
		::UnityEngine::Color _VolDefault_shallowFadeTint; // 0x144
		::UnityEngine::Color _VolDefault_skinShadowTint; // 0x154
		::UnityEngine::Color _VolDefault_shadowTint; // 0x164
		::UnityEngine::Color _VolDefault_skinShadowFadeTint; // 0x174
		::UnityEngine::Color _VolDefault_shadowFadeTint; // 0x184
		::UnityEngine::Color _VolDefault_ambientGradient; // 0x194
		::System::Boolean _VolDefault_useShadowTintAsOutline; // 0x1A4
		::UnityEngine::Color _VolDefault_outlineTint; // 0x1A8
		::System::Single _VolDefault_postExposure; // 0x1B8
		::System::Single _VolDefault_contrast; // 0x1BC
		::System::Single _VolDefault_saturation; // 0x1C0
		::System::Boolean _VolDefault_revertSaturation; // 0x1C4
		::System::Boolean _VolDefault_weaponUseCustomLightProperty; // 0x1C5
		::System::Single _VolDefault_rimGlowIntensityForChara; // 0x1C8
		::System::Single _VolDefault_rimGlowWidthForCharacter; // 0x1CC
		::UnityEngine::Color _VolDefault_rimGlowColorForCharacter; // 0x1D0
		::System::Single _VolDefault_rimGlowStyleForCharacter01; // 0x1E0
		::System::Single _VolDefault_rimGlowStyleForCharacter02; // 0x1E4
		::System::Single _VolDefault_rimGlowStyleForCharacter03; // 0x1E8
		::System::Single _VolDefault_rimGlowStyleForCharacter04; // 0x1EC
		::System::Boolean _VolDefault_enable; // 0x1F0
		::System::Single _VolDefault_toeStrength; // 0x1F4
		::System::Single _VolDefault_toeLength; // 0x1F8
		::System::Single _VolDefault_shoulderStrength; // 0x1FC
		::System::Single _VolDefault_shoulderLength; // 0x200
		::System::Single _VolDefault_shoulderAngle; // 0x204
		::System::Single _VolDefault_customGamma; // 0x208
		::UnityEngine::Vector4 _VolDefault_lift; // 0x20C
		::UnityEngine::Vector4 _VolDefault_gamma; // 0x21C
		::UnityEngine::Vector4 _VolDefault_gain; // 0x22C
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_master; // 0x240
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_red; // 0x248
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_green; // 0x250
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_blue; // 0x258
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_hueVsHue; // 0x260
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_hueVsSat; // 0x268
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_satVsSat; // 0x270
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_lumVsSat; // 0x278
		::System::Boolean _VolPreVal_ambient_overrideState; // 0x280
		::UnityEngine::Color _VolPreVal_ambient; // 0x284
		::System::Boolean _VolPreVal_skinFrontTint_overrideState; // 0x294
		::UnityEngine::Color _VolPreVal_skinFrontTint; // 0x298
		::System::Boolean _VolPreVal_frontTint_overrideState; // 0x2A8
		::UnityEngine::Color _VolPreVal_frontTint; // 0x2AC
		::System::Boolean _VolPreVal_skinSssTint_overrideState; // 0x2BC
		::UnityEngine::Color _VolPreVal_skinSssTint; // 0x2C0
		::System::Boolean _VolPreVal_sssTint_overrideState; // 0x2D0
		::UnityEngine::Color _VolPreVal_sssTint; // 0x2D4
		::System::Boolean _VolPreVal_skinShallowTint_overrideState; // 0x2E4
		::UnityEngine::Color _VolPreVal_skinShallowTint; // 0x2E8
		::System::Boolean _VolPreVal_shallowTint_overrideState; // 0x2F8
		::UnityEngine::Color _VolPreVal_shallowTint; // 0x2FC
		::System::Boolean _VolPreVal_skinShallowFadeTint_overrideState; // 0x30C
		::UnityEngine::Color _VolPreVal_skinShallowFadeTint; // 0x310
		::System::Boolean _VolPreVal_shallowFadeTint_overrideState; // 0x320
		::UnityEngine::Color _VolPreVal_shallowFadeTint; // 0x324
		::System::Boolean _VolPreVal_skinShadowTint_overrideState; // 0x334
		::UnityEngine::Color _VolPreVal_skinShadowTint; // 0x338
		::System::Boolean _VolPreVal_shadowTint_overrideState; // 0x348
		::UnityEngine::Color _VolPreVal_shadowTint; // 0x34C
		::System::Boolean _VolPreVal_skinShadowFadeTint_overrideState; // 0x35C
		::UnityEngine::Color _VolPreVal_skinShadowFadeTint; // 0x360
		::System::Boolean _VolPreVal_shadowFadeTint_overrideState; // 0x370
		::UnityEngine::Color _VolPreVal_shadowFadeTint; // 0x374
		::System::Boolean _VolPreVal_ambientGradient_overrideState; // 0x384
		::UnityEngine::Color _VolPreVal_ambientGradient; // 0x388
		::System::Boolean _VolPreVal_useShadowTintAsOutline_overrideState; // 0x398
		::System::Boolean _VolPreVal_useShadowTintAsOutline; // 0x399
		::System::Boolean _VolPreVal_outlineTint_overrideState; // 0x39A
		::UnityEngine::Color _VolPreVal_outlineTint; // 0x39C
		::System::Boolean _VolPreVal_postExposure_overrideState; // 0x3AC
		::System::Single _VolPreVal_postExposure; // 0x3B0
		::System::Boolean _VolPreVal_contrast_overrideState; // 0x3B4
		::System::Single _VolPreVal_contrast; // 0x3B8
		::System::Boolean _VolPreVal_saturation_overrideState; // 0x3BC
		::System::Single _VolPreVal_saturation; // 0x3C0
		::System::Boolean _VolPreVal_revertSaturation_overrideState; // 0x3C4
		::System::Boolean _VolPreVal_revertSaturation; // 0x3C5
		::System::Boolean _VolPreVal_weaponUseCustomLightProperty_overrideState; // 0x3C6
		::System::Boolean _VolPreVal_weaponUseCustomLightProperty; // 0x3C7
		::System::Boolean _VolPreVal_rimGlowIntensityForChara_overrideState; // 0x3C8
		::System::Single _VolPreVal_rimGlowIntensityForChara; // 0x3CC
		::System::Boolean _VolPreVal_rimGlowWidthForCharacter_overrideState; // 0x3D0
		::System::Single _VolPreVal_rimGlowWidthForCharacter; // 0x3D4
		::System::Boolean _VolPreVal_rimGlowColorForCharacter_overrideState; // 0x3D8
		::UnityEngine::Color _VolPreVal_rimGlowColorForCharacter; // 0x3DC
		::System::Boolean _VolPreVal_rimGlowStyleForCharacter01_overrideState; // 0x3EC
		::System::Single _VolPreVal_rimGlowStyleForCharacter01; // 0x3F0
		::System::Boolean _VolPreVal_rimGlowStyleForCharacter02_overrideState; // 0x3F4
		::System::Single _VolPreVal_rimGlowStyleForCharacter02; // 0x3F8
		::System::Boolean _VolPreVal_rimGlowStyleForCharacter03_overrideState; // 0x3FC
		::System::Single _VolPreVal_rimGlowStyleForCharacter03; // 0x400
		::System::Boolean _VolPreVal_rimGlowStyleForCharacter04_overrideState; // 0x404
		::System::Single _VolPreVal_rimGlowStyleForCharacter04; // 0x408
		::System::Boolean _VolPreVal_enable_overrideState; // 0x40C
		::System::Boolean _VolPreVal_enable; // 0x40D
		::System::Boolean _VolPreVal_toeStrength_overrideState; // 0x40E
		::System::Single _VolPreVal_toeStrength; // 0x410
		::System::Boolean _VolPreVal_toeLength_overrideState; // 0x414
		::System::Single _VolPreVal_toeLength; // 0x418
		::System::Boolean _VolPreVal_shoulderStrength_overrideState; // 0x41C
		::System::Single _VolPreVal_shoulderStrength; // 0x420
		::System::Boolean _VolPreVal_shoulderLength_overrideState; // 0x424
		::System::Single _VolPreVal_shoulderLength; // 0x428
		::System::Boolean _VolPreVal_shoulderAngle_overrideState; // 0x42C
		::System::Single _VolPreVal_shoulderAngle; // 0x430
		::System::Boolean _VolPreVal_customGamma_overrideState; // 0x434
		::System::Single _VolPreVal_customGamma; // 0x438
		::System::Boolean _VolPreVal_lift_overrideState; // 0x43C
		::UnityEngine::Vector4 _VolPreVal_lift; // 0x440
		::System::Boolean _VolPreVal_gamma_overrideState; // 0x450
		::UnityEngine::Vector4 _VolPreVal_gamma; // 0x454
		::System::Boolean _VolPreVal_gain_overrideState; // 0x464
		::UnityEngine::Vector4 _VolPreVal_gain; // 0x468
		::System::Boolean _VolPreVal_master_overrideState; // 0x478
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_master; // 0x480
		::System::Boolean _VolPreVal_red_overrideState; // 0x488
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_red; // 0x490
		::System::Boolean _VolPreVal_green_overrideState; // 0x498
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_green; // 0x4A0
		::System::Boolean _VolPreVal_blue_overrideState; // 0x4A8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_blue; // 0x4B0
		::System::Boolean _VolPreVal_hueVsHue_overrideState; // 0x4B8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_hueVsHue; // 0x4C0
		::System::Boolean _VolPreVal_hueVsSat_overrideState; // 0x4C8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_hueVsSat; // 0x4D0
		::System::Boolean _VolPreVal_satVsSat_overrideState; // 0x4D8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_satVsSat; // 0x4E0
		::System::Boolean _VolPreVal_lumVsSat_overrideState; // 0x4E8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_lumVsSat; // 0x4F0
		::UnityEngine::Color _TimelineCurveFirstVal_ambient; // 0x4F8
		::UnityEngine::Color _TimelineCurveLastVal_ambient; // 0x508
		::UnityEngine::Color _TimelineCurveFirstVal_skinFrontTint; // 0x518
		::UnityEngine::Color _TimelineCurveLastVal_skinFrontTint; // 0x528
		::UnityEngine::Color _TimelineCurveFirstVal_frontTint; // 0x538
		::UnityEngine::Color _TimelineCurveLastVal_frontTint; // 0x548
		::UnityEngine::Color _TimelineCurveFirstVal_skinSssTint; // 0x558
		::UnityEngine::Color _TimelineCurveLastVal_skinSssTint; // 0x568
		::UnityEngine::Color _TimelineCurveFirstVal_sssTint; // 0x578
		::UnityEngine::Color _TimelineCurveLastVal_sssTint; // 0x588
		::UnityEngine::Color _TimelineCurveFirstVal_skinShallowTint; // 0x598
		::UnityEngine::Color _TimelineCurveLastVal_skinShallowTint; // 0x5A8
		::UnityEngine::Color _TimelineCurveFirstVal_shallowTint; // 0x5B8
		::UnityEngine::Color _TimelineCurveLastVal_shallowTint; // 0x5C8
		::UnityEngine::Color _TimelineCurveFirstVal_skinShallowFadeTint; // 0x5D8
		::UnityEngine::Color _TimelineCurveLastVal_skinShallowFadeTint; // 0x5E8
		::UnityEngine::Color _TimelineCurveFirstVal_shallowFadeTint; // 0x5F8
		::UnityEngine::Color _TimelineCurveLastVal_shallowFadeTint; // 0x608
		::UnityEngine::Color _TimelineCurveFirstVal_skinShadowTint; // 0x618
		::UnityEngine::Color _TimelineCurveLastVal_skinShadowTint; // 0x628
		::UnityEngine::Color _TimelineCurveFirstVal_shadowTint; // 0x638
		::UnityEngine::Color _TimelineCurveLastVal_shadowTint; // 0x648
		::UnityEngine::Color _TimelineCurveFirstVal_skinShadowFadeTint; // 0x658
		::UnityEngine::Color _TimelineCurveLastVal_skinShadowFadeTint; // 0x668
		::UnityEngine::Color _TimelineCurveFirstVal_shadowFadeTint; // 0x678
		::UnityEngine::Color _TimelineCurveLastVal_shadowFadeTint; // 0x688
		::UnityEngine::Color _TimelineCurveFirstVal_ambientGradient; // 0x698
		::UnityEngine::Color _TimelineCurveLastVal_ambientGradient; // 0x6A8
		::UnityEngine::Color _TimelineCurveFirstVal_outlineTint; // 0x6B8
		::UnityEngine::Color _TimelineCurveLastVal_outlineTint; // 0x6C8
		::System::Single _TimelineCurveFirstVal_postExposure; // 0x6D8
		::System::Single _TimelineCurveLastVal_postExposure; // 0x6DC
		::System::Single _TimelineCurveFirstVal_contrast; // 0x6E0
		::System::Single _TimelineCurveLastVal_contrast; // 0x6E4
		::System::Single _TimelineCurveFirstVal_saturation; // 0x6E8
		::System::Single _TimelineCurveLastVal_saturation; // 0x6EC
		::System::Boolean _TimelineCurveFirstVal_revertSaturation; // 0x6F0
		::System::Boolean _TimelineCurveLastVal_revertSaturation; // 0x6F1
		::System::Boolean _TimelineCurveFirstVal_weaponUseCustomLightProperty; // 0x6F2
		::System::Boolean _TimelineCurveLastVal_weaponUseCustomLightProperty; // 0x6F3
		::System::Single _TimelineCurveFirstVal_rimGlowIntensityForChara; // 0x6F4
		::System::Single _TimelineCurveLastVal_rimGlowIntensityForChara; // 0x6F8
		::System::Single _TimelineCurveFirstVal_rimGlowWidthForCharacter; // 0x6FC
		::System::Single _TimelineCurveLastVal_rimGlowWidthForCharacter; // 0x700
		::UnityEngine::Color _TimelineCurveFirstVal_rimGlowColorForCharacter; // 0x704
		::UnityEngine::Color _TimelineCurveLastVal_rimGlowColorForCharacter; // 0x714
		::System::Single _TimelineCurveFirstVal_rimGlowStyleForCharacter01; // 0x724
		::System::Single _TimelineCurveLastVal_rimGlowStyleForCharacter01; // 0x728
		::System::Single _TimelineCurveFirstVal_rimGlowStyleForCharacter02; // 0x72C
		::System::Single _TimelineCurveLastVal_rimGlowStyleForCharacter02; // 0x730
		::System::Single _TimelineCurveFirstVal_rimGlowStyleForCharacter03; // 0x734
		::System::Single _TimelineCurveLastVal_rimGlowStyleForCharacter03; // 0x738
		::System::Single _TimelineCurveFirstVal_rimGlowStyleForCharacter04; // 0x73C
		::System::Single _TimelineCurveLastVal_rimGlowStyleForCharacter04; // 0x740
		::System::Boolean _TimelineCurveFirstVal_enable; // 0x744
		::System::Boolean _TimelineCurveLastVal_enable; // 0x745
		::System::Single _TimelineCurveFirstVal_toeStrength; // 0x748
		::System::Single _TimelineCurveLastVal_toeStrength; // 0x74C
		::System::Single _TimelineCurveFirstVal_toeLength; // 0x750
		::System::Single _TimelineCurveLastVal_toeLength; // 0x754
		::System::Single _TimelineCurveFirstVal_shoulderStrength; // 0x758
		::System::Single _TimelineCurveLastVal_shoulderStrength; // 0x75C
		::System::Single _TimelineCurveFirstVal_shoulderLength; // 0x760
		::System::Single _TimelineCurveLastVal_shoulderLength; // 0x764
		::System::Single _TimelineCurveFirstVal_shoulderAngle; // 0x768
		::System::Single _TimelineCurveLastVal_shoulderAngle; // 0x76C
		::System::Single _TimelineCurveFirstVal_customGamma; // 0x770
		::System::Single _TimelineCurveLastVal_customGamma; // 0x774
		::UnityEngine::Vector4 _TimelineCurveFirstVal_lift; // 0x778
		::UnityEngine::Vector4 _TimelineCurveLastVal_lift; // 0x788
		::UnityEngine::Vector4 _TimelineCurveFirstVal_gamma; // 0x798
		::UnityEngine::Vector4 _TimelineCurveLastVal_gamma; // 0x7A8
		::UnityEngine::Vector4 _TimelineCurveFirstVal_gain; // 0x7B8
		::UnityEngine::Vector4 _TimelineCurveLastVal_gain; // 0x7C8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ambient_FieldHandleType; // 0x7D8
		::System::Boolean ESPP_ambient_UseIt; // 0x7DC
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_ambient; // 0x7E0
		::System::Boolean ESPP_ambient_EnableFade; // 0x7E8
		::System::Boolean ESPP_ambient_EnableOverrideDefaultValue; // 0x7E9
		::UnityEngine::Color ESPP_ambient_OverrideDefaultValue; // 0x7EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skinFrontTint_FieldHandleType; // 0x7FC
		::System::Boolean ESPP_skinFrontTint_UseIt; // 0x800
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_skinFrontTint; // 0x808
		::System::Boolean ESPP_skinFrontTint_EnableFade; // 0x810
		::System::Boolean ESPP_skinFrontTint_EnableOverrideDefaultValue; // 0x811
		::UnityEngine::Color ESPP_skinFrontTint_OverrideDefaultValue; // 0x814
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_frontTint_FieldHandleType; // 0x824
		::System::Boolean ESPP_frontTint_UseIt; // 0x828
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_frontTint; // 0x830
		::System::Boolean ESPP_frontTint_EnableFade; // 0x838
		::System::Boolean ESPP_frontTint_EnableOverrideDefaultValue; // 0x839
		::UnityEngine::Color ESPP_frontTint_OverrideDefaultValue; // 0x83C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skinSssTint_FieldHandleType; // 0x84C
		::System::Boolean ESPP_skinSssTint_UseIt; // 0x850
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_skinSssTint; // 0x858
		::System::Boolean ESPP_skinSssTint_EnableFade; // 0x860
		::System::Boolean ESPP_skinSssTint_EnableOverrideDefaultValue; // 0x861
		::UnityEngine::Color ESPP_skinSssTint_OverrideDefaultValue; // 0x864
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sssTint_FieldHandleType; // 0x874
		::System::Boolean ESPP_sssTint_UseIt; // 0x878
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_sssTint; // 0x880
		::System::Boolean ESPP_sssTint_EnableFade; // 0x888
		::System::Boolean ESPP_sssTint_EnableOverrideDefaultValue; // 0x889
		::UnityEngine::Color ESPP_sssTint_OverrideDefaultValue; // 0x88C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skinShallowTint_FieldHandleType; // 0x89C
		::System::Boolean ESPP_skinShallowTint_UseIt; // 0x8A0
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_skinShallowTint; // 0x8A8
		::System::Boolean ESPP_skinShallowTint_EnableFade; // 0x8B0
		::System::Boolean ESPP_skinShallowTint_EnableOverrideDefaultValue; // 0x8B1
		::UnityEngine::Color ESPP_skinShallowTint_OverrideDefaultValue; // 0x8B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shallowTint_FieldHandleType; // 0x8C4
		::System::Boolean ESPP_shallowTint_UseIt; // 0x8C8
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_shallowTint; // 0x8D0
		::System::Boolean ESPP_shallowTint_EnableFade; // 0x8D8
		::System::Boolean ESPP_shallowTint_EnableOverrideDefaultValue; // 0x8D9
		::UnityEngine::Color ESPP_shallowTint_OverrideDefaultValue; // 0x8DC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skinShallowFadeTint_FieldHandleType; // 0x8EC
		::System::Boolean ESPP_skinShallowFadeTint_UseIt; // 0x8F0
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_skinShallowFadeTint; // 0x8F8
		::System::Boolean ESPP_skinShallowFadeTint_EnableFade; // 0x900
		::System::Boolean ESPP_skinShallowFadeTint_EnableOverrideDefaultValue; // 0x901
		::UnityEngine::Color ESPP_skinShallowFadeTint_OverrideDefaultValue; // 0x904
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shallowFadeTint_FieldHandleType; // 0x914
		::System::Boolean ESPP_shallowFadeTint_UseIt; // 0x918
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_shallowFadeTint; // 0x920
		::System::Boolean ESPP_shallowFadeTint_EnableFade; // 0x928
		::System::Boolean ESPP_shallowFadeTint_EnableOverrideDefaultValue; // 0x929
		::UnityEngine::Color ESPP_shallowFadeTint_OverrideDefaultValue; // 0x92C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skinShadowTint_FieldHandleType; // 0x93C
		::System::Boolean ESPP_skinShadowTint_UseIt; // 0x940
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_skinShadowTint; // 0x948
		::System::Boolean ESPP_skinShadowTint_EnableFade; // 0x950
		::System::Boolean ESPP_skinShadowTint_EnableOverrideDefaultValue; // 0x951
		::UnityEngine::Color ESPP_skinShadowTint_OverrideDefaultValue; // 0x954
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shadowTint_FieldHandleType; // 0x964
		::System::Boolean ESPP_shadowTint_UseIt; // 0x968
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_shadowTint; // 0x970
		::System::Boolean ESPP_shadowTint_EnableFade; // 0x978
		::System::Boolean ESPP_shadowTint_EnableOverrideDefaultValue; // 0x979
		::UnityEngine::Color ESPP_shadowTint_OverrideDefaultValue; // 0x97C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skinShadowFadeTint_FieldHandleType; // 0x98C
		::System::Boolean ESPP_skinShadowFadeTint_UseIt; // 0x990
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_skinShadowFadeTint; // 0x998
		::System::Boolean ESPP_skinShadowFadeTint_EnableFade; // 0x9A0
		::System::Boolean ESPP_skinShadowFadeTint_EnableOverrideDefaultValue; // 0x9A1
		::UnityEngine::Color ESPP_skinShadowFadeTint_OverrideDefaultValue; // 0x9A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shadowFadeTint_FieldHandleType; // 0x9B4
		::System::Boolean ESPP_shadowFadeTint_UseIt; // 0x9B8
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_shadowFadeTint; // 0x9C0
		::System::Boolean ESPP_shadowFadeTint_EnableFade; // 0x9C8
		::System::Boolean ESPP_shadowFadeTint_EnableOverrideDefaultValue; // 0x9C9
		::UnityEngine::Color ESPP_shadowFadeTint_OverrideDefaultValue; // 0x9CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ambientGradient_FieldHandleType; // 0x9DC
		::System::Boolean ESPP_ambientGradient_UseIt; // 0x9E0
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_ambientGradient; // 0x9E8
		::System::Boolean ESPP_ambientGradient_EnableFade; // 0x9F0
		::System::Boolean ESPP_ambientGradient_EnableOverrideDefaultValue; // 0x9F1
		::UnityEngine::Color ESPP_ambientGradient_OverrideDefaultValue; // 0x9F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useShadowTintAsOutline_FieldHandleType; // 0xA04
		::System::Boolean ESPP_useShadowTintAsOutline; // 0xA08
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineTint_FieldHandleType; // 0xA0C
		::System::Boolean ESPP_outlineTint_UseIt; // 0xA10
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_outlineTint; // 0xA18
		::System::Boolean ESPP_outlineTint_EnableFade; // 0xA20
		::System::Boolean ESPP_outlineTint_EnableOverrideDefaultValue; // 0xA21
		::UnityEngine::Color ESPP_outlineTint_OverrideDefaultValue; // 0xA24
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_postExposure_FieldHandleType; // 0xA34
		::System::Boolean ESPP_postExposure_UseIt; // 0xA38
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_postExposure; // 0xA40
		::System::Boolean ESPP_postExposure_EnableFade; // 0xA48
		::System::Boolean ESPP_postExposure_EnableOverrideDefaultValue; // 0xA49
		::System::Single ESPP_postExposure_OverrideDefaultValue; // 0xA4C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_contrast_FieldHandleType; // 0xA50
		::System::Boolean ESPP_contrast_UseIt; // 0xA54
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_contrast; // 0xA58
		::System::Boolean ESPP_contrast_EnableFade; // 0xA60
		::System::Boolean ESPP_contrast_EnableOverrideDefaultValue; // 0xA61
		::System::Single ESPP_contrast_OverrideDefaultValue; // 0xA64
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_saturation_FieldHandleType; // 0xA68
		::System::Boolean ESPP_saturation_UseIt; // 0xA6C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_saturation; // 0xA70
		::System::Boolean ESPP_saturation_EnableFade; // 0xA78
		::System::Boolean ESPP_saturation_EnableOverrideDefaultValue; // 0xA79
		::System::Single ESPP_saturation_OverrideDefaultValue; // 0xA7C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_revertSaturation_FieldHandleType; // 0xA80
		::System::Boolean ESPP_revertSaturation_UseIt; // 0xA84
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_revertSaturation; // 0xA88
		::System::Boolean ESPP_revertSaturation_EnableFade; // 0xA90
		::System::Boolean ESPP_revertSaturation_EnableOverrideDefaultValue; // 0xA91
		::System::Boolean ESPP_revertSaturation_OverrideDefaultValue; // 0xA92
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_weaponUseCustomLightProperty_FieldHandleType; // 0xA94
		::System::Boolean ESPP_weaponUseCustomLightProperty_UseIt; // 0xA98
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_weaponUseCustomLightProperty; // 0xAA0
		::System::Boolean ESPP_weaponUseCustomLightProperty_EnableFade; // 0xAA8
		::System::Boolean ESPP_weaponUseCustomLightProperty_EnableOverrideDefaultValue; // 0xAA9
		::System::Boolean ESPP_weaponUseCustomLightProperty_OverrideDefaultValue; // 0xAAA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rimGlowIntensityForChara_FieldHandleType; // 0xAAC
		::System::Boolean ESPP_rimGlowIntensityForChara_UseIt; // 0xAB0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_rimGlowIntensityForChara; // 0xAB8
		::System::Boolean ESPP_rimGlowIntensityForChara_EnableFade; // 0xAC0
		::System::Boolean ESPP_rimGlowIntensityForChara_EnableOverrideDefaultValue; // 0xAC1
		::System::Single ESPP_rimGlowIntensityForChara_OverrideDefaultValue; // 0xAC4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rimGlowWidthForCharacter_FieldHandleType; // 0xAC8
		::System::Boolean ESPP_rimGlowWidthForCharacter_UseIt; // 0xACC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_rimGlowWidthForCharacter; // 0xAD0
		::System::Boolean ESPP_rimGlowWidthForCharacter_EnableFade; // 0xAD8
		::System::Boolean ESPP_rimGlowWidthForCharacter_EnableOverrideDefaultValue; // 0xAD9
		::System::Single ESPP_rimGlowWidthForCharacter_OverrideDefaultValue; // 0xADC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rimGlowColorForCharacter_FieldHandleType; // 0xAE0
		::System::Boolean ESPP_rimGlowColorForCharacter_UseIt; // 0xAE4
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_rimGlowColorForCharacter; // 0xAE8
		::System::Boolean ESPP_rimGlowColorForCharacter_EnableFade; // 0xAF0
		::System::Boolean ESPP_rimGlowColorForCharacter_EnableOverrideDefaultValue; // 0xAF1
		::UnityEngine::Color ESPP_rimGlowColorForCharacter_OverrideDefaultValue; // 0xAF4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rimGlowStyleForCharacter01_FieldHandleType; // 0xB04
		::System::Boolean ESPP_rimGlowStyleForCharacter01_UseIt; // 0xB08
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_rimGlowStyleForCharacter01; // 0xB10
		::System::Boolean ESPP_rimGlowStyleForCharacter01_EnableFade; // 0xB18
		::System::Boolean ESPP_rimGlowStyleForCharacter01_EnableOverrideDefaultValue; // 0xB19
		::System::Single ESPP_rimGlowStyleForCharacter01_OverrideDefaultValue; // 0xB1C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rimGlowStyleForCharacter02_FieldHandleType; // 0xB20
		::System::Boolean ESPP_rimGlowStyleForCharacter02_UseIt; // 0xB24
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_rimGlowStyleForCharacter02; // 0xB28
		::System::Boolean ESPP_rimGlowStyleForCharacter02_EnableFade; // 0xB30
		::System::Boolean ESPP_rimGlowStyleForCharacter02_EnableOverrideDefaultValue; // 0xB31
		::System::Single ESPP_rimGlowStyleForCharacter02_OverrideDefaultValue; // 0xB34
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rimGlowStyleForCharacter03_FieldHandleType; // 0xB38
		::System::Boolean ESPP_rimGlowStyleForCharacter03_UseIt; // 0xB3C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_rimGlowStyleForCharacter03; // 0xB40
		::System::Boolean ESPP_rimGlowStyleForCharacter03_EnableFade; // 0xB48
		::System::Boolean ESPP_rimGlowStyleForCharacter03_EnableOverrideDefaultValue; // 0xB49
		::System::Single ESPP_rimGlowStyleForCharacter03_OverrideDefaultValue; // 0xB4C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rimGlowStyleForCharacter04_FieldHandleType; // 0xB50
		::System::Boolean ESPP_rimGlowStyleForCharacter04_UseIt; // 0xB54
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_rimGlowStyleForCharacter04; // 0xB58
		::System::Boolean ESPP_rimGlowStyleForCharacter04_EnableFade; // 0xB60
		::System::Boolean ESPP_rimGlowStyleForCharacter04_EnableOverrideDefaultValue; // 0xB61
		::System::Single ESPP_rimGlowStyleForCharacter04_OverrideDefaultValue; // 0xB64
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enable_FieldHandleType; // 0xB68
		::System::Boolean ESPP_enable_UseIt; // 0xB6C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enable; // 0xB70
		::System::Boolean ESPP_enable_EnableFade; // 0xB78
		::System::Boolean ESPP_enable_EnableOverrideDefaultValue; // 0xB79
		::System::Boolean ESPP_enable_OverrideDefaultValue; // 0xB7A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toeStrength_FieldHandleType; // 0xB7C
		::System::Boolean ESPP_toeStrength_UseIt; // 0xB80
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_toeStrength; // 0xB88
		::System::Boolean ESPP_toeStrength_EnableFade; // 0xB90
		::System::Boolean ESPP_toeStrength_EnableOverrideDefaultValue; // 0xB91
		::System::Single ESPP_toeStrength_OverrideDefaultValue; // 0xB94
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toeLength_FieldHandleType; // 0xB98
		::System::Boolean ESPP_toeLength_UseIt; // 0xB9C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_toeLength; // 0xBA0
		::System::Boolean ESPP_toeLength_EnableFade; // 0xBA8
		::System::Boolean ESPP_toeLength_EnableOverrideDefaultValue; // 0xBA9
		::System::Single ESPP_toeLength_OverrideDefaultValue; // 0xBAC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shoulderStrength_FieldHandleType; // 0xBB0
		::System::Boolean ESPP_shoulderStrength_UseIt; // 0xBB4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shoulderStrength; // 0xBB8
		::System::Boolean ESPP_shoulderStrength_EnableFade; // 0xBC0
		::System::Boolean ESPP_shoulderStrength_EnableOverrideDefaultValue; // 0xBC1
		::System::Single ESPP_shoulderStrength_OverrideDefaultValue; // 0xBC4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shoulderLength_FieldHandleType; // 0xBC8
		::System::Boolean ESPP_shoulderLength_UseIt; // 0xBCC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shoulderLength; // 0xBD0
		::System::Boolean ESPP_shoulderLength_EnableFade; // 0xBD8
		::System::Boolean ESPP_shoulderLength_EnableOverrideDefaultValue; // 0xBD9
		::System::Single ESPP_shoulderLength_OverrideDefaultValue; // 0xBDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shoulderAngle_FieldHandleType; // 0xBE0
		::System::Boolean ESPP_shoulderAngle_UseIt; // 0xBE4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shoulderAngle; // 0xBE8
		::System::Boolean ESPP_shoulderAngle_EnableFade; // 0xBF0
		::System::Boolean ESPP_shoulderAngle_EnableOverrideDefaultValue; // 0xBF1
		::System::Single ESPP_shoulderAngle_OverrideDefaultValue; // 0xBF4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_customGamma_FieldHandleType; // 0xBF8
		::System::Boolean ESPP_customGamma_UseIt; // 0xBFC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_customGamma; // 0xC00
		::System::Boolean ESPP_customGamma_EnableFade; // 0xC08
		::System::Boolean ESPP_customGamma_EnableOverrideDefaultValue; // 0xC09
		::System::Single ESPP_customGamma_OverrideDefaultValue; // 0xC0C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lift_FieldHandleType; // 0xC10
		::System::Boolean ESPP_lift_UseIt; // 0xC14
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_lift; // 0xC18
		::System::Boolean ESPP_lift_EnableFade; // 0xC20
		::System::Boolean ESPP_lift_EnableOverrideDefaultValue; // 0xC21
		::UnityEngine::Vector4 ESPP_lift_OverrideDefaultValue; // 0xC24
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gamma_FieldHandleType; // 0xC34
		::System::Boolean ESPP_gamma_UseIt; // 0xC38
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_gamma; // 0xC40
		::System::Boolean ESPP_gamma_EnableFade; // 0xC48
		::System::Boolean ESPP_gamma_EnableOverrideDefaultValue; // 0xC49
		::UnityEngine::Vector4 ESPP_gamma_OverrideDefaultValue; // 0xC4C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gain_FieldHandleType; // 0xC5C
		::System::Boolean ESPP_gain_UseIt; // 0xC60
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_gain; // 0xC68
		::System::Boolean ESPP_gain_EnableFade; // 0xC70
		::System::Boolean ESPP_gain_EnableOverrideDefaultValue; // 0xC71
		::UnityEngine::Vector4 ESPP_gain_OverrideDefaultValue; // 0xC74
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_master_FieldHandleType; // 0xC84
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_master; // 0xC88
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_red_FieldHandleType; // 0xC90
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_red; // 0xC98
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_green_FieldHandleType; // 0xCA0
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_green; // 0xCA8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blue_FieldHandleType; // 0xCB0
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_blue; // 0xCB8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hueVsHue_FieldHandleType; // 0xCC0
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_hueVsHue; // 0xCC8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hueVsSat_FieldHandleType; // 0xCD0
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_hueVsSat; // 0xCD8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_satVsSat_FieldHandleType; // 0xCE0
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_satVsSat; // 0xCE8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lumVsSat_FieldHandleType; // 0xCF0
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_lumVsSat; // 0xCF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_F53BAAE38A584428()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_F53BAAE38A584428_OFFSET))(this);
		}

		::System::Void Method_5_46DF29ACE60986D7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_46DF29ACE60986D7_OFFSET))(this, a1);
		}

		::System::Void Method_5_1676BB4855527361(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_1676BB4855527361_OFFSET))(this, a1);
		}

		::System::Void Method_5_2C900C7BC409CFF2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_2C900C7BC409CFF2_OFFSET))(this, a1);
		}

		::System::Void Method_5_8462E42B7CEE1998(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_8462E42B7CEE1998_OFFSET))(this, a1);
		}

		::System::Void Method_5_8462E42B7CEE1998_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_8462E42B7CEE1998_1_OFFSET))(this, a1);
		}
	};
}
