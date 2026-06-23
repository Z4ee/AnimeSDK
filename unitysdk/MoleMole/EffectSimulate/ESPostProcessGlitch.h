#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigEntityGlitchEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector4KeyframeCurve; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class Glitch; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x18F6D1B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x18F70250)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH_METHOD_5_33AEB8F024CE4DC0_1_OFFSET UNITYSDK_OFFSET(0x18F7E8F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH_METHOD_5_33AEB8F024CE4DC0_OFFSET UNITYSDK_OFFSET(0x18F7C3D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x18F6D7A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18F6D790)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH_METHOD_5_9E93A3CD963FC72F_OFFSET UNITYSDK_OFFSET(0x18F79580)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x18F6DE50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH_METHOD_5_EB4352D10DA7234E_OFFSET UNITYSDK_OFFSET(0x18F714C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x18F80E10)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessGlitch_TypeDefinitionIndex = 58107;

	class ESPostProcessGlitch : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::Glitch*>
	{
	public:
		::MoleMole::Config::ConfigEntityGlitchEffects* m_stAsset; // 0xB0
		::System::Single _VolDefault_glitchAngle; // 0xB8
		::System::Single _VolDefault_rShift; // 0xBC
		::System::Single _VolDefault_gShift; // 0xC0
		::System::Single _VolDefault_bShift; // 0xC4
		::System::Single _VolDefault_noiseScale; // 0xC8
		::System::Single _VolDefault_noiseDistortion; // 0xCC
		::System::Single _VolDefault_distortionThreshold; // 0xD0
		::System::Single _VolDefault_lineThresholdMin; // 0xD4
		::System::Single _VolDefault_lineThresholdMax; // 0xD8
		::System::Single _VolDefault_lineBrightness; // 0xDC
		::UnityEngine::Texture* _VolDefault_texture; // 0xE0
		::System::Boolean _VolDefault_mask; // 0xE8
		::UnityEngine::Vector4 _VolDefault_maskTexTillingOffset; // 0xEC
		::System::Boolean _VolDefault_randomOpacity; // 0xFC
		::UnityEngine::Vector4 _VolDefault_randomOpacityTillingOffset; // 0x100
		::UnityEngine::Vector2 _VolDefault_randomOpacitySpeed; // 0x110
		::System::Boolean _VolDefault_characterDistortionMaskOn; // 0x118
		::System::Single _VolDefault_glitchIntensity; // 0x11C
		::UnityEngine::Texture* _VolDefault_glitchNoiseTex; // 0x120
		::System::Single _VolDefault_glitchNoiseTexSpeed; // 0x128
		::System::Single _VolDefault_glitchRand; // 0x12C
		::UnityEngine::Texture* _VolDefault_glitchTex1; // 0x130
		::UnityEngine::Vector2 _VolDefault_glitchTex1ScaleOffset; // 0x138
		::System::Single _VolDefault_glitchTex1Amount; // 0x140
		::System::Single _VolDefault_glitchTex1Range; // 0x144
		::UnityEngine::Texture* _VolDefault_glitchTex2; // 0x148
		::UnityEngine::Vector2 _VolDefault_glitchTex2ScaleOffset; // 0x150
		::System::Single _VolDefault_glitchTex2Amount; // 0x158
		::System::Single _VolDefault_glitchTex2Range; // 0x15C
		::UnityEngine::Color _VolDefault_overrideMap3DColor; // 0x160
		::System::Boolean _VolPreVal_glitchAngle_overrideState; // 0x170
		::System::Single _VolPreVal_glitchAngle; // 0x174
		::System::Boolean _VolPreVal_rShift_overrideState; // 0x178
		::System::Single _VolPreVal_rShift; // 0x17C
		::System::Boolean _VolPreVal_gShift_overrideState; // 0x180
		::System::Single _VolPreVal_gShift; // 0x184
		::System::Boolean _VolPreVal_bShift_overrideState; // 0x188
		::System::Single _VolPreVal_bShift; // 0x18C
		::System::Boolean _VolPreVal_noiseScale_overrideState; // 0x190
		::System::Single _VolPreVal_noiseScale; // 0x194
		::System::Boolean _VolPreVal_noiseDistortion_overrideState; // 0x198
		::System::Single _VolPreVal_noiseDistortion; // 0x19C
		::System::Boolean _VolPreVal_distortionThreshold_overrideState; // 0x1A0
		::System::Single _VolPreVal_distortionThreshold; // 0x1A4
		::System::Boolean _VolPreVal_lineThresholdMin_overrideState; // 0x1A8
		::System::Single _VolPreVal_lineThresholdMin; // 0x1AC
		::System::Boolean _VolPreVal_lineThresholdMax_overrideState; // 0x1B0
		::System::Single _VolPreVal_lineThresholdMax; // 0x1B4
		::System::Boolean _VolPreVal_lineBrightness_overrideState; // 0x1B8
		::System::Single _VolPreVal_lineBrightness; // 0x1BC
		::System::Boolean _VolPreVal_texture_overrideState; // 0x1C0
		::UnityEngine::Texture* _VolPreVal_texture; // 0x1C8
		::System::Boolean _VolPreVal_mask_overrideState; // 0x1D0
		::System::Boolean _VolPreVal_mask; // 0x1D1
		::System::Boolean _VolPreVal_maskTexTillingOffset_overrideState; // 0x1D2
		::UnityEngine::Vector4 _VolPreVal_maskTexTillingOffset; // 0x1D4
		::System::Boolean _VolPreVal_randomOpacity_overrideState; // 0x1E4
		::System::Boolean _VolPreVal_randomOpacity; // 0x1E5
		::System::Boolean _VolPreVal_randomOpacityTillingOffset_overrideState; // 0x1E6
		::UnityEngine::Vector4 _VolPreVal_randomOpacityTillingOffset; // 0x1E8
		::System::Boolean _VolPreVal_randomOpacitySpeed_overrideState; // 0x1F8
		::UnityEngine::Vector2 _VolPreVal_randomOpacitySpeed; // 0x1FC
		::System::Boolean _VolPreVal_characterDistortionMaskOn_overrideState; // 0x204
		::System::Boolean _VolPreVal_characterDistortionMaskOn; // 0x205
		::System::Boolean _VolPreVal_glitchIntensity_overrideState; // 0x206
		::System::Single _VolPreVal_glitchIntensity; // 0x208
		::System::Boolean _VolPreVal_glitchNoiseTex_overrideState; // 0x20C
		::UnityEngine::Texture* _VolPreVal_glitchNoiseTex; // 0x210
		::System::Boolean _VolPreVal_glitchNoiseTexSpeed_overrideState; // 0x218
		::System::Single _VolPreVal_glitchNoiseTexSpeed; // 0x21C
		::System::Boolean _VolPreVal_glitchRand_overrideState; // 0x220
		::System::Single _VolPreVal_glitchRand; // 0x224
		::System::Boolean _VolPreVal_glitchTex1_overrideState; // 0x228
		::UnityEngine::Texture* _VolPreVal_glitchTex1; // 0x230
		::System::Boolean _VolPreVal_glitchTex1ScaleOffset_overrideState; // 0x238
		::UnityEngine::Vector2 _VolPreVal_glitchTex1ScaleOffset; // 0x23C
		::System::Boolean _VolPreVal_glitchTex1Amount_overrideState; // 0x244
		::System::Single _VolPreVal_glitchTex1Amount; // 0x248
		::System::Boolean _VolPreVal_glitchTex1Range_overrideState; // 0x24C
		::System::Single _VolPreVal_glitchTex1Range; // 0x250
		::System::Boolean _VolPreVal_glitchTex2_overrideState; // 0x254
		::UnityEngine::Texture* _VolPreVal_glitchTex2; // 0x258
		::System::Boolean _VolPreVal_glitchTex2ScaleOffset_overrideState; // 0x260
		::UnityEngine::Vector2 _VolPreVal_glitchTex2ScaleOffset; // 0x264
		::System::Boolean _VolPreVal_glitchTex2Amount_overrideState; // 0x26C
		::System::Single _VolPreVal_glitchTex2Amount; // 0x270
		::System::Boolean _VolPreVal_glitchTex2Range_overrideState; // 0x274
		::System::Single _VolPreVal_glitchTex2Range; // 0x278
		::System::Boolean _VolPreVal_overrideMap3DColor_overrideState; // 0x27C
		::UnityEngine::Color _VolPreVal_overrideMap3DColor; // 0x280
		::System::Single _TimelineCurveFirstVal_glitchAngle; // 0x290
		::System::Single _TimelineCurveLastVal_glitchAngle; // 0x294
		::System::Single _TimelineCurveFirstVal_rShift; // 0x298
		::System::Single _TimelineCurveLastVal_rShift; // 0x29C
		::System::Single _TimelineCurveFirstVal_gShift; // 0x2A0
		::System::Single _TimelineCurveLastVal_gShift; // 0x2A4
		::System::Single _TimelineCurveFirstVal_bShift; // 0x2A8
		::System::Single _TimelineCurveLastVal_bShift; // 0x2AC
		::System::Single _TimelineCurveFirstVal_noiseScale; // 0x2B0
		::System::Single _TimelineCurveLastVal_noiseScale; // 0x2B4
		::System::Single _TimelineCurveFirstVal_noiseDistortion; // 0x2B8
		::System::Single _TimelineCurveLastVal_noiseDistortion; // 0x2BC
		::System::Single _TimelineCurveFirstVal_distortionThreshold; // 0x2C0
		::System::Single _TimelineCurveLastVal_distortionThreshold; // 0x2C4
		::System::Single _TimelineCurveFirstVal_lineThresholdMin; // 0x2C8
		::System::Single _TimelineCurveLastVal_lineThresholdMin; // 0x2CC
		::System::Single _TimelineCurveFirstVal_lineThresholdMax; // 0x2D0
		::System::Single _TimelineCurveLastVal_lineThresholdMax; // 0x2D4
		::System::Single _TimelineCurveFirstVal_lineBrightness; // 0x2D8
		::System::Single _TimelineCurveLastVal_lineBrightness; // 0x2DC
		::System::Boolean _TimelineCurveFirstVal_mask; // 0x2E0
		::System::Boolean _TimelineCurveLastVal_mask; // 0x2E1
		::UnityEngine::Vector4 _TimelineCurveFirstVal_maskTexTillingOffset; // 0x2E4
		::UnityEngine::Vector4 _TimelineCurveLastVal_maskTexTillingOffset; // 0x2F4
		::System::Boolean _TimelineCurveFirstVal_randomOpacity; // 0x304
		::System::Boolean _TimelineCurveLastVal_randomOpacity; // 0x305
		::UnityEngine::Vector4 _TimelineCurveFirstVal_randomOpacityTillingOffset; // 0x308
		::UnityEngine::Vector4 _TimelineCurveLastVal_randomOpacityTillingOffset; // 0x318
		::UnityEngine::Vector2 _TimelineCurveFirstVal_randomOpacitySpeed; // 0x328
		::UnityEngine::Vector2 _TimelineCurveLastVal_randomOpacitySpeed; // 0x330
		::System::Single _TimelineCurveFirstVal_glitchIntensity; // 0x338
		::System::Single _TimelineCurveLastVal_glitchIntensity; // 0x33C
		::System::Single _TimelineCurveFirstVal_glitchNoiseTexSpeed; // 0x340
		::System::Single _TimelineCurveLastVal_glitchNoiseTexSpeed; // 0x344
		::System::Single _TimelineCurveFirstVal_glitchRand; // 0x348
		::System::Single _TimelineCurveLastVal_glitchRand; // 0x34C
		::UnityEngine::Vector2 _TimelineCurveFirstVal_glitchTex1ScaleOffset; // 0x350
		::UnityEngine::Vector2 _TimelineCurveLastVal_glitchTex1ScaleOffset; // 0x358
		::System::Single _TimelineCurveFirstVal_glitchTex1Amount; // 0x360
		::System::Single _TimelineCurveLastVal_glitchTex1Amount; // 0x364
		::System::Single _TimelineCurveFirstVal_glitchTex1Range; // 0x368
		::System::Single _TimelineCurveLastVal_glitchTex1Range; // 0x36C
		::UnityEngine::Vector2 _TimelineCurveFirstVal_glitchTex2ScaleOffset; // 0x370
		::UnityEngine::Vector2 _TimelineCurveLastVal_glitchTex2ScaleOffset; // 0x378
		::System::Single _TimelineCurveFirstVal_glitchTex2Amount; // 0x380
		::System::Single _TimelineCurveLastVal_glitchTex2Amount; // 0x384
		::System::Single _TimelineCurveFirstVal_glitchTex2Range; // 0x388
		::System::Single _TimelineCurveLastVal_glitchTex2Range; // 0x38C
		::UnityEngine::Color _TimelineCurveFirstVal_overrideMap3DColor; // 0x390
		::UnityEngine::Color _TimelineCurveLastVal_overrideMap3DColor; // 0x3A0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glitchAngle_FieldHandleType; // 0x3B0
		::System::Boolean ESPP_glitchAngle_UseIt; // 0x3B4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glitchAngle; // 0x3B8
		::System::Boolean ESPP_glitchAngle_EnableFade; // 0x3C0
		::System::Boolean ESPP_glitchAngle_EnableOverrideDefaultValue; // 0x3C1
		::System::Single ESPP_glitchAngle_OverrideDefaultValue; // 0x3C4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rShift_FieldHandleType; // 0x3C8
		::System::Boolean ESPP_rShift_UseIt; // 0x3CC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_rShift; // 0x3D0
		::System::Boolean ESPP_rShift_EnableFade; // 0x3D8
		::System::Boolean ESPP_rShift_EnableOverrideDefaultValue; // 0x3D9
		::System::Single ESPP_rShift_OverrideDefaultValue; // 0x3DC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gShift_FieldHandleType; // 0x3E0
		::System::Boolean ESPP_gShift_UseIt; // 0x3E4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_gShift; // 0x3E8
		::System::Boolean ESPP_gShift_EnableFade; // 0x3F0
		::System::Boolean ESPP_gShift_EnableOverrideDefaultValue; // 0x3F1
		::System::Single ESPP_gShift_OverrideDefaultValue; // 0x3F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_bShift_FieldHandleType; // 0x3F8
		::System::Boolean ESPP_bShift_UseIt; // 0x3FC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_bShift; // 0x400
		::System::Boolean ESPP_bShift_EnableFade; // 0x408
		::System::Boolean ESPP_bShift_EnableOverrideDefaultValue; // 0x409
		::System::Single ESPP_bShift_OverrideDefaultValue; // 0x40C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_noiseScale_FieldHandleType; // 0x410
		::System::Boolean ESPP_noiseScale_UseIt; // 0x414
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_noiseScale; // 0x418
		::System::Boolean ESPP_noiseScale_EnableFade; // 0x420
		::System::Boolean ESPP_noiseScale_EnableOverrideDefaultValue; // 0x421
		::System::Single ESPP_noiseScale_OverrideDefaultValue; // 0x424
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_noiseDistortion_FieldHandleType; // 0x428
		::System::Boolean ESPP_noiseDistortion_UseIt; // 0x42C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_noiseDistortion; // 0x430
		::System::Boolean ESPP_noiseDistortion_EnableFade; // 0x438
		::System::Boolean ESPP_noiseDistortion_EnableOverrideDefaultValue; // 0x439
		::System::Single ESPP_noiseDistortion_OverrideDefaultValue; // 0x43C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distortionThreshold_FieldHandleType; // 0x440
		::System::Boolean ESPP_distortionThreshold_UseIt; // 0x444
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distortionThreshold; // 0x448
		::System::Boolean ESPP_distortionThreshold_EnableFade; // 0x450
		::System::Boolean ESPP_distortionThreshold_EnableOverrideDefaultValue; // 0x451
		::System::Single ESPP_distortionThreshold_OverrideDefaultValue; // 0x454
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lineThresholdMin_FieldHandleType; // 0x458
		::System::Boolean ESPP_lineThresholdMin_UseIt; // 0x45C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lineThresholdMin; // 0x460
		::System::Boolean ESPP_lineThresholdMin_EnableFade; // 0x468
		::System::Boolean ESPP_lineThresholdMin_EnableOverrideDefaultValue; // 0x469
		::System::Single ESPP_lineThresholdMin_OverrideDefaultValue; // 0x46C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lineThresholdMax_FieldHandleType; // 0x470
		::System::Boolean ESPP_lineThresholdMax_UseIt; // 0x474
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lineThresholdMax; // 0x478
		::System::Boolean ESPP_lineThresholdMax_EnableFade; // 0x480
		::System::Boolean ESPP_lineThresholdMax_EnableOverrideDefaultValue; // 0x481
		::System::Single ESPP_lineThresholdMax_OverrideDefaultValue; // 0x484
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lineBrightness_FieldHandleType; // 0x488
		::System::Boolean ESPP_lineBrightness_UseIt; // 0x48C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lineBrightness; // 0x490
		::System::Boolean ESPP_lineBrightness_EnableFade; // 0x498
		::System::Boolean ESPP_lineBrightness_EnableOverrideDefaultValue; // 0x499
		::System::Single ESPP_lineBrightness_OverrideDefaultValue; // 0x49C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_texture_FieldHandleType; // 0x4A0
		::UnityEngine::Texture* ESPP_texture; // 0x4A8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_mask_FieldHandleType; // 0x4B0
		::System::Boolean ESPP_mask_UseIt; // 0x4B4
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_mask; // 0x4B8
		::System::Boolean ESPP_mask_EnableFade; // 0x4C0
		::System::Boolean ESPP_mask_EnableOverrideDefaultValue; // 0x4C1
		::System::Boolean ESPP_mask_OverrideDefaultValue; // 0x4C2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_maskTexTillingOffset_FieldHandleType; // 0x4C4
		::System::Boolean ESPP_maskTexTillingOffset_UseIt; // 0x4C8
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_maskTexTillingOffset; // 0x4D0
		::System::Boolean ESPP_maskTexTillingOffset_EnableFade; // 0x4D8
		::System::Boolean ESPP_maskTexTillingOffset_EnableOverrideDefaultValue; // 0x4D9
		::UnityEngine::Vector4 ESPP_maskTexTillingOffset_OverrideDefaultValue; // 0x4DC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_randomOpacity_FieldHandleType; // 0x4EC
		::System::Boolean ESPP_randomOpacity_UseIt; // 0x4F0
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_randomOpacity; // 0x4F8
		::System::Boolean ESPP_randomOpacity_EnableFade; // 0x500
		::System::Boolean ESPP_randomOpacity_EnableOverrideDefaultValue; // 0x501
		::System::Boolean ESPP_randomOpacity_OverrideDefaultValue; // 0x502
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_randomOpacityTillingOffset_FieldHandleType; // 0x504
		::System::Boolean ESPP_randomOpacityTillingOffset_UseIt; // 0x508
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_randomOpacityTillingOffset; // 0x510
		::System::Boolean ESPP_randomOpacityTillingOffset_EnableFade; // 0x518
		::System::Boolean ESPP_randomOpacityTillingOffset_EnableOverrideDefaultValue; // 0x519
		::UnityEngine::Vector4 ESPP_randomOpacityTillingOffset_OverrideDefaultValue; // 0x51C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_randomOpacitySpeed_FieldHandleType; // 0x52C
		::System::Boolean ESPP_randomOpacitySpeed_UseIt; // 0x530
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_randomOpacitySpeed; // 0x538
		::System::Boolean ESPP_randomOpacitySpeed_EnableFade; // 0x540
		::System::Boolean ESPP_randomOpacitySpeed_EnableOverrideDefaultValue; // 0x541
		::UnityEngine::Vector2 ESPP_randomOpacitySpeed_OverrideDefaultValue; // 0x544
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterDistortionMaskOn_FieldHandleType; // 0x54C
		::System::Boolean ESPP_characterDistortionMaskOn; // 0x550
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glitchIntensity_FieldHandleType; // 0x554
		::System::Boolean ESPP_glitchIntensity_UseIt; // 0x558
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glitchIntensity; // 0x560
		::System::Boolean ESPP_glitchIntensity_EnableFade; // 0x568
		::System::Boolean ESPP_glitchIntensity_EnableOverrideDefaultValue; // 0x569
		::System::Single ESPP_glitchIntensity_OverrideDefaultValue; // 0x56C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glitchNoiseTex_FieldHandleType; // 0x570
		::UnityEngine::Texture* ESPP_glitchNoiseTex; // 0x578
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glitchNoiseTexSpeed_FieldHandleType; // 0x580
		::System::Boolean ESPP_glitchNoiseTexSpeed_UseIt; // 0x584
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glitchNoiseTexSpeed; // 0x588
		::System::Boolean ESPP_glitchNoiseTexSpeed_EnableFade; // 0x590
		::System::Boolean ESPP_glitchNoiseTexSpeed_EnableOverrideDefaultValue; // 0x591
		::System::Single ESPP_glitchNoiseTexSpeed_OverrideDefaultValue; // 0x594
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glitchRand_FieldHandleType; // 0x598
		::System::Boolean ESPP_glitchRand_UseIt; // 0x59C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glitchRand; // 0x5A0
		::System::Boolean ESPP_glitchRand_EnableFade; // 0x5A8
		::System::Boolean ESPP_glitchRand_EnableOverrideDefaultValue; // 0x5A9
		::System::Single ESPP_glitchRand_OverrideDefaultValue; // 0x5AC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glitchTex1_FieldHandleType; // 0x5B0
		::UnityEngine::Texture* ESPP_glitchTex1; // 0x5B8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glitchTex1ScaleOffset_FieldHandleType; // 0x5C0
		::System::Boolean ESPP_glitchTex1ScaleOffset_UseIt; // 0x5C4
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_glitchTex1ScaleOffset; // 0x5C8
		::System::Boolean ESPP_glitchTex1ScaleOffset_EnableFade; // 0x5D0
		::System::Boolean ESPP_glitchTex1ScaleOffset_EnableOverrideDefaultValue; // 0x5D1
		::UnityEngine::Vector2 ESPP_glitchTex1ScaleOffset_OverrideDefaultValue; // 0x5D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glitchTex1Amount_FieldHandleType; // 0x5DC
		::System::Boolean ESPP_glitchTex1Amount_UseIt; // 0x5E0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glitchTex1Amount; // 0x5E8
		::System::Boolean ESPP_glitchTex1Amount_EnableFade; // 0x5F0
		::System::Boolean ESPP_glitchTex1Amount_EnableOverrideDefaultValue; // 0x5F1
		::System::Single ESPP_glitchTex1Amount_OverrideDefaultValue; // 0x5F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glitchTex1Range_FieldHandleType; // 0x5F8
		::System::Boolean ESPP_glitchTex1Range_UseIt; // 0x5FC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glitchTex1Range; // 0x600
		::System::Boolean ESPP_glitchTex1Range_EnableFade; // 0x608
		::System::Boolean ESPP_glitchTex1Range_EnableOverrideDefaultValue; // 0x609
		::System::Single ESPP_glitchTex1Range_OverrideDefaultValue; // 0x60C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glitchTex2_FieldHandleType; // 0x610
		::UnityEngine::Texture* ESPP_glitchTex2; // 0x618
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glitchTex2ScaleOffset_FieldHandleType; // 0x620
		::System::Boolean ESPP_glitchTex2ScaleOffset_UseIt; // 0x624
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_glitchTex2ScaleOffset; // 0x628
		::System::Boolean ESPP_glitchTex2ScaleOffset_EnableFade; // 0x630
		::System::Boolean ESPP_glitchTex2ScaleOffset_EnableOverrideDefaultValue; // 0x631
		::UnityEngine::Vector2 ESPP_glitchTex2ScaleOffset_OverrideDefaultValue; // 0x634
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glitchTex2Amount_FieldHandleType; // 0x63C
		::System::Boolean ESPP_glitchTex2Amount_UseIt; // 0x640
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glitchTex2Amount; // 0x648
		::System::Boolean ESPP_glitchTex2Amount_EnableFade; // 0x650
		::System::Boolean ESPP_glitchTex2Amount_EnableOverrideDefaultValue; // 0x651
		::System::Single ESPP_glitchTex2Amount_OverrideDefaultValue; // 0x654
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glitchTex2Range_FieldHandleType; // 0x658
		::System::Boolean ESPP_glitchTex2Range_UseIt; // 0x65C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glitchTex2Range; // 0x660
		::System::Boolean ESPP_glitchTex2Range_EnableFade; // 0x668
		::System::Boolean ESPP_glitchTex2Range_EnableOverrideDefaultValue; // 0x669
		::System::Single ESPP_glitchTex2Range_OverrideDefaultValue; // 0x66C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_overrideMap3DColor_FieldHandleType; // 0x670
		::System::Boolean ESPP_overrideMap3DColor_UseIt; // 0x674
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_overrideMap3DColor; // 0x678
		::System::Boolean ESPP_overrideMap3DColor_EnableFade; // 0x680
		::System::Boolean ESPP_overrideMap3DColor_EnableOverrideDefaultValue; // 0x681
		::UnityEngine::Color ESPP_overrideMap3DColor_OverrideDefaultValue; // 0x684

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_EB4352D10DA7234E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH_METHOD_5_EB4352D10DA7234E_OFFSET))(this, a1);
		}

		::System::Void Method_5_9E93A3CD963FC72F(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH_METHOD_5_9E93A3CD963FC72F_OFFSET))(this, a1);
		}

		::System::Void Method_5_33AEB8F024CE4DC0(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH_METHOD_5_33AEB8F024CE4DC0_OFFSET))(this, a1);
		}

		::System::Void Method_5_33AEB8F024CE4DC0_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGLITCH_METHOD_5_33AEB8F024CE4DC0_1_OFFSET))(this, a1);
		}
	};
}
