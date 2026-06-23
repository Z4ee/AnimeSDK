#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BlendModes.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityMonsterIgnisFatuusEffects; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class MonsterIgnisFatuus; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1A0840D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS_METHOD_5_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x1A087960)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x1A084690)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS_METHOD_5_4F6CBEF30D6E7AC4_1_OFFSET UNITYSDK_OFFSET(0x1A097F50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS_METHOD_5_4F6CBEF30D6E7AC4_OFFSET UNITYSDK_OFFSET(0x1A0958C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS_METHOD_5_7A5EE891DA69F667_OFFSET UNITYSDK_OFFSET(0x1A088AC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A084680)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS_METHOD_5_A99450342763EB98_OFFSET UNITYSDK_OFFSET(0x1A084D50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS_METHOD_5_AB40C959416D450B_OFFSET UNITYSDK_OFFSET(0x1A092390)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A09A5E0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessMonsterIgnisFatuus_TypeDefinitionIndex = 74678;

	class ESPostProcessMonsterIgnisFatuus : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::MonsterIgnisFatuus*>
	{
	public:
		::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_monsterIgnisFatuusActive; // 0xB8
		::System::Int32 _VolDefault_monsterIgnisFatuusDownSample; // 0xBC
		::System::Boolean _VolDefault_monsterIgnisFatuusSelfMask; // 0xC0
		::System::Single _VolDefault_monsterIgnisFatuusDepthMaskOffset; // 0xC4
		::UnityEngine::Rendering::Universal::BlendModes _VolDefault_monsterIgnisFatuusColorBlendMode; // 0xC8
		::System::Boolean _VolDefault_useMonsterIgnisFatuusColorTextureAlpha; // 0xCC
		::UnityEngine::Color _VolDefault_monsterIgnisFatuusColor; // 0xD0
		::UnityEngine::Texture* _VolDefault_monsterIgnisFatuusColorTexture; // 0xE0
		::UnityEngine::Vector2 _VolDefault_monsterIgnisFatuusColorTextureUVScale; // 0xE8
		::UnityEngine::Vector2 _VolDefault_monsterIgnisFatuusColorTextureUVSpeed; // 0xF0
		::UnityEngine::Texture* _VolDefault_monsterIgnisFatuusNoiseTexture; // 0xF8
		::UnityEngine::Vector2 _VolDefault_monsterIgnisFatuusNoiseTextureUVScale; // 0x100
		::UnityEngine::Vector2 _VolDefault_monsterIgnisFatuusNoiseTextureUVSpeed; // 0x108
		::System::Single _VolDefault_monsterIgnisFatuusDistortionIntensity; // 0x110
		::System::Single _VolDefault_monsterIgnisFatuusDistortionOffset; // 0x114
		::System::Single _VolDefault_monsterIgnisFatuusBlurPow; // 0x118
		::System::Single _VolDefault_monsterIgnisFatuusColorDistortionIntensity; // 0x11C
		::UnityEngine::Color _VolDefault_monsterIgnisFatuusColor2; // 0x120
		::UnityEngine::Texture* _VolDefault_monsterIgnisFatuusColorTexture2; // 0x130
		::UnityEngine::Vector2 _VolDefault_monsterIgnisFatuusColorTextureUVScale2; // 0x138
		::UnityEngine::Vector2 _VolDefault_monsterIgnisFatuusColorTextureUVSpeed2; // 0x140
		::UnityEngine::Texture* _VolDefault_monsterIgnisFatuusNoiseTexture2; // 0x148
		::UnityEngine::Vector2 _VolDefault_monsterIgnisFatuusNoiseTextureUVScale2; // 0x150
		::UnityEngine::Vector2 _VolDefault_monsterIgnisFatuusNoiseTextureUVSpeed2; // 0x158
		::System::Single _VolDefault_monsterIgnisFatuusDistortionIntensity2; // 0x160
		::System::Single _VolDefault_monsterIgnisFatuusDistortionOffset2; // 0x164
		::System::Single _VolDefault_monsterIgnisFatuusBlurPow2; // 0x168
		::System::Single _VolDefault_monsterIgnisFatuusColorDistortionIntensity2; // 0x16C
		::System::Single _VolDefault_monsterIgnisFatuusSoftEdgePow; // 0x170
		::System::Single _VolDefault_monsterIgnisFatuusSoftEdgeRange; // 0x174
		::System::Single _VolDefault_monsterIgnisFatuusDisappearStart; // 0x178
		::System::Single _VolDefault_monsterIgnisFatuusDisappearEnd; // 0x17C
		::System::Single _VolDefault_monsterIgnisFatuusFadeIn; // 0x180
		::System::Single _VolDefault_monsterIgnisFatuusFadeOut; // 0x184
		::System::Boolean _VolPreVal_monsterIgnisFatuusActive_overrideState; // 0x188
		::System::Boolean _VolPreVal_monsterIgnisFatuusActive; // 0x189
		::System::Boolean _VolPreVal_monsterIgnisFatuusDownSample_overrideState; // 0x18A
		::System::Int32 _VolPreVal_monsterIgnisFatuusDownSample; // 0x18C
		::System::Boolean _VolPreVal_monsterIgnisFatuusSelfMask_overrideState; // 0x190
		::System::Boolean _VolPreVal_monsterIgnisFatuusSelfMask; // 0x191
		::System::Boolean _VolPreVal_monsterIgnisFatuusDepthMaskOffset_overrideState; // 0x192
		::System::Single _VolPreVal_monsterIgnisFatuusDepthMaskOffset; // 0x194
		::System::Boolean _VolPreVal_monsterIgnisFatuusColorBlendMode_overrideState; // 0x198
		::UnityEngine::Rendering::Universal::BlendModes _VolPreVal_monsterIgnisFatuusColorBlendMode; // 0x19C
		::System::Boolean _VolPreVal_useMonsterIgnisFatuusColorTextureAlpha_overrideState; // 0x1A0
		::System::Boolean _VolPreVal_useMonsterIgnisFatuusColorTextureAlpha; // 0x1A1
		::System::Boolean _VolPreVal_monsterIgnisFatuusColor_overrideState; // 0x1A2
		::UnityEngine::Color _VolPreVal_monsterIgnisFatuusColor; // 0x1A4
		::System::Boolean _VolPreVal_monsterIgnisFatuusColorTexture_overrideState; // 0x1B4
		::UnityEngine::Texture* _VolPreVal_monsterIgnisFatuusColorTexture; // 0x1B8
		::System::Boolean _VolPreVal_monsterIgnisFatuusColorTextureUVScale_overrideState; // 0x1C0
		::UnityEngine::Vector2 _VolPreVal_monsterIgnisFatuusColorTextureUVScale; // 0x1C4
		::System::Boolean _VolPreVal_monsterIgnisFatuusColorTextureUVSpeed_overrideState; // 0x1CC
		::UnityEngine::Vector2 _VolPreVal_monsterIgnisFatuusColorTextureUVSpeed; // 0x1D0
		::System::Boolean _VolPreVal_monsterIgnisFatuusNoiseTexture_overrideState; // 0x1D8
		::UnityEngine::Texture* _VolPreVal_monsterIgnisFatuusNoiseTexture; // 0x1E0
		::System::Boolean _VolPreVal_monsterIgnisFatuusNoiseTextureUVScale_overrideState; // 0x1E8
		::UnityEngine::Vector2 _VolPreVal_monsterIgnisFatuusNoiseTextureUVScale; // 0x1EC
		::System::Boolean _VolPreVal_monsterIgnisFatuusNoiseTextureUVSpeed_overrideState; // 0x1F4
		::UnityEngine::Vector2 _VolPreVal_monsterIgnisFatuusNoiseTextureUVSpeed; // 0x1F8
		::System::Boolean _VolPreVal_monsterIgnisFatuusDistortionIntensity_overrideState; // 0x200
		::System::Single _VolPreVal_monsterIgnisFatuusDistortionIntensity; // 0x204
		::System::Boolean _VolPreVal_monsterIgnisFatuusDistortionOffset_overrideState; // 0x208
		::System::Single _VolPreVal_monsterIgnisFatuusDistortionOffset; // 0x20C
		::System::Boolean _VolPreVal_monsterIgnisFatuusBlurPow_overrideState; // 0x210
		::System::Single _VolPreVal_monsterIgnisFatuusBlurPow; // 0x214
		::System::Boolean _VolPreVal_monsterIgnisFatuusColorDistortionIntensity_overrideState; // 0x218
		::System::Single _VolPreVal_monsterIgnisFatuusColorDistortionIntensity; // 0x21C
		::System::Boolean _VolPreVal_monsterIgnisFatuusColor2_overrideState; // 0x220
		::UnityEngine::Color _VolPreVal_monsterIgnisFatuusColor2; // 0x224
		::System::Boolean _VolPreVal_monsterIgnisFatuusColorTexture2_overrideState; // 0x234
		::UnityEngine::Texture* _VolPreVal_monsterIgnisFatuusColorTexture2; // 0x238
		::System::Boolean _VolPreVal_monsterIgnisFatuusColorTextureUVScale2_overrideState; // 0x240
		::UnityEngine::Vector2 _VolPreVal_monsterIgnisFatuusColorTextureUVScale2; // 0x244
		::System::Boolean _VolPreVal_monsterIgnisFatuusColorTextureUVSpeed2_overrideState; // 0x24C
		::UnityEngine::Vector2 _VolPreVal_monsterIgnisFatuusColorTextureUVSpeed2; // 0x250
		::System::Boolean _VolPreVal_monsterIgnisFatuusNoiseTexture2_overrideState; // 0x258
		::UnityEngine::Texture* _VolPreVal_monsterIgnisFatuusNoiseTexture2; // 0x260
		::System::Boolean _VolPreVal_monsterIgnisFatuusNoiseTextureUVScale2_overrideState; // 0x268
		::UnityEngine::Vector2 _VolPreVal_monsterIgnisFatuusNoiseTextureUVScale2; // 0x26C
		::System::Boolean _VolPreVal_monsterIgnisFatuusNoiseTextureUVSpeed2_overrideState; // 0x274
		::UnityEngine::Vector2 _VolPreVal_monsterIgnisFatuusNoiseTextureUVSpeed2; // 0x278
		::System::Boolean _VolPreVal_monsterIgnisFatuusDistortionIntensity2_overrideState; // 0x280
		::System::Single _VolPreVal_monsterIgnisFatuusDistortionIntensity2; // 0x284
		::System::Boolean _VolPreVal_monsterIgnisFatuusDistortionOffset2_overrideState; // 0x288
		::System::Single _VolPreVal_monsterIgnisFatuusDistortionOffset2; // 0x28C
		::System::Boolean _VolPreVal_monsterIgnisFatuusBlurPow2_overrideState; // 0x290
		::System::Single _VolPreVal_monsterIgnisFatuusBlurPow2; // 0x294
		::System::Boolean _VolPreVal_monsterIgnisFatuusColorDistortionIntensity2_overrideState; // 0x298
		::System::Single _VolPreVal_monsterIgnisFatuusColorDistortionIntensity2; // 0x29C
		::System::Boolean _VolPreVal_monsterIgnisFatuusSoftEdgePow_overrideState; // 0x2A0
		::System::Single _VolPreVal_monsterIgnisFatuusSoftEdgePow; // 0x2A4
		::System::Boolean _VolPreVal_monsterIgnisFatuusSoftEdgeRange_overrideState; // 0x2A8
		::System::Single _VolPreVal_monsterIgnisFatuusSoftEdgeRange; // 0x2AC
		::System::Boolean _VolPreVal_monsterIgnisFatuusDisappearStart_overrideState; // 0x2B0
		::System::Single _VolPreVal_monsterIgnisFatuusDisappearStart; // 0x2B4
		::System::Boolean _VolPreVal_monsterIgnisFatuusDisappearEnd_overrideState; // 0x2B8
		::System::Single _VolPreVal_monsterIgnisFatuusDisappearEnd; // 0x2BC
		::System::Boolean _VolPreVal_monsterIgnisFatuusFadeIn_overrideState; // 0x2C0
		::System::Single _VolPreVal_monsterIgnisFatuusFadeIn; // 0x2C4
		::System::Boolean _VolPreVal_monsterIgnisFatuusFadeOut_overrideState; // 0x2C8
		::System::Single _VolPreVal_monsterIgnisFatuusFadeOut; // 0x2CC
		::UnityEngine::Color _TimelineCurveFirstVal_monsterIgnisFatuusColor; // 0x2D0
		::UnityEngine::Color _TimelineCurveLastVal_monsterIgnisFatuusColor; // 0x2E0
		::UnityEngine::Vector2 _TimelineCurveFirstVal_monsterIgnisFatuusColorTextureUVScale; // 0x2F0
		::UnityEngine::Vector2 _TimelineCurveLastVal_monsterIgnisFatuusColorTextureUVScale; // 0x2F8
		::UnityEngine::Vector2 _TimelineCurveFirstVal_monsterIgnisFatuusColorTextureUVSpeed; // 0x300
		::UnityEngine::Vector2 _TimelineCurveLastVal_monsterIgnisFatuusColorTextureUVSpeed; // 0x308
		::UnityEngine::Vector2 _TimelineCurveFirstVal_monsterIgnisFatuusNoiseTextureUVScale; // 0x310
		::UnityEngine::Vector2 _TimelineCurveLastVal_monsterIgnisFatuusNoiseTextureUVScale; // 0x318
		::UnityEngine::Vector2 _TimelineCurveFirstVal_monsterIgnisFatuusNoiseTextureUVSpeed; // 0x320
		::UnityEngine::Vector2 _TimelineCurveLastVal_monsterIgnisFatuusNoiseTextureUVSpeed; // 0x328
		::System::Single _TimelineCurveFirstVal_monsterIgnisFatuusDistortionIntensity; // 0x330
		::System::Single _TimelineCurveLastVal_monsterIgnisFatuusDistortionIntensity; // 0x334
		::System::Single _TimelineCurveFirstVal_monsterIgnisFatuusDistortionOffset; // 0x338
		::System::Single _TimelineCurveLastVal_monsterIgnisFatuusDistortionOffset; // 0x33C
		::System::Single _TimelineCurveFirstVal_monsterIgnisFatuusBlurPow; // 0x340
		::System::Single _TimelineCurveLastVal_monsterIgnisFatuusBlurPow; // 0x344
		::System::Single _TimelineCurveFirstVal_monsterIgnisFatuusColorDistortionIntensity; // 0x348
		::System::Single _TimelineCurveLastVal_monsterIgnisFatuusColorDistortionIntensity; // 0x34C
		::UnityEngine::Color _TimelineCurveFirstVal_monsterIgnisFatuusColor2; // 0x350
		::UnityEngine::Color _TimelineCurveLastVal_monsterIgnisFatuusColor2; // 0x360
		::UnityEngine::Vector2 _TimelineCurveFirstVal_monsterIgnisFatuusColorTextureUVScale2; // 0x370
		::UnityEngine::Vector2 _TimelineCurveLastVal_monsterIgnisFatuusColorTextureUVScale2; // 0x378
		::UnityEngine::Vector2 _TimelineCurveFirstVal_monsterIgnisFatuusColorTextureUVSpeed2; // 0x380
		::UnityEngine::Vector2 _TimelineCurveLastVal_monsterIgnisFatuusColorTextureUVSpeed2; // 0x388
		::UnityEngine::Vector2 _TimelineCurveFirstVal_monsterIgnisFatuusNoiseTextureUVScale2; // 0x390
		::UnityEngine::Vector2 _TimelineCurveLastVal_monsterIgnisFatuusNoiseTextureUVScale2; // 0x398
		::UnityEngine::Vector2 _TimelineCurveFirstVal_monsterIgnisFatuusNoiseTextureUVSpeed2; // 0x3A0
		::UnityEngine::Vector2 _TimelineCurveLastVal_monsterIgnisFatuusNoiseTextureUVSpeed2; // 0x3A8
		::System::Single _TimelineCurveFirstVal_monsterIgnisFatuusDistortionIntensity2; // 0x3B0
		::System::Single _TimelineCurveLastVal_monsterIgnisFatuusDistortionIntensity2; // 0x3B4
		::System::Single _TimelineCurveFirstVal_monsterIgnisFatuusDistortionOffset2; // 0x3B8
		::System::Single _TimelineCurveLastVal_monsterIgnisFatuusDistortionOffset2; // 0x3BC
		::System::Single _TimelineCurveFirstVal_monsterIgnisFatuusBlurPow2; // 0x3C0
		::System::Single _TimelineCurveLastVal_monsterIgnisFatuusBlurPow2; // 0x3C4
		::System::Single _TimelineCurveFirstVal_monsterIgnisFatuusColorDistortionIntensity2; // 0x3C8
		::System::Single _TimelineCurveLastVal_monsterIgnisFatuusColorDistortionIntensity2; // 0x3CC
		::System::Single _TimelineCurveFirstVal_monsterIgnisFatuusSoftEdgePow; // 0x3D0
		::System::Single _TimelineCurveLastVal_monsterIgnisFatuusSoftEdgePow; // 0x3D4
		::System::Single _TimelineCurveFirstVal_monsterIgnisFatuusSoftEdgeRange; // 0x3D8
		::System::Single _TimelineCurveLastVal_monsterIgnisFatuusSoftEdgeRange; // 0x3DC
		::System::Single _TimelineCurveFirstVal_monsterIgnisFatuusDisappearStart; // 0x3E0
		::System::Single _TimelineCurveLastVal_monsterIgnisFatuusDisappearStart; // 0x3E4
		::System::Single _TimelineCurveFirstVal_monsterIgnisFatuusDisappearEnd; // 0x3E8
		::System::Single _TimelineCurveLastVal_monsterIgnisFatuusDisappearEnd; // 0x3EC
		::System::Single _TimelineCurveFirstVal_monsterIgnisFatuusFadeIn; // 0x3F0
		::System::Single _TimelineCurveLastVal_monsterIgnisFatuusFadeIn; // 0x3F4
		::System::Single _TimelineCurveFirstVal_monsterIgnisFatuusFadeOut; // 0x3F8
		::System::Single _TimelineCurveLastVal_monsterIgnisFatuusFadeOut; // 0x3FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusActive_FieldHandleType; // 0x400
		::System::Boolean ESPP_monsterIgnisFatuusActive; // 0x404
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusDownSample_FieldHandleType; // 0x408
		::System::Int32 ESPP_monsterIgnisFatuusDownSample; // 0x40C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusSelfMask_FieldHandleType; // 0x410
		::System::Boolean ESPP_monsterIgnisFatuusSelfMask; // 0x414
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusDepthMaskOffset_FieldHandleType; // 0x418
		::System::Single ESPP_monsterIgnisFatuusDepthMaskOffset; // 0x41C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusColorBlendMode_FieldHandleType; // 0x420
		::UnityEngine::Rendering::Universal::BlendModes ESPP_monsterIgnisFatuusColorBlendMode; // 0x424
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useMonsterIgnisFatuusColorTextureAlpha_FieldHandleType; // 0x428
		::System::Boolean ESPP_useMonsterIgnisFatuusColorTextureAlpha; // 0x42C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusColor_FieldHandleType; // 0x430
		::System::Boolean ESPP_monsterIgnisFatuusColor_UseIt; // 0x434
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_monsterIgnisFatuusColor; // 0x438
		::System::Boolean ESPP_monsterIgnisFatuusColor_EnableFade; // 0x440
		::System::Boolean ESPP_monsterIgnisFatuusColor_EnableOverrideDefaultValue; // 0x441
		::UnityEngine::Color ESPP_monsterIgnisFatuusColor_OverrideDefaultValue; // 0x444
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusColorTexture_FieldHandleType; // 0x454
		::UnityEngine::Texture* ESPP_monsterIgnisFatuusColorTexture; // 0x458
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusColorTextureUVScale_FieldHandleType; // 0x460
		::System::Boolean ESPP_monsterIgnisFatuusColorTextureUVScale_UseIt; // 0x464
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_monsterIgnisFatuusColorTextureUVScale; // 0x468
		::System::Boolean ESPP_monsterIgnisFatuusColorTextureUVScale_EnableFade; // 0x470
		::System::Boolean ESPP_monsterIgnisFatuusColorTextureUVScale_EnableOverrideDefaultValue; // 0x471
		::UnityEngine::Vector2 ESPP_monsterIgnisFatuusColorTextureUVScale_OverrideDefaultValue; // 0x474
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusColorTextureUVSpeed_FieldHandleType; // 0x47C
		::System::Boolean ESPP_monsterIgnisFatuusColorTextureUVSpeed_UseIt; // 0x480
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_monsterIgnisFatuusColorTextureUVSpeed; // 0x488
		::System::Boolean ESPP_monsterIgnisFatuusColorTextureUVSpeed_EnableFade; // 0x490
		::System::Boolean ESPP_monsterIgnisFatuusColorTextureUVSpeed_EnableOverrideDefaultValue; // 0x491
		::UnityEngine::Vector2 ESPP_monsterIgnisFatuusColorTextureUVSpeed_OverrideDefaultValue; // 0x494
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusNoiseTexture_FieldHandleType; // 0x49C
		::UnityEngine::Texture* ESPP_monsterIgnisFatuusNoiseTexture; // 0x4A0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusNoiseTextureUVScale_FieldHandleType; // 0x4A8
		::System::Boolean ESPP_monsterIgnisFatuusNoiseTextureUVScale_UseIt; // 0x4AC
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_monsterIgnisFatuusNoiseTextureUVScale; // 0x4B0
		::System::Boolean ESPP_monsterIgnisFatuusNoiseTextureUVScale_EnableFade; // 0x4B8
		::System::Boolean ESPP_monsterIgnisFatuusNoiseTextureUVScale_EnableOverrideDefaultValue; // 0x4B9
		::UnityEngine::Vector2 ESPP_monsterIgnisFatuusNoiseTextureUVScale_OverrideDefaultValue; // 0x4BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusNoiseTextureUVSpeed_FieldHandleType; // 0x4C4
		::System::Boolean ESPP_monsterIgnisFatuusNoiseTextureUVSpeed_UseIt; // 0x4C8
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_monsterIgnisFatuusNoiseTextureUVSpeed; // 0x4D0
		::System::Boolean ESPP_monsterIgnisFatuusNoiseTextureUVSpeed_EnableFade; // 0x4D8
		::System::Boolean ESPP_monsterIgnisFatuusNoiseTextureUVSpeed_EnableOverrideDefaultValue; // 0x4D9
		::UnityEngine::Vector2 ESPP_monsterIgnisFatuusNoiseTextureUVSpeed_OverrideDefaultValue; // 0x4DC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusDistortionIntensity_FieldHandleType; // 0x4E4
		::System::Boolean ESPP_monsterIgnisFatuusDistortionIntensity_UseIt; // 0x4E8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_monsterIgnisFatuusDistortionIntensity; // 0x4F0
		::System::Boolean ESPP_monsterIgnisFatuusDistortionIntensity_EnableFade; // 0x4F8
		::System::Boolean ESPP_monsterIgnisFatuusDistortionIntensity_EnableOverrideDefaultValue; // 0x4F9
		::System::Single ESPP_monsterIgnisFatuusDistortionIntensity_OverrideDefaultValue; // 0x4FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusDistortionOffset_FieldHandleType; // 0x500
		::System::Boolean ESPP_monsterIgnisFatuusDistortionOffset_UseIt; // 0x504
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_monsterIgnisFatuusDistortionOffset; // 0x508
		::System::Boolean ESPP_monsterIgnisFatuusDistortionOffset_EnableFade; // 0x510
		::System::Boolean ESPP_monsterIgnisFatuusDistortionOffset_EnableOverrideDefaultValue; // 0x511
		::System::Single ESPP_monsterIgnisFatuusDistortionOffset_OverrideDefaultValue; // 0x514
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusBlurPow_FieldHandleType; // 0x518
		::System::Boolean ESPP_monsterIgnisFatuusBlurPow_UseIt; // 0x51C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_monsterIgnisFatuusBlurPow; // 0x520
		::System::Boolean ESPP_monsterIgnisFatuusBlurPow_EnableFade; // 0x528
		::System::Boolean ESPP_monsterIgnisFatuusBlurPow_EnableOverrideDefaultValue; // 0x529
		::System::Single ESPP_monsterIgnisFatuusBlurPow_OverrideDefaultValue; // 0x52C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusColorDistortionIntensity_FieldHandleType; // 0x530
		::System::Boolean ESPP_monsterIgnisFatuusColorDistortionIntensity_UseIt; // 0x534
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_monsterIgnisFatuusColorDistortionIntensity; // 0x538
		::System::Boolean ESPP_monsterIgnisFatuusColorDistortionIntensity_EnableFade; // 0x540
		::System::Boolean ESPP_monsterIgnisFatuusColorDistortionIntensity_EnableOverrideDefaultValue; // 0x541
		::System::Single ESPP_monsterIgnisFatuusColorDistortionIntensity_OverrideDefaultValue; // 0x544
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusColor2_FieldHandleType; // 0x548
		::System::Boolean ESPP_monsterIgnisFatuusColor2_UseIt; // 0x54C
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_monsterIgnisFatuusColor2; // 0x550
		::System::Boolean ESPP_monsterIgnisFatuusColor2_EnableFade; // 0x558
		::System::Boolean ESPP_monsterIgnisFatuusColor2_EnableOverrideDefaultValue; // 0x559
		::UnityEngine::Color ESPP_monsterIgnisFatuusColor2_OverrideDefaultValue; // 0x55C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusColorTexture2_FieldHandleType; // 0x56C
		::UnityEngine::Texture* ESPP_monsterIgnisFatuusColorTexture2; // 0x570
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusColorTextureUVScale2_FieldHandleType; // 0x578
		::System::Boolean ESPP_monsterIgnisFatuusColorTextureUVScale2_UseIt; // 0x57C
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_monsterIgnisFatuusColorTextureUVScale2; // 0x580
		::System::Boolean ESPP_monsterIgnisFatuusColorTextureUVScale2_EnableFade; // 0x588
		::System::Boolean ESPP_monsterIgnisFatuusColorTextureUVScale2_EnableOverrideDefaultValue; // 0x589
		::UnityEngine::Vector2 ESPP_monsterIgnisFatuusColorTextureUVScale2_OverrideDefaultValue; // 0x58C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusColorTextureUVSpeed2_FieldHandleType; // 0x594
		::System::Boolean ESPP_monsterIgnisFatuusColorTextureUVSpeed2_UseIt; // 0x598
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_monsterIgnisFatuusColorTextureUVSpeed2; // 0x5A0
		::System::Boolean ESPP_monsterIgnisFatuusColorTextureUVSpeed2_EnableFade; // 0x5A8
		::System::Boolean ESPP_monsterIgnisFatuusColorTextureUVSpeed2_EnableOverrideDefaultValue; // 0x5A9
		::UnityEngine::Vector2 ESPP_monsterIgnisFatuusColorTextureUVSpeed2_OverrideDefaultValue; // 0x5AC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusNoiseTexture2_FieldHandleType; // 0x5B4
		::UnityEngine::Texture* ESPP_monsterIgnisFatuusNoiseTexture2; // 0x5B8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusNoiseTextureUVScale2_FieldHandleType; // 0x5C0
		::System::Boolean ESPP_monsterIgnisFatuusNoiseTextureUVScale2_UseIt; // 0x5C4
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_monsterIgnisFatuusNoiseTextureUVScale2; // 0x5C8
		::System::Boolean ESPP_monsterIgnisFatuusNoiseTextureUVScale2_EnableFade; // 0x5D0
		::System::Boolean ESPP_monsterIgnisFatuusNoiseTextureUVScale2_EnableOverrideDefaultValue; // 0x5D1
		::UnityEngine::Vector2 ESPP_monsterIgnisFatuusNoiseTextureUVScale2_OverrideDefaultValue; // 0x5D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusNoiseTextureUVSpeed2_FieldHandleType; // 0x5DC
		::System::Boolean ESPP_monsterIgnisFatuusNoiseTextureUVSpeed2_UseIt; // 0x5E0
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_monsterIgnisFatuusNoiseTextureUVSpeed2; // 0x5E8
		::System::Boolean ESPP_monsterIgnisFatuusNoiseTextureUVSpeed2_EnableFade; // 0x5F0
		::System::Boolean ESPP_monsterIgnisFatuusNoiseTextureUVSpeed2_EnableOverrideDefaultValue; // 0x5F1
		::UnityEngine::Vector2 ESPP_monsterIgnisFatuusNoiseTextureUVSpeed2_OverrideDefaultValue; // 0x5F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusDistortionIntensity2_FieldHandleType; // 0x5FC
		::System::Boolean ESPP_monsterIgnisFatuusDistortionIntensity2_UseIt; // 0x600
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_monsterIgnisFatuusDistortionIntensity2; // 0x608
		::System::Boolean ESPP_monsterIgnisFatuusDistortionIntensity2_EnableFade; // 0x610
		::System::Boolean ESPP_monsterIgnisFatuusDistortionIntensity2_EnableOverrideDefaultValue; // 0x611
		::System::Single ESPP_monsterIgnisFatuusDistortionIntensity2_OverrideDefaultValue; // 0x614
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusDistortionOffset2_FieldHandleType; // 0x618
		::System::Boolean ESPP_monsterIgnisFatuusDistortionOffset2_UseIt; // 0x61C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_monsterIgnisFatuusDistortionOffset2; // 0x620
		::System::Boolean ESPP_monsterIgnisFatuusDistortionOffset2_EnableFade; // 0x628
		::System::Boolean ESPP_monsterIgnisFatuusDistortionOffset2_EnableOverrideDefaultValue; // 0x629
		::System::Single ESPP_monsterIgnisFatuusDistortionOffset2_OverrideDefaultValue; // 0x62C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusBlurPow2_FieldHandleType; // 0x630
		::System::Boolean ESPP_monsterIgnisFatuusBlurPow2_UseIt; // 0x634
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_monsterIgnisFatuusBlurPow2; // 0x638
		::System::Boolean ESPP_monsterIgnisFatuusBlurPow2_EnableFade; // 0x640
		::System::Boolean ESPP_monsterIgnisFatuusBlurPow2_EnableOverrideDefaultValue; // 0x641
		::System::Single ESPP_monsterIgnisFatuusBlurPow2_OverrideDefaultValue; // 0x644
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusColorDistortionIntensity2_FieldHandleType; // 0x648
		::System::Boolean ESPP_monsterIgnisFatuusColorDistortionIntensity2_UseIt; // 0x64C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_monsterIgnisFatuusColorDistortionIntensity2; // 0x650
		::System::Boolean ESPP_monsterIgnisFatuusColorDistortionIntensity2_EnableFade; // 0x658
		::System::Boolean ESPP_monsterIgnisFatuusColorDistortionIntensity2_EnableOverrideDefaultValue; // 0x659
		::System::Single ESPP_monsterIgnisFatuusColorDistortionIntensity2_OverrideDefaultValue; // 0x65C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusSoftEdgePow_FieldHandleType; // 0x660
		::System::Boolean ESPP_monsterIgnisFatuusSoftEdgePow_UseIt; // 0x664
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_monsterIgnisFatuusSoftEdgePow; // 0x668
		::System::Boolean ESPP_monsterIgnisFatuusSoftEdgePow_EnableFade; // 0x670
		::System::Boolean ESPP_monsterIgnisFatuusSoftEdgePow_EnableOverrideDefaultValue; // 0x671
		::System::Single ESPP_monsterIgnisFatuusSoftEdgePow_OverrideDefaultValue; // 0x674
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusSoftEdgeRange_FieldHandleType; // 0x678
		::System::Boolean ESPP_monsterIgnisFatuusSoftEdgeRange_UseIt; // 0x67C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_monsterIgnisFatuusSoftEdgeRange; // 0x680
		::System::Boolean ESPP_monsterIgnisFatuusSoftEdgeRange_EnableFade; // 0x688
		::System::Boolean ESPP_monsterIgnisFatuusSoftEdgeRange_EnableOverrideDefaultValue; // 0x689
		::System::Single ESPP_monsterIgnisFatuusSoftEdgeRange_OverrideDefaultValue; // 0x68C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusDisappearStart_FieldHandleType; // 0x690
		::System::Boolean ESPP_monsterIgnisFatuusDisappearStart_UseIt; // 0x694
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_monsterIgnisFatuusDisappearStart; // 0x698
		::System::Boolean ESPP_monsterIgnisFatuusDisappearStart_EnableFade; // 0x6A0
		::System::Boolean ESPP_monsterIgnisFatuusDisappearStart_EnableOverrideDefaultValue; // 0x6A1
		::System::Single ESPP_monsterIgnisFatuusDisappearStart_OverrideDefaultValue; // 0x6A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusDisappearEnd_FieldHandleType; // 0x6A8
		::System::Boolean ESPP_monsterIgnisFatuusDisappearEnd_UseIt; // 0x6AC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_monsterIgnisFatuusDisappearEnd; // 0x6B0
		::System::Boolean ESPP_monsterIgnisFatuusDisappearEnd_EnableFade; // 0x6B8
		::System::Boolean ESPP_monsterIgnisFatuusDisappearEnd_EnableOverrideDefaultValue; // 0x6B9
		::System::Single ESPP_monsterIgnisFatuusDisappearEnd_OverrideDefaultValue; // 0x6BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusFadeIn_FieldHandleType; // 0x6C0
		::System::Boolean ESPP_monsterIgnisFatuusFadeIn_UseIt; // 0x6C4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_monsterIgnisFatuusFadeIn; // 0x6C8
		::System::Boolean ESPP_monsterIgnisFatuusFadeIn_EnableFade; // 0x6D0
		::System::Boolean ESPP_monsterIgnisFatuusFadeIn_EnableOverrideDefaultValue; // 0x6D1
		::System::Single ESPP_monsterIgnisFatuusFadeIn_OverrideDefaultValue; // 0x6D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_monsterIgnisFatuusFadeOut_FieldHandleType; // 0x6D8
		::System::Boolean ESPP_monsterIgnisFatuusFadeOut_UseIt; // 0x6DC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_monsterIgnisFatuusFadeOut; // 0x6E0
		::System::Boolean ESPP_monsterIgnisFatuusFadeOut_EnableFade; // 0x6E8
		::System::Boolean ESPP_monsterIgnisFatuusFadeOut_EnableOverrideDefaultValue; // 0x6E9
		::System::Single ESPP_monsterIgnisFatuusFadeOut_OverrideDefaultValue; // 0x6EC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_A99450342763EB98()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS_METHOD_5_A99450342763EB98_OFFSET))(this);
		}

		::System::Void Method_5_459C79521BFE514E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS_METHOD_5_459C79521BFE514E_OFFSET))(this, a1);
		}

		::System::Void Method_5_7A5EE891DA69F667(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS_METHOD_5_7A5EE891DA69F667_OFFSET))(this, a1);
		}

		::System::Void Method_5_AB40C959416D450B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS_METHOD_5_AB40C959416D450B_OFFSET))(this, a1);
		}

		::System::Void Method_5_4F6CBEF30D6E7AC4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS_METHOD_5_4F6CBEF30D6E7AC4_OFFSET))(this, a1);
		}

		::System::Void Method_5_4F6CBEF30D6E7AC4_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMONSTERIGNISFATUUS_METHOD_5_4F6CBEF30D6E7AC4_1_OFFSET))(this, a1);
		}
	};
}
