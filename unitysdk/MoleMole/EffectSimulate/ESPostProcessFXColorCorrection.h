#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_FxScreenLightMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigEntityFXColorCorrections; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector3KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector4KeyframeCurve; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class FXColorCorrection; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x19D71310)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x19D71EE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_24A3E783DDC27C78_OFFSET UNITYSDK_OFFSET(0x19D72C30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_2A99139D13C42A50_1_OFFSET UNITYSDK_OFFSET(0x19D9D340)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_2A99139D13C42A50_OFFSET UNITYSDK_OFFSET(0x19D97B70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x19D788A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19D71ED0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_BEB6D3AE6B2F04A5_OFFSET UNITYSDK_OFFSET(0x19D90980)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_CAC1899EB3598A99_OFFSET UNITYSDK_OFFSET(0x19D7B6E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19DA2B10)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessFXColorCorrection_TypeDefinitionIndex = 72162;

	class ESPostProcessFXColorCorrection : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::FXColorCorrection*>
	{
	public:
		::MoleMole::Config::ConfigEntityFXColorCorrections* m_stAsset; // 0xB0
		::System::Single _DefaultWeatherConfigWeight; // 0xB8
		::System::Single _DefaultPostExposure; // 0xBC
		::System::Single _DefaultContrast; // 0xC0
		::System::Single _DefaultSaturation; // 0xC4
		::System::Single _DefaultGamma; // 0xC8
		::System::Boolean _DefaultLutInvert; // 0xCC
		::System::Boolean _DefaultLutToneColors; // 0xCD
		::UnityEngine::Color _DefaultLutToneA; // 0xD0
		::UnityEngine::Color _DefaultLutToneB; // 0xE0
		::System::Single _DefaultLutMiddlePoint; // 0xF0
		::System::Single _DefaultLutSoftness; // 0xF4
		::System::Single _DefaultDesaturate; // 0xF8
		::System::Boolean _DefaultInvert; // 0xFC
		::System::Boolean _DefaultToneColors; // 0xFD
		::UnityEngine::Color _DefaultToneA; // 0x100
		::UnityEngine::Color _DefaultToneB; // 0x110
		::System::Single _DefaultMiddlePoint; // 0x120
		::System::Single _DefaultSoftness; // 0x124
		::System::Boolean _DefaultFxFogMaskPassOn; // 0x128
		::System::Single _DefaultFxColorSaturation; // 0x12C
		::System::Boolean _VolDefault_enableCameraClip; // 0x130
		::System::Single _VolDefault_cameraClipDistance; // 0x134
		::UnityEngine::Vector3 _VolDefault_cameraClipExtension; // 0x138
		::System::Single _VolDefault_cameraClipAlpha; // 0x144
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* _VolDefault_weatherConfig; // 0x148
		::System::Single _VolDefault_weatherConfigWeight; // 0x150
		::System::Boolean _VolDefault_fxLightShaftMaskOn; // 0x154
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode _VolDefault_fxFxScreenLightMode; // 0x158
		::UnityEngine::Color _VolDefault_fxScreenLightColor; // 0x15C
		::System::Boolean _VolDefault_fxScreenLightMaskOn; // 0x16C
		::System::Single _VolDefault_sceneSpecialPPSEffectIntensity; // 0x170
		::System::Boolean _VolDefault_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x174
		::System::Single _VolDefault_sceneSpecialPPSGBufferSaturation; // 0x178
		::System::Boolean _VolDefault_sceneSpecialPPSUseSaturationLut; // 0x17C
		::UnityEngine::Texture* _VolDefault_sceneSpecialPPSSaturationLut; // 0x180
		::UnityEngine::Vector4 _VolDefault_sceneSpecialPPSSaturationRampGap; // 0x188
		::UnityEngine::Vector4 _VolDefault_sceneSpecialPPSSaturationRampValue; // 0x198
		::UnityEngine::Vector4 _VolDefault_sceneSpecialPPSSaturationRampGap2; // 0x1A8
		::UnityEngine::Vector4 _VolDefault_sceneSpecialPPSSaturationRampValue2; // 0x1B8
		::UnityEngine::Vector4 _VolDefault_sceneSpecialPPSSaturationRampGap3; // 0x1C8
		::UnityEngine::Vector4 _VolDefault_sceneSpecialPPSSaturationRampValue3; // 0x1D8
		::System::Boolean _VolDefault_applySaturationLutToUberPost; // 0x1E8
		::System::Single _VolDefault_sceneSpecialPPSIgnoreRidus; // 0x1EC
		::System::Single _VolDefault_sceneSpecialPPSRadiusAlphaPow; // 0x1F0
		::UnityEngine::Color _VolDefault_sceneSpecialPPSEmissionColor; // 0x1F4
		::System::Single _VolDefault_sceneSpecialSkySaturation; // 0x204
		::System::Boolean _VolDefault_ForceUseMsaa; // 0x208
		::System::Single _VolDefault_postExposure; // 0x20C
		::System::Single _VolDefault_contrast; // 0x210
		::System::Single _VolDefault_saturation; // 0x214
		::System::Single _VolDefault_gamma; // 0x218
		::System::Boolean _VolDefault_lutInvert; // 0x21C
		::System::Boolean _VolDefault_lutToneColors; // 0x21D
		::UnityEngine::Color _VolDefault_lutToneA; // 0x220
		::UnityEngine::Color _VolDefault_lutToneB; // 0x230
		::System::Single _VolDefault_lutMiddlePoint; // 0x240
		::System::Single _VolDefault_lutSoftness; // 0x244
		::System::Single _VolDefault_desaturate; // 0x248
		::System::Boolean _VolDefault_invert; // 0x24C
		::System::Boolean _VolDefault_toneColors; // 0x24D
		::UnityEngine::Color _VolDefault_toneA; // 0x250
		::UnityEngine::Color _VolDefault_toneB; // 0x260
		::System::Single _VolDefault_middlePoint; // 0x270
		::System::Single _VolDefault_softness; // 0x274
		::System::Boolean _VolDefault_fxFogMaskPassOn; // 0x278
		::System::Single _VolDefault_fxColorSaturation; // 0x27C
		::System::Boolean _VolDefault_justControlParticleLight; // 0x280
		::System::Single _VolDefault_localLightMultiplyIntensity; // 0x284
		::System::Single _VolDefault_localLightThreadHold; // 0x288
		::System::Single _VolDefault_indirectSpecularIntensity; // 0x28C
		::System::Boolean _VolDefault_enableLightShaft; // 0x290
		::System::Single _VolDefault_lightShaftThreshold; // 0x294
		::System::Single _VolDefault_lightShaftIntensity; // 0x298
		::System::Boolean _VolDefault_lightShaftColorClamp; // 0x29C
		::UnityEngine::Color _VolDefault_lightShaftColor; // 0x2A0
		::System::Single _VolDefault_lightShaftLength; // 0x2B0
		::System::Single _VolDefault_lightShaftFadeLength; // 0x2B4
		::System::Boolean _VolDefault_lightShaftBlur; // 0x2B8
		::System::Boolean _VolDefault_lightShaftUseCustomCenter; // 0x2B9
		::UnityEngine::Vector2 _VolDefault_lightShaftCustomCenter; // 0x2BC
		::System::Boolean _VolDefault_overrideWeatherGIConfig; // 0x2C4
		::UnityEngine::Color _VolDefault_skyColor; // 0x2C8
		::UnityEngine::Color _VolDefault_middleColor; // 0x2D8
		::UnityEngine::Color _VolDefault_groundColor; // 0x2E8
		::System::Boolean _VolDefault_useLutWithMask; // 0x2F8
		::UnityEngine::Texture* _VolDefault_lutWithMaskTex; // 0x300
		::System::Single _VolDefault_lutWithMaskContribution; // 0x308
		::System::Boolean _VolDefault_lightShaftIgnoreSceneDepthMask; // 0x30C
		::UnityEngine::Vector3 _VolDefault_cameraClipFxExtraExtension; // 0x310
		::System::Boolean _VolDefault_enableLocalLightControl; // 0x31C
		::System::Single _VolDefault_localLightIntensityMultiplier; // 0x320
		::System::Single _VolDefault_localFogIntensity; // 0x324
		::System::Boolean _VolPreVal_enableCameraClip_overrideState; // 0x328
		::System::Boolean _VolPreVal_enableCameraClip; // 0x329
		::System::Boolean _VolPreVal_cameraClipDistance_overrideState; // 0x32A
		::System::Single _VolPreVal_cameraClipDistance; // 0x32C
		::System::Boolean _VolPreVal_cameraClipExtension_overrideState; // 0x330
		::UnityEngine::Vector3 _VolPreVal_cameraClipExtension; // 0x334
		::System::Boolean _VolPreVal_cameraClipAlpha_overrideState; // 0x340
		::System::Single _VolPreVal_cameraClipAlpha; // 0x344
		::System::Boolean _VolPreVal_weatherConfig_overrideState; // 0x348
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* _VolPreVal_weatherConfig; // 0x350
		::System::Boolean _VolPreVal_weatherConfigWeight_overrideState; // 0x358
		::System::Single _VolPreVal_weatherConfigWeight; // 0x35C
		::System::Boolean _VolPreVal_fxLightShaftMaskOn_overrideState; // 0x360
		::System::Boolean _VolPreVal_fxLightShaftMaskOn; // 0x361
		::System::Boolean _VolPreVal_fxFxScreenLightMode_overrideState; // 0x362
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode _VolPreVal_fxFxScreenLightMode; // 0x364
		::System::Boolean _VolPreVal_fxScreenLightColor_overrideState; // 0x368
		::UnityEngine::Color _VolPreVal_fxScreenLightColor; // 0x36C
		::System::Boolean _VolPreVal_fxScreenLightMaskOn_overrideState; // 0x37C
		::System::Boolean _VolPreVal_fxScreenLightMaskOn; // 0x37D
		::System::Boolean _VolPreVal_sceneSpecialPPSEffectIntensity_overrideState; // 0x37E
		::System::Single _VolPreVal_sceneSpecialPPSEffectIntensity; // 0x380
		::System::Boolean _VolPreVal_sceneSpecialPPSOverrideWeatherGBufferSaturation_overrideState; // 0x384
		::System::Boolean _VolPreVal_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x385
		::System::Boolean _VolPreVal_sceneSpecialPPSGBufferSaturation_overrideState; // 0x386
		::System::Single _VolPreVal_sceneSpecialPPSGBufferSaturation; // 0x388
		::System::Boolean _VolPreVal_sceneSpecialPPSUseSaturationLut_overrideState; // 0x38C
		::System::Boolean _VolPreVal_sceneSpecialPPSUseSaturationLut; // 0x38D
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationLut_overrideState; // 0x38E
		::UnityEngine::Texture* _VolPreVal_sceneSpecialPPSSaturationLut; // 0x390
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampGap_overrideState; // 0x398
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampGap; // 0x39C
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampValue_overrideState; // 0x3AC
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampValue; // 0x3B0
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampGap2_overrideState; // 0x3C0
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampGap2; // 0x3C4
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampValue2_overrideState; // 0x3D4
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampValue2; // 0x3D8
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampGap3_overrideState; // 0x3E8
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampGap3; // 0x3EC
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampValue3_overrideState; // 0x3FC
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampValue3; // 0x400
		::System::Boolean _VolPreVal_applySaturationLutToUberPost_overrideState; // 0x410
		::System::Boolean _VolPreVal_applySaturationLutToUberPost; // 0x411
		::System::Boolean _VolPreVal_sceneSpecialPPSIgnoreRidus_overrideState; // 0x412
		::System::Single _VolPreVal_sceneSpecialPPSIgnoreRidus; // 0x414
		::System::Boolean _VolPreVal_sceneSpecialPPSRadiusAlphaPow_overrideState; // 0x418
		::System::Single _VolPreVal_sceneSpecialPPSRadiusAlphaPow; // 0x41C
		::System::Boolean _VolPreVal_sceneSpecialPPSEmissionColor_overrideState; // 0x420
		::UnityEngine::Color _VolPreVal_sceneSpecialPPSEmissionColor; // 0x424
		::System::Boolean _VolPreVal_sceneSpecialSkySaturation_overrideState; // 0x434
		::System::Single _VolPreVal_sceneSpecialSkySaturation; // 0x438
		::System::Boolean _VolPreVal_ForceUseMsaa_overrideState; // 0x43C
		::System::Boolean _VolPreVal_ForceUseMsaa; // 0x43D
		::System::Boolean _VolPreVal_postExposure_overrideState; // 0x43E
		::System::Single _VolPreVal_postExposure; // 0x440
		::System::Boolean _VolPreVal_contrast_overrideState; // 0x444
		::System::Single _VolPreVal_contrast; // 0x448
		::System::Boolean _VolPreVal_saturation_overrideState; // 0x44C
		::System::Single _VolPreVal_saturation; // 0x450
		::System::Boolean _VolPreVal_gamma_overrideState; // 0x454
		::System::Single _VolPreVal_gamma; // 0x458
		::System::Boolean _VolPreVal_lutInvert_overrideState; // 0x45C
		::System::Boolean _VolPreVal_lutInvert; // 0x45D
		::System::Boolean _VolPreVal_lutToneColors_overrideState; // 0x45E
		::System::Boolean _VolPreVal_lutToneColors; // 0x45F
		::System::Boolean _VolPreVal_lutToneA_overrideState; // 0x460
		::UnityEngine::Color _VolPreVal_lutToneA; // 0x464
		::System::Boolean _VolPreVal_lutToneB_overrideState; // 0x474
		::UnityEngine::Color _VolPreVal_lutToneB; // 0x478
		::System::Boolean _VolPreVal_lutMiddlePoint_overrideState; // 0x488
		::System::Single _VolPreVal_lutMiddlePoint; // 0x48C
		::System::Boolean _VolPreVal_lutSoftness_overrideState; // 0x490
		::System::Single _VolPreVal_lutSoftness; // 0x494
		::System::Boolean _VolPreVal_desaturate_overrideState; // 0x498
		::System::Single _VolPreVal_desaturate; // 0x49C
		::System::Boolean _VolPreVal_invert_overrideState; // 0x4A0
		::System::Boolean _VolPreVal_invert; // 0x4A1
		::System::Boolean _VolPreVal_toneColors_overrideState; // 0x4A2
		::System::Boolean _VolPreVal_toneColors; // 0x4A3
		::System::Boolean _VolPreVal_toneA_overrideState; // 0x4A4
		::UnityEngine::Color _VolPreVal_toneA; // 0x4A8
		::System::Boolean _VolPreVal_toneB_overrideState; // 0x4B8
		::UnityEngine::Color _VolPreVal_toneB; // 0x4BC
		::System::Boolean _VolPreVal_middlePoint_overrideState; // 0x4CC
		::System::Single _VolPreVal_middlePoint; // 0x4D0
		::System::Boolean _VolPreVal_softness_overrideState; // 0x4D4
		::System::Single _VolPreVal_softness; // 0x4D8
		::System::Boolean _VolPreVal_fxFogMaskPassOn_overrideState; // 0x4DC
		::System::Boolean _VolPreVal_fxFogMaskPassOn; // 0x4DD
		::System::Boolean _VolPreVal_fxColorSaturation_overrideState; // 0x4DE
		::System::Single _VolPreVal_fxColorSaturation; // 0x4E0
		::System::Boolean _VolPreVal_justControlParticleLight_overrideState; // 0x4E4
		::System::Boolean _VolPreVal_justControlParticleLight; // 0x4E5
		::System::Boolean _VolPreVal_localLightMultiplyIntensity_overrideState; // 0x4E6
		::System::Single _VolPreVal_localLightMultiplyIntensity; // 0x4E8
		::System::Boolean _VolPreVal_localLightThreadHold_overrideState; // 0x4EC
		::System::Single _VolPreVal_localLightThreadHold; // 0x4F0
		::System::Boolean _VolPreVal_indirectSpecularIntensity_overrideState; // 0x4F4
		::System::Single _VolPreVal_indirectSpecularIntensity; // 0x4F8
		::System::Boolean _VolPreVal_enableLightShaft_overrideState; // 0x4FC
		::System::Boolean _VolPreVal_enableLightShaft; // 0x4FD
		::System::Boolean _VolPreVal_lightShaftThreshold_overrideState; // 0x4FE
		::System::Single _VolPreVal_lightShaftThreshold; // 0x500
		::System::Boolean _VolPreVal_lightShaftIntensity_overrideState; // 0x504
		::System::Single _VolPreVal_lightShaftIntensity; // 0x508
		::System::Boolean _VolPreVal_lightShaftColorClamp_overrideState; // 0x50C
		::System::Boolean _VolPreVal_lightShaftColorClamp; // 0x50D
		::System::Boolean _VolPreVal_lightShaftColor_overrideState; // 0x50E
		::UnityEngine::Color _VolPreVal_lightShaftColor; // 0x510
		::System::Boolean _VolPreVal_lightShaftLength_overrideState; // 0x520
		::System::Single _VolPreVal_lightShaftLength; // 0x524
		::System::Boolean _VolPreVal_lightShaftFadeLength_overrideState; // 0x528
		::System::Single _VolPreVal_lightShaftFadeLength; // 0x52C
		::System::Boolean _VolPreVal_lightShaftBlur_overrideState; // 0x530
		::System::Boolean _VolPreVal_lightShaftBlur; // 0x531
		::System::Boolean _VolPreVal_lightShaftUseCustomCenter_overrideState; // 0x532
		::System::Boolean _VolPreVal_lightShaftUseCustomCenter; // 0x533
		::System::Boolean _VolPreVal_lightShaftCustomCenter_overrideState; // 0x534
		::UnityEngine::Vector2 _VolPreVal_lightShaftCustomCenter; // 0x538
		::System::Boolean _VolPreVal_overrideWeatherGIConfig_overrideState; // 0x540
		::System::Boolean _VolPreVal_overrideWeatherGIConfig; // 0x541
		::System::Boolean _VolPreVal_skyColor_overrideState; // 0x542
		::UnityEngine::Color _VolPreVal_skyColor; // 0x544
		::System::Boolean _VolPreVal_middleColor_overrideState; // 0x554
		::UnityEngine::Color _VolPreVal_middleColor; // 0x558
		::System::Boolean _VolPreVal_groundColor_overrideState; // 0x568
		::UnityEngine::Color _VolPreVal_groundColor; // 0x56C
		::System::Boolean _VolPreVal_useLutWithMask_overrideState; // 0x57C
		::System::Boolean _VolPreVal_useLutWithMask; // 0x57D
		::System::Boolean _VolPreVal_lutWithMaskTex_overrideState; // 0x57E
		::UnityEngine::Texture* _VolPreVal_lutWithMaskTex; // 0x580
		::System::Boolean _VolPreVal_lutWithMaskContribution_overrideState; // 0x588
		::System::Single _VolPreVal_lutWithMaskContribution; // 0x58C
		::System::Boolean _VolPreVal_lightShaftIgnoreSceneDepthMask_overrideState; // 0x590
		::System::Boolean _VolPreVal_lightShaftIgnoreSceneDepthMask; // 0x591
		::System::Boolean _VolPreVal_cameraClipFxExtraExtension_overrideState; // 0x592
		::UnityEngine::Vector3 _VolPreVal_cameraClipFxExtraExtension; // 0x594
		::System::Boolean _VolPreVal_enableLocalLightControl_overrideState; // 0x5A0
		::System::Boolean _VolPreVal_enableLocalLightControl; // 0x5A1
		::System::Boolean _VolPreVal_localLightIntensityMultiplier_overrideState; // 0x5A2
		::System::Single _VolPreVal_localLightIntensityMultiplier; // 0x5A4
		::System::Boolean _VolPreVal_localFogIntensity_overrideState; // 0x5A8
		::System::Single _VolPreVal_localFogIntensity; // 0x5AC
		::System::Single _TimelineCurveFirstVal_cameraClipDistance; // 0x5B0
		::System::Single _TimelineCurveLastVal_cameraClipDistance; // 0x5B4
		::UnityEngine::Vector3 _TimelineCurveFirstVal_cameraClipExtension; // 0x5B8
		::UnityEngine::Vector3 _TimelineCurveLastVal_cameraClipExtension; // 0x5C4
		::System::Single _TimelineCurveFirstVal_cameraClipAlpha; // 0x5D0
		::System::Single _TimelineCurveLastVal_cameraClipAlpha; // 0x5D4
		::System::Single _TimelineCurveFirstVal_weatherConfigWeight; // 0x5D8
		::System::Single _TimelineCurveLastVal_weatherConfigWeight; // 0x5DC
		::System::Boolean _TimelineCurveFirstVal_fxLightShaftMaskOn; // 0x5E0
		::System::Boolean _TimelineCurveLastVal_fxLightShaftMaskOn; // 0x5E1
		::UnityEngine::Color _TimelineCurveFirstVal_fxScreenLightColor; // 0x5E4
		::UnityEngine::Color _TimelineCurveLastVal_fxScreenLightColor; // 0x5F4
		::System::Boolean _TimelineCurveFirstVal_fxScreenLightMaskOn; // 0x604
		::System::Boolean _TimelineCurveLastVal_fxScreenLightMaskOn; // 0x605
		::System::Single _TimelineCurveFirstVal_sceneSpecialPPSEffectIntensity; // 0x608
		::System::Single _TimelineCurveLastVal_sceneSpecialPPSEffectIntensity; // 0x60C
		::System::Boolean _TimelineCurveFirstVal_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x610
		::System::Boolean _TimelineCurveLastVal_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x611
		::System::Single _TimelineCurveFirstVal_sceneSpecialPPSGBufferSaturation; // 0x614
		::System::Single _TimelineCurveLastVal_sceneSpecialPPSGBufferSaturation; // 0x618
		::System::Boolean _TimelineCurveFirstVal_sceneSpecialPPSUseSaturationLut; // 0x61C
		::System::Boolean _TimelineCurveLastVal_sceneSpecialPPSUseSaturationLut; // 0x61D
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampGap; // 0x620
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampGap; // 0x630
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampValue; // 0x640
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampValue; // 0x650
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampGap2; // 0x660
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampGap2; // 0x670
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampValue2; // 0x680
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampValue2; // 0x690
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampGap3; // 0x6A0
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampGap3; // 0x6B0
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampValue3; // 0x6C0
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampValue3; // 0x6D0
		::System::Boolean _TimelineCurveFirstVal_applySaturationLutToUberPost; // 0x6E0
		::System::Boolean _TimelineCurveLastVal_applySaturationLutToUberPost; // 0x6E1
		::UnityEngine::Color _TimelineCurveFirstVal_sceneSpecialPPSEmissionColor; // 0x6E4
		::UnityEngine::Color _TimelineCurveLastVal_sceneSpecialPPSEmissionColor; // 0x6F4
		::System::Boolean _TimelineCurveFirstVal_ForceUseMsaa; // 0x704
		::System::Boolean _TimelineCurveLastVal_ForceUseMsaa; // 0x705
		::System::Single _TimelineCurveFirstVal_postExposure; // 0x708
		::System::Single _TimelineCurveLastVal_postExposure; // 0x70C
		::System::Single _TimelineCurveFirstVal_contrast; // 0x710
		::System::Single _TimelineCurveLastVal_contrast; // 0x714
		::System::Single _TimelineCurveFirstVal_saturation; // 0x718
		::System::Single _TimelineCurveLastVal_saturation; // 0x71C
		::System::Single _TimelineCurveFirstVal_gamma; // 0x720
		::System::Single _TimelineCurveLastVal_gamma; // 0x724
		::System::Boolean _TimelineCurveFirstVal_lutInvert; // 0x728
		::System::Boolean _TimelineCurveLastVal_lutInvert; // 0x729
		::System::Boolean _TimelineCurveFirstVal_lutToneColors; // 0x72A
		::System::Boolean _TimelineCurveLastVal_lutToneColors; // 0x72B
		::System::Single _TimelineCurveFirstVal_lutMiddlePoint; // 0x72C
		::System::Single _TimelineCurveLastVal_lutMiddlePoint; // 0x730
		::System::Single _TimelineCurveFirstVal_lutSoftness; // 0x734
		::System::Single _TimelineCurveLastVal_lutSoftness; // 0x738
		::System::Single _TimelineCurveFirstVal_desaturate; // 0x73C
		::System::Single _TimelineCurveLastVal_desaturate; // 0x740
		::System::Boolean _TimelineCurveFirstVal_invert; // 0x744
		::System::Boolean _TimelineCurveLastVal_invert; // 0x745
		::System::Boolean _TimelineCurveFirstVal_toneColors; // 0x746
		::System::Boolean _TimelineCurveLastVal_toneColors; // 0x747
		::System::Single _TimelineCurveFirstVal_middlePoint; // 0x748
		::System::Single _TimelineCurveLastVal_middlePoint; // 0x74C
		::System::Single _TimelineCurveFirstVal_softness; // 0x750
		::System::Single _TimelineCurveLastVal_softness; // 0x754
		::System::Boolean _TimelineCurveFirstVal_fxFogMaskPassOn; // 0x758
		::System::Boolean _TimelineCurveLastVal_fxFogMaskPassOn; // 0x759
		::System::Single _TimelineCurveFirstVal_fxColorSaturation; // 0x75C
		::System::Single _TimelineCurveLastVal_fxColorSaturation; // 0x760
		::System::Boolean _TimelineCurveFirstVal_justControlParticleLight; // 0x764
		::System::Boolean _TimelineCurveLastVal_justControlParticleLight; // 0x765
		::System::Single _TimelineCurveFirstVal_localLightMultiplyIntensity; // 0x768
		::System::Single _TimelineCurveLastVal_localLightMultiplyIntensity; // 0x76C
		::System::Single _TimelineCurveFirstVal_localLightThreadHold; // 0x770
		::System::Single _TimelineCurveLastVal_localLightThreadHold; // 0x774
		::System::Single _TimelineCurveFirstVal_indirectSpecularIntensity; // 0x778
		::System::Single _TimelineCurveLastVal_indirectSpecularIntensity; // 0x77C
		::System::Boolean _TimelineCurveFirstVal_enableLightShaft; // 0x780
		::System::Boolean _TimelineCurveLastVal_enableLightShaft; // 0x781
		::System::Single _TimelineCurveFirstVal_lightShaftThreshold; // 0x784
		::System::Single _TimelineCurveLastVal_lightShaftThreshold; // 0x788
		::System::Single _TimelineCurveFirstVal_lightShaftIntensity; // 0x78C
		::System::Single _TimelineCurveLastVal_lightShaftIntensity; // 0x790
		::System::Boolean _TimelineCurveFirstVal_lightShaftColorClamp; // 0x794
		::System::Boolean _TimelineCurveLastVal_lightShaftColorClamp; // 0x795
		::UnityEngine::Color _TimelineCurveFirstVal_lightShaftColor; // 0x798
		::UnityEngine::Color _TimelineCurveLastVal_lightShaftColor; // 0x7A8
		::System::Single _TimelineCurveFirstVal_lightShaftLength; // 0x7B8
		::System::Single _TimelineCurveLastVal_lightShaftLength; // 0x7BC
		::System::Single _TimelineCurveFirstVal_lightShaftFadeLength; // 0x7C0
		::System::Single _TimelineCurveLastVal_lightShaftFadeLength; // 0x7C4
		::System::Boolean _TimelineCurveFirstVal_lightShaftBlur; // 0x7C8
		::System::Boolean _TimelineCurveLastVal_lightShaftBlur; // 0x7C9
		::System::Boolean _TimelineCurveFirstVal_lightShaftUseCustomCenter; // 0x7CA
		::System::Boolean _TimelineCurveLastVal_lightShaftUseCustomCenter; // 0x7CB
		::UnityEngine::Vector2 _TimelineCurveFirstVal_lightShaftCustomCenter; // 0x7CC
		::UnityEngine::Vector2 _TimelineCurveLastVal_lightShaftCustomCenter; // 0x7D4
		::System::Boolean _TimelineCurveFirstVal_overrideWeatherGIConfig; // 0x7DC
		::System::Boolean _TimelineCurveLastVal_overrideWeatherGIConfig; // 0x7DD
		::UnityEngine::Color _TimelineCurveFirstVal_skyColor; // 0x7E0
		::UnityEngine::Color _TimelineCurveLastVal_skyColor; // 0x7F0
		::UnityEngine::Color _TimelineCurveFirstVal_middleColor; // 0x800
		::UnityEngine::Color _TimelineCurveLastVal_middleColor; // 0x810
		::UnityEngine::Color _TimelineCurveFirstVal_groundColor; // 0x820
		::UnityEngine::Color _TimelineCurveLastVal_groundColor; // 0x830
		::System::Boolean _TimelineCurveFirstVal_useLutWithMask; // 0x840
		::System::Boolean _TimelineCurveLastVal_useLutWithMask; // 0x841
		::System::Single _TimelineCurveFirstVal_lutWithMaskContribution; // 0x844
		::System::Single _TimelineCurveLastVal_lutWithMaskContribution; // 0x848
		::System::Boolean _TimelineCurveFirstVal_lightShaftIgnoreSceneDepthMask; // 0x84C
		::System::Boolean _TimelineCurveLastVal_lightShaftIgnoreSceneDepthMask; // 0x84D
		::UnityEngine::Vector3 _TimelineCurveFirstVal_cameraClipFxExtraExtension; // 0x850
		::UnityEngine::Vector3 _TimelineCurveLastVal_cameraClipFxExtraExtension; // 0x85C
		::System::Boolean _TimelineCurveFirstVal_enableLocalLightControl; // 0x868
		::System::Boolean _TimelineCurveLastVal_enableLocalLightControl; // 0x869
		::System::Single _TimelineCurveFirstVal_localLightIntensityMultiplier; // 0x86C
		::System::Single _TimelineCurveLastVal_localLightIntensityMultiplier; // 0x870
		::System::Single _TimelineCurveFirstVal_localFogIntensity; // 0x874
		::System::Single _TimelineCurveLastVal_localFogIntensity; // 0x878
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableCameraClip_FieldHandleType; // 0x87C
		::System::Boolean ESPP_enableCameraClip; // 0x880
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cameraClipDistance_FieldHandleType; // 0x884
		::System::Boolean ESPP_cameraClipDistance_UseIt; // 0x888
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cameraClipDistance; // 0x890
		::System::Boolean ESPP_cameraClipDistance_EnableFade; // 0x898
		::System::Boolean ESPP_cameraClipDistance_EnableOverrideDefaultValue; // 0x899
		::System::Single ESPP_cameraClipDistance_OverrideDefaultValue; // 0x89C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cameraClipExtension_FieldHandleType; // 0x8A0
		::System::Boolean ESPP_cameraClipExtension_UseIt; // 0x8A4
		::MoleMole::EffectSimulate::Vector3KeyframeCurve* ESPP_cameraClipExtension; // 0x8A8
		::System::Boolean ESPP_cameraClipExtension_EnableFade; // 0x8B0
		::System::Boolean ESPP_cameraClipExtension_EnableOverrideDefaultValue; // 0x8B1
		::UnityEngine::Vector3 ESPP_cameraClipExtension_OverrideDefaultValue; // 0x8B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cameraClipAlpha_FieldHandleType; // 0x8C0
		::System::Boolean ESPP_cameraClipAlpha_UseIt; // 0x8C4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cameraClipAlpha; // 0x8C8
		::System::Boolean ESPP_cameraClipAlpha_EnableFade; // 0x8D0
		::System::Boolean ESPP_cameraClipAlpha_EnableOverrideDefaultValue; // 0x8D1
		::System::Single ESPP_cameraClipAlpha_OverrideDefaultValue; // 0x8D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_weatherConfig_FieldHandleType; // 0x8D8
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* ESPP_weatherConfig; // 0x8E0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_weatherConfigWeight_FieldHandleType; // 0x8E8
		::System::Boolean ESPP_weatherConfigWeight_UseIt; // 0x8EC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_weatherConfigWeight; // 0x8F0
		::System::Boolean ESPP_weatherConfigWeight_EnableFade; // 0x8F8
		::System::Boolean ESPP_weatherConfigWeight_EnableOverrideDefaultValue; // 0x8F9
		::System::Single ESPP_weatherConfigWeight_OverrideDefaultValue; // 0x8FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxLightShaftMaskOn_FieldHandleType; // 0x900
		::System::Boolean ESPP_fxLightShaftMaskOn_UseIt; // 0x904
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxLightShaftMaskOn; // 0x908
		::System::Boolean ESPP_fxLightShaftMaskOn_EnableFade; // 0x910
		::System::Boolean ESPP_fxLightShaftMaskOn_EnableOverrideDefaultValue; // 0x911
		::System::Boolean ESPP_fxLightShaftMaskOn_OverrideDefaultValue; // 0x912
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFxScreenLightMode_FieldHandleType; // 0x914
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode ESPP_fxFxScreenLightMode; // 0x918
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxScreenLightColor_FieldHandleType; // 0x91C
		::System::Boolean ESPP_fxScreenLightColor_UseIt; // 0x920
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_fxScreenLightColor; // 0x928
		::System::Boolean ESPP_fxScreenLightColor_EnableFade; // 0x930
		::System::Boolean ESPP_fxScreenLightColor_EnableOverrideDefaultValue; // 0x931
		::UnityEngine::Color ESPP_fxScreenLightColor_OverrideDefaultValue; // 0x934
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxScreenLightMaskOn_FieldHandleType; // 0x944
		::System::Boolean ESPP_fxScreenLightMaskOn_UseIt; // 0x948
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxScreenLightMaskOn; // 0x950
		::System::Boolean ESPP_fxScreenLightMaskOn_EnableFade; // 0x958
		::System::Boolean ESPP_fxScreenLightMaskOn_EnableOverrideDefaultValue; // 0x959
		::System::Boolean ESPP_fxScreenLightMaskOn_OverrideDefaultValue; // 0x95A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSEffectIntensity_FieldHandleType; // 0x95C
		::System::Boolean ESPP_sceneSpecialPPSEffectIntensity_UseIt; // 0x960
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sceneSpecialPPSEffectIntensity; // 0x968
		::System::Boolean ESPP_sceneSpecialPPSEffectIntensity_EnableFade; // 0x970
		::System::Boolean ESPP_sceneSpecialPPSEffectIntensity_EnableOverrideDefaultValue; // 0x971
		::System::Single ESPP_sceneSpecialPPSEffectIntensity_OverrideDefaultValue; // 0x974
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_FieldHandleType; // 0x978
		::System::Boolean ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_UseIt; // 0x97C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x980
		::System::Boolean ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_EnableFade; // 0x988
		::System::Boolean ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_EnableOverrideDefaultValue; // 0x989
		::System::Boolean ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_OverrideDefaultValue; // 0x98A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSGBufferSaturation_FieldHandleType; // 0x98C
		::System::Boolean ESPP_sceneSpecialPPSGBufferSaturation_UseIt; // 0x990
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sceneSpecialPPSGBufferSaturation; // 0x998
		::System::Boolean ESPP_sceneSpecialPPSGBufferSaturation_EnableFade; // 0x9A0
		::System::Boolean ESPP_sceneSpecialPPSGBufferSaturation_EnableOverrideDefaultValue; // 0x9A1
		::System::Single ESPP_sceneSpecialPPSGBufferSaturation_OverrideDefaultValue; // 0x9A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSUseSaturationLut_FieldHandleType; // 0x9A8
		::System::Boolean ESPP_sceneSpecialPPSUseSaturationLut_UseIt; // 0x9AC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_sceneSpecialPPSUseSaturationLut; // 0x9B0
		::System::Boolean ESPP_sceneSpecialPPSUseSaturationLut_EnableFade; // 0x9B8
		::System::Boolean ESPP_sceneSpecialPPSUseSaturationLut_EnableOverrideDefaultValue; // 0x9B9
		::System::Boolean ESPP_sceneSpecialPPSUseSaturationLut_OverrideDefaultValue; // 0x9BA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationLut_FieldHandleType; // 0x9BC
		::UnityEngine::Texture* ESPP_sceneSpecialPPSSaturationLut; // 0x9C0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampGap_FieldHandleType; // 0x9C8
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap_UseIt; // 0x9CC
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampGap; // 0x9D0
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap_EnableFade; // 0x9D8
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap_EnableOverrideDefaultValue; // 0x9D9
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampGap_OverrideDefaultValue; // 0x9DC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampValue_FieldHandleType; // 0x9EC
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue_UseIt; // 0x9F0
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampValue; // 0x9F8
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue_EnableFade; // 0xA00
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue_EnableOverrideDefaultValue; // 0xA01
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampValue_OverrideDefaultValue; // 0xA04
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampGap2_FieldHandleType; // 0xA14
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap2_UseIt; // 0xA18
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampGap2; // 0xA20
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap2_EnableFade; // 0xA28
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap2_EnableOverrideDefaultValue; // 0xA29
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampGap2_OverrideDefaultValue; // 0xA2C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampValue2_FieldHandleType; // 0xA3C
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue2_UseIt; // 0xA40
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampValue2; // 0xA48
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue2_EnableFade; // 0xA50
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue2_EnableOverrideDefaultValue; // 0xA51
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampValue2_OverrideDefaultValue; // 0xA54
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampGap3_FieldHandleType; // 0xA64
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap3_UseIt; // 0xA68
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampGap3; // 0xA70
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap3_EnableFade; // 0xA78
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap3_EnableOverrideDefaultValue; // 0xA79
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampGap3_OverrideDefaultValue; // 0xA7C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampValue3_FieldHandleType; // 0xA8C
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue3_UseIt; // 0xA90
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampValue3; // 0xA98
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue3_EnableFade; // 0xAA0
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue3_EnableOverrideDefaultValue; // 0xAA1
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampValue3_OverrideDefaultValue; // 0xAA4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_applySaturationLutToUberPost_FieldHandleType; // 0xAB4
		::System::Boolean ESPP_applySaturationLutToUberPost_UseIt; // 0xAB8
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_applySaturationLutToUberPost; // 0xAC0
		::System::Boolean ESPP_applySaturationLutToUberPost_EnableFade; // 0xAC8
		::System::Boolean ESPP_applySaturationLutToUberPost_EnableOverrideDefaultValue; // 0xAC9
		::System::Boolean ESPP_applySaturationLutToUberPost_OverrideDefaultValue; // 0xACA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSIgnoreRidus_FieldHandleType; // 0xACC
		::System::Single ESPP_sceneSpecialPPSIgnoreRidus; // 0xAD0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSRadiusAlphaPow_FieldHandleType; // 0xAD4
		::System::Single ESPP_sceneSpecialPPSRadiusAlphaPow; // 0xAD8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSEmissionColor_FieldHandleType; // 0xADC
		::System::Boolean ESPP_sceneSpecialPPSEmissionColor_UseIt; // 0xAE0
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_sceneSpecialPPSEmissionColor; // 0xAE8
		::System::Boolean ESPP_sceneSpecialPPSEmissionColor_EnableFade; // 0xAF0
		::System::Boolean ESPP_sceneSpecialPPSEmissionColor_EnableOverrideDefaultValue; // 0xAF1
		::UnityEngine::Color ESPP_sceneSpecialPPSEmissionColor_OverrideDefaultValue; // 0xAF4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialSkySaturation_FieldHandleType; // 0xB04
		::System::Single ESPP_sceneSpecialSkySaturation; // 0xB08
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ForceUseMsaa_FieldHandleType; // 0xB0C
		::System::Boolean ESPP_ForceUseMsaa_UseIt; // 0xB10
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_ForceUseMsaa; // 0xB18
		::System::Boolean ESPP_ForceUseMsaa_EnableFade; // 0xB20
		::System::Boolean ESPP_ForceUseMsaa_EnableOverrideDefaultValue; // 0xB21
		::System::Boolean ESPP_ForceUseMsaa_OverrideDefaultValue; // 0xB22
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_postExposure_FieldHandleType; // 0xB24
		::System::Boolean ESPP_postExposure_UseIt; // 0xB28
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_postExposure; // 0xB30
		::System::Boolean ESPP_postExposure_EnableFade; // 0xB38
		::System::Boolean ESPP_postExposure_EnableOverrideDefaultValue; // 0xB39
		::System::Single ESPP_postExposure_OverrideDefaultValue; // 0xB3C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_contrast_FieldHandleType; // 0xB40
		::System::Boolean ESPP_contrast_UseIt; // 0xB44
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_contrast; // 0xB48
		::System::Boolean ESPP_contrast_EnableFade; // 0xB50
		::System::Boolean ESPP_contrast_EnableOverrideDefaultValue; // 0xB51
		::System::Single ESPP_contrast_OverrideDefaultValue; // 0xB54
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_saturation_FieldHandleType; // 0xB58
		::System::Boolean ESPP_saturation_UseIt; // 0xB5C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_saturation; // 0xB60
		::System::Boolean ESPP_saturation_EnableFade; // 0xB68
		::System::Boolean ESPP_saturation_EnableOverrideDefaultValue; // 0xB69
		::System::Single ESPP_saturation_OverrideDefaultValue; // 0xB6C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gamma_FieldHandleType; // 0xB70
		::System::Boolean ESPP_gamma_UseIt; // 0xB74
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_gamma; // 0xB78
		::System::Boolean ESPP_gamma_EnableFade; // 0xB80
		::System::Boolean ESPP_gamma_EnableOverrideDefaultValue; // 0xB81
		::System::Single ESPP_gamma_OverrideDefaultValue; // 0xB84
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutInvert_FieldHandleType; // 0xB88
		::System::Boolean ESPP_lutInvert_UseIt; // 0xB8C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lutInvert; // 0xB90
		::System::Boolean ESPP_lutInvert_EnableFade; // 0xB98
		::System::Boolean ESPP_lutInvert_EnableOverrideDefaultValue; // 0xB99
		::System::Boolean ESPP_lutInvert_OverrideDefaultValue; // 0xB9A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutToneColors_FieldHandleType; // 0xB9C
		::System::Boolean ESPP_lutToneColors_UseIt; // 0xBA0
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lutToneColors; // 0xBA8
		::System::Boolean ESPP_lutToneColors_EnableFade; // 0xBB0
		::System::Boolean ESPP_lutToneColors_EnableOverrideDefaultValue; // 0xBB1
		::System::Boolean ESPP_lutToneColors_OverrideDefaultValue; // 0xBB2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutToneA_FieldHandleType; // 0xBB4
		::UnityEngine::Color ESPP_lutToneA; // 0xBB8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutToneB_FieldHandleType; // 0xBC8
		::UnityEngine::Color ESPP_lutToneB; // 0xBCC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutMiddlePoint_FieldHandleType; // 0xBDC
		::System::Boolean ESPP_lutMiddlePoint_UseIt; // 0xBE0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lutMiddlePoint; // 0xBE8
		::System::Boolean ESPP_lutMiddlePoint_EnableFade; // 0xBF0
		::System::Boolean ESPP_lutMiddlePoint_EnableOverrideDefaultValue; // 0xBF1
		::System::Single ESPP_lutMiddlePoint_OverrideDefaultValue; // 0xBF4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutSoftness_FieldHandleType; // 0xBF8
		::System::Boolean ESPP_lutSoftness_UseIt; // 0xBFC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lutSoftness; // 0xC00
		::System::Boolean ESPP_lutSoftness_EnableFade; // 0xC08
		::System::Boolean ESPP_lutSoftness_EnableOverrideDefaultValue; // 0xC09
		::System::Single ESPP_lutSoftness_OverrideDefaultValue; // 0xC0C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_desaturate_FieldHandleType; // 0xC10
		::System::Boolean ESPP_desaturate_UseIt; // 0xC14
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_desaturate; // 0xC18
		::System::Boolean ESPP_desaturate_EnableFade; // 0xC20
		::System::Boolean ESPP_desaturate_EnableOverrideDefaultValue; // 0xC21
		::System::Single ESPP_desaturate_OverrideDefaultValue; // 0xC24
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_invert_FieldHandleType; // 0xC28
		::System::Boolean ESPP_invert_UseIt; // 0xC2C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_invert; // 0xC30
		::System::Boolean ESPP_invert_EnableFade; // 0xC38
		::System::Boolean ESPP_invert_EnableOverrideDefaultValue; // 0xC39
		::System::Boolean ESPP_invert_OverrideDefaultValue; // 0xC3A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toneColors_FieldHandleType; // 0xC3C
		::System::Boolean ESPP_toneColors_UseIt; // 0xC40
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_toneColors; // 0xC48
		::System::Boolean ESPP_toneColors_EnableFade; // 0xC50
		::System::Boolean ESPP_toneColors_EnableOverrideDefaultValue; // 0xC51
		::System::Boolean ESPP_toneColors_OverrideDefaultValue; // 0xC52
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toneA_FieldHandleType; // 0xC54
		::UnityEngine::Color ESPP_toneA; // 0xC58
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toneB_FieldHandleType; // 0xC68
		::UnityEngine::Color ESPP_toneB; // 0xC6C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_middlePoint_FieldHandleType; // 0xC7C
		::System::Boolean ESPP_middlePoint_UseIt; // 0xC80
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_middlePoint; // 0xC88
		::System::Boolean ESPP_middlePoint_EnableFade; // 0xC90
		::System::Boolean ESPP_middlePoint_EnableOverrideDefaultValue; // 0xC91
		::System::Single ESPP_middlePoint_OverrideDefaultValue; // 0xC94
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_softness_FieldHandleType; // 0xC98
		::System::Boolean ESPP_softness_UseIt; // 0xC9C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_softness; // 0xCA0
		::System::Boolean ESPP_softness_EnableFade; // 0xCA8
		::System::Boolean ESPP_softness_EnableOverrideDefaultValue; // 0xCA9
		::System::Single ESPP_softness_OverrideDefaultValue; // 0xCAC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogMaskPassOn_FieldHandleType; // 0xCB0
		::System::Boolean ESPP_fxFogMaskPassOn_UseIt; // 0xCB4
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxFogMaskPassOn; // 0xCB8
		::System::Boolean ESPP_fxFogMaskPassOn_EnableFade; // 0xCC0
		::System::Boolean ESPP_fxFogMaskPassOn_EnableOverrideDefaultValue; // 0xCC1
		::System::Boolean ESPP_fxFogMaskPassOn_OverrideDefaultValue; // 0xCC2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxColorSaturation_FieldHandleType; // 0xCC4
		::System::Boolean ESPP_fxColorSaturation_UseIt; // 0xCC8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxColorSaturation; // 0xCD0
		::System::Boolean ESPP_fxColorSaturation_EnableFade; // 0xCD8
		::System::Boolean ESPP_fxColorSaturation_EnableOverrideDefaultValue; // 0xCD9
		::System::Single ESPP_fxColorSaturation_OverrideDefaultValue; // 0xCDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_justControlParticleLight_FieldHandleType; // 0xCE0
		::System::Boolean ESPP_justControlParticleLight_UseIt; // 0xCE4
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_justControlParticleLight; // 0xCE8
		::System::Boolean ESPP_justControlParticleLight_EnableFade; // 0xCF0
		::System::Boolean ESPP_justControlParticleLight_EnableOverrideDefaultValue; // 0xCF1
		::System::Boolean ESPP_justControlParticleLight_OverrideDefaultValue; // 0xCF2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_localLightMultiplyIntensity_FieldHandleType; // 0xCF4
		::System::Boolean ESPP_localLightMultiplyIntensity_UseIt; // 0xCF8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_localLightMultiplyIntensity; // 0xD00
		::System::Boolean ESPP_localLightMultiplyIntensity_EnableFade; // 0xD08
		::System::Boolean ESPP_localLightMultiplyIntensity_EnableOverrideDefaultValue; // 0xD09
		::System::Single ESPP_localLightMultiplyIntensity_OverrideDefaultValue; // 0xD0C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_localLightThreadHold_FieldHandleType; // 0xD10
		::System::Boolean ESPP_localLightThreadHold_UseIt; // 0xD14
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_localLightThreadHold; // 0xD18
		::System::Boolean ESPP_localLightThreadHold_EnableFade; // 0xD20
		::System::Boolean ESPP_localLightThreadHold_EnableOverrideDefaultValue; // 0xD21
		::System::Single ESPP_localLightThreadHold_OverrideDefaultValue; // 0xD24
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_indirectSpecularIntensity_FieldHandleType; // 0xD28
		::System::Boolean ESPP_indirectSpecularIntensity_UseIt; // 0xD2C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_indirectSpecularIntensity; // 0xD30
		::System::Boolean ESPP_indirectSpecularIntensity_EnableFade; // 0xD38
		::System::Boolean ESPP_indirectSpecularIntensity_EnableOverrideDefaultValue; // 0xD39
		::System::Single ESPP_indirectSpecularIntensity_OverrideDefaultValue; // 0xD3C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableLightShaft_FieldHandleType; // 0xD40
		::System::Boolean ESPP_enableLightShaft_UseIt; // 0xD44
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enableLightShaft; // 0xD48
		::System::Boolean ESPP_enableLightShaft_EnableFade; // 0xD50
		::System::Boolean ESPP_enableLightShaft_EnableOverrideDefaultValue; // 0xD51
		::System::Boolean ESPP_enableLightShaft_OverrideDefaultValue; // 0xD52
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftThreshold_FieldHandleType; // 0xD54
		::System::Boolean ESPP_lightShaftThreshold_UseIt; // 0xD58
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftThreshold; // 0xD60
		::System::Boolean ESPP_lightShaftThreshold_EnableFade; // 0xD68
		::System::Boolean ESPP_lightShaftThreshold_EnableOverrideDefaultValue; // 0xD69
		::System::Single ESPP_lightShaftThreshold_OverrideDefaultValue; // 0xD6C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftIntensity_FieldHandleType; // 0xD70
		::System::Boolean ESPP_lightShaftIntensity_UseIt; // 0xD74
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftIntensity; // 0xD78
		::System::Boolean ESPP_lightShaftIntensity_EnableFade; // 0xD80
		::System::Boolean ESPP_lightShaftIntensity_EnableOverrideDefaultValue; // 0xD81
		::System::Single ESPP_lightShaftIntensity_OverrideDefaultValue; // 0xD84
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftColorClamp_FieldHandleType; // 0xD88
		::System::Boolean ESPP_lightShaftColorClamp_UseIt; // 0xD8C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lightShaftColorClamp; // 0xD90
		::System::Boolean ESPP_lightShaftColorClamp_EnableFade; // 0xD98
		::System::Boolean ESPP_lightShaftColorClamp_EnableOverrideDefaultValue; // 0xD99
		::System::Boolean ESPP_lightShaftColorClamp_OverrideDefaultValue; // 0xD9A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftColor_FieldHandleType; // 0xD9C
		::System::Boolean ESPP_lightShaftColor_UseIt; // 0xDA0
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_lightShaftColor; // 0xDA8
		::System::Boolean ESPP_lightShaftColor_EnableFade; // 0xDB0
		::System::Boolean ESPP_lightShaftColor_EnableOverrideDefaultValue; // 0xDB1
		::UnityEngine::Color ESPP_lightShaftColor_OverrideDefaultValue; // 0xDB4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftLength_FieldHandleType; // 0xDC4
		::System::Boolean ESPP_lightShaftLength_UseIt; // 0xDC8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftLength; // 0xDD0
		::System::Boolean ESPP_lightShaftLength_EnableFade; // 0xDD8
		::System::Boolean ESPP_lightShaftLength_EnableOverrideDefaultValue; // 0xDD9
		::System::Single ESPP_lightShaftLength_OverrideDefaultValue; // 0xDDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftFadeLength_FieldHandleType; // 0xDE0
		::System::Boolean ESPP_lightShaftFadeLength_UseIt; // 0xDE4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftFadeLength; // 0xDE8
		::System::Boolean ESPP_lightShaftFadeLength_EnableFade; // 0xDF0
		::System::Boolean ESPP_lightShaftFadeLength_EnableOverrideDefaultValue; // 0xDF1
		::System::Single ESPP_lightShaftFadeLength_OverrideDefaultValue; // 0xDF4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftBlur_FieldHandleType; // 0xDF8
		::System::Boolean ESPP_lightShaftBlur_UseIt; // 0xDFC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lightShaftBlur; // 0xE00
		::System::Boolean ESPP_lightShaftBlur_EnableFade; // 0xE08
		::System::Boolean ESPP_lightShaftBlur_EnableOverrideDefaultValue; // 0xE09
		::System::Boolean ESPP_lightShaftBlur_OverrideDefaultValue; // 0xE0A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftUseCustomCenter_FieldHandleType; // 0xE0C
		::System::Boolean ESPP_lightShaftUseCustomCenter_UseIt; // 0xE10
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lightShaftUseCustomCenter; // 0xE18
		::System::Boolean ESPP_lightShaftUseCustomCenter_EnableFade; // 0xE20
		::System::Boolean ESPP_lightShaftUseCustomCenter_EnableOverrideDefaultValue; // 0xE21
		::System::Boolean ESPP_lightShaftUseCustomCenter_OverrideDefaultValue; // 0xE22
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftCustomCenter_FieldHandleType; // 0xE24
		::System::Boolean ESPP_lightShaftCustomCenter_UseIt; // 0xE28
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_lightShaftCustomCenter; // 0xE30
		::System::Boolean ESPP_lightShaftCustomCenter_EnableFade; // 0xE38
		::System::Boolean ESPP_lightShaftCustomCenter_EnableOverrideDefaultValue; // 0xE39
		::UnityEngine::Vector2 ESPP_lightShaftCustomCenter_OverrideDefaultValue; // 0xE3C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_overrideWeatherGIConfig_FieldHandleType; // 0xE44
		::System::Boolean ESPP_overrideWeatherGIConfig_UseIt; // 0xE48
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_overrideWeatherGIConfig; // 0xE50
		::System::Boolean ESPP_overrideWeatherGIConfig_EnableFade; // 0xE58
		::System::Boolean ESPP_overrideWeatherGIConfig_EnableOverrideDefaultValue; // 0xE59
		::System::Boolean ESPP_overrideWeatherGIConfig_OverrideDefaultValue; // 0xE5A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyColor_FieldHandleType; // 0xE5C
		::System::Boolean ESPP_skyColor_UseIt; // 0xE60
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_skyColor; // 0xE68
		::System::Boolean ESPP_skyColor_EnableFade; // 0xE70
		::System::Boolean ESPP_skyColor_EnableOverrideDefaultValue; // 0xE71
		::UnityEngine::Color ESPP_skyColor_OverrideDefaultValue; // 0xE74
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_middleColor_FieldHandleType; // 0xE84
		::System::Boolean ESPP_middleColor_UseIt; // 0xE88
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_middleColor; // 0xE90
		::System::Boolean ESPP_middleColor_EnableFade; // 0xE98
		::System::Boolean ESPP_middleColor_EnableOverrideDefaultValue; // 0xE99
		::UnityEngine::Color ESPP_middleColor_OverrideDefaultValue; // 0xE9C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_groundColor_FieldHandleType; // 0xEAC
		::System::Boolean ESPP_groundColor_UseIt; // 0xEB0
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_groundColor; // 0xEB8
		::System::Boolean ESPP_groundColor_EnableFade; // 0xEC0
		::System::Boolean ESPP_groundColor_EnableOverrideDefaultValue; // 0xEC1
		::UnityEngine::Color ESPP_groundColor_OverrideDefaultValue; // 0xEC4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useLutWithMask_FieldHandleType; // 0xED4
		::System::Boolean ESPP_useLutWithMask_UseIt; // 0xED8
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_useLutWithMask; // 0xEE0
		::System::Boolean ESPP_useLutWithMask_EnableFade; // 0xEE8
		::System::Boolean ESPP_useLutWithMask_EnableOverrideDefaultValue; // 0xEE9
		::System::Boolean ESPP_useLutWithMask_OverrideDefaultValue; // 0xEEA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutWithMaskTex_FieldHandleType; // 0xEEC
		::UnityEngine::Texture* ESPP_lutWithMaskTex; // 0xEF0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutWithMaskContribution_FieldHandleType; // 0xEF8
		::System::Boolean ESPP_lutWithMaskContribution_UseIt; // 0xEFC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lutWithMaskContribution; // 0xF00
		::System::Boolean ESPP_lutWithMaskContribution_EnableFade; // 0xF08
		::System::Boolean ESPP_lutWithMaskContribution_EnableOverrideDefaultValue; // 0xF09
		::System::Single ESPP_lutWithMaskContribution_OverrideDefaultValue; // 0xF0C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftIgnoreSceneDepthMask_FieldHandleType; // 0xF10
		::System::Boolean ESPP_lightShaftIgnoreSceneDepthMask_UseIt; // 0xF14
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lightShaftIgnoreSceneDepthMask; // 0xF18
		::System::Boolean ESPP_lightShaftIgnoreSceneDepthMask_EnableFade; // 0xF20
		::System::Boolean ESPP_lightShaftIgnoreSceneDepthMask_EnableOverrideDefaultValue; // 0xF21
		::System::Boolean ESPP_lightShaftIgnoreSceneDepthMask_OverrideDefaultValue; // 0xF22
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cameraClipFxExtraExtension_FieldHandleType; // 0xF24
		::System::Boolean ESPP_cameraClipFxExtraExtension_UseIt; // 0xF28
		::MoleMole::EffectSimulate::Vector3KeyframeCurve* ESPP_cameraClipFxExtraExtension; // 0xF30
		::System::Boolean ESPP_cameraClipFxExtraExtension_EnableFade; // 0xF38
		::System::Boolean ESPP_cameraClipFxExtraExtension_EnableOverrideDefaultValue; // 0xF39
		::UnityEngine::Vector3 ESPP_cameraClipFxExtraExtension_OverrideDefaultValue; // 0xF3C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableLocalLightControl_FieldHandleType; // 0xF48
		::System::Boolean ESPP_enableLocalLightControl_UseIt; // 0xF4C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enableLocalLightControl; // 0xF50
		::System::Boolean ESPP_enableLocalLightControl_EnableFade; // 0xF58
		::System::Boolean ESPP_enableLocalLightControl_EnableOverrideDefaultValue; // 0xF59
		::System::Boolean ESPP_enableLocalLightControl_OverrideDefaultValue; // 0xF5A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_localLightIntensityMultiplier_FieldHandleType; // 0xF5C
		::System::Boolean ESPP_localLightIntensityMultiplier_UseIt; // 0xF60
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_localLightIntensityMultiplier; // 0xF68
		::System::Boolean ESPP_localLightIntensityMultiplier_EnableFade; // 0xF70
		::System::Boolean ESPP_localLightIntensityMultiplier_EnableOverrideDefaultValue; // 0xF71
		::System::Single ESPP_localLightIntensityMultiplier_OverrideDefaultValue; // 0xF74
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_localFogIntensity_FieldHandleType; // 0xF78
		::System::Boolean ESPP_localFogIntensity_UseIt; // 0xF7C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_localFogIntensity; // 0xF80
		::System::Boolean ESPP_localFogIntensity_EnableFade; // 0xF88
		::System::Boolean ESPP_localFogIntensity_EnableOverrideDefaultValue; // 0xF89
		::System::Single ESPP_localFogIntensity_OverrideDefaultValue; // 0xF8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_1DE6433C25680F9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_1DE6433C25680F9D_OFFSET))(this);
		}

		::System::Void Method_5_24A3E783DDC27C78()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_24A3E783DDC27C78_OFFSET))(this);
		}

		::System::Void Method_5_459C79521BFE514E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_459C79521BFE514E_OFFSET))(this, a1);
		}

		::System::Void Method_5_CAC1899EB3598A99(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_CAC1899EB3598A99_OFFSET))(this, a1);
		}

		::System::Void Method_5_BEB6D3AE6B2F04A5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_BEB6D3AE6B2F04A5_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_2A99139D13C42A50_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_2A99139D13C42A50_1_OFFSET))(this, a1);
		}
	};
}
