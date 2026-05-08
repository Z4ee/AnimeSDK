#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_FxScreenLightMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigEntityFXColorCorrections; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector3KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector4KeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class FXColorCorrection; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x170B93C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x17084220)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x170B93E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_2A99139D13C42A50_1_OFFSET UNITYSDK_OFFSET(0x170AD3F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_2A99139D13C42A50_OFFSET UNITYSDK_OFFSET(0x170A80E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x170B9250)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x170B9300)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x170B48F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x170B4830)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x15A0B900)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x170B4B20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x170B4A50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x170B49F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x170B93D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x170B93B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x15A0AD00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_63D56313608AFE32_OFFSET UNITYSDK_OFFSET(0x170B2EF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x170B5240)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_75DE19B7C4B2C2D6_OFFSET UNITYSDK_OFFSET(0x1707D430)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_76ECC59BC7430042_1_OFFSET UNITYSDK_OFFSET(0x170B68C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_76ECC59BC7430042_OFFSET UNITYSDK_OFFSET(0x170B4B70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x170B90C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x170B90B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x170B4930)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x170B4AB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x170B4880)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_8D6879CAA76F6588_OFFSET UNITYSDK_OFFSET(0x170B2700)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x170B9270)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x170B49A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x170B93A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x170B9390)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x170B2E00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x170B9200)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x170B4710)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x170B9210)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_C422DE9CC617B43A_OFFSET UNITYSDK_OFFSET(0x17086F20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x170B90D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15A0B8C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x170B47E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x170B91F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x170B9160)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x170B9260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x170B90A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_ECCE1872B868F9DC_OFFSET UNITYSDK_OFFSET(0x1709FD90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x170B6F90)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessFXColorCorrection_TypeDefinitionIndex = 81275;

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
		::UnityEngine::Color _VolDefault_rainDropColor; // 0x290
		::UnityEngine::Vector2 _VolDefault_wetnessNoiseClamp; // 0x2A0
		::UnityEngine::Color _VolDefault_rainDropSplashColor; // 0x2A8
		::System::Int32 _VolDefault_rainDropSplashCount; // 0x2B8
		::System::Single _VolDefault_distanceFogStart; // 0x2BC
		::UnityEngine::Gradient* _VolDefault_fogHorizontalGradient; // 0x2C0
		::System::Single _VolDefault_heightFogHeight; // 0x2C8
		::System::Single _VolDefault_heightFogStart; // 0x2CC
		::UnityEngine::Color _VolDefault_volumetricFogColor; // 0x2D0
		::UnityEngine::Gradient* _VolDefault_skyVerticalGradient; // 0x2E0
		::UnityEngine::Gradient* _VolDefault_skyHorizontalGradient; // 0x2E8
		::System::Single _VolDefault_skyHorizontalHeight; // 0x2F0
		::System::Single _VolDefault_skyHorizontalOffset; // 0x2F4
		::UnityEngine::Gradient* _VolDefault_skyCloudHorizontalGradient; // 0x2F8
		::UnityEngine::Color _VolDefault_sunDiscColor; // 0x300
		::UnityEngine::Gradient* _VolDefault_layer1MiddleCloudGradient; // 0x310
		::UnityEngine::Color _VolDefault_layer1CloudAroundSunColor; // 0x318
		::UnityEngine::Gradient* _VolDefault_layer2MiddleCloudGradient; // 0x328
		::UnityEngine::Color _VolDefault_layer2CloudAroundSunColor; // 0x330
		::UnityEngine::Gradient* _VolDefault_layer3MiddleCloudGradient; // 0x340
		::UnityEngine::Color _VolDefault_layer3CloudAroundSunColor; // 0x348
		::System::Single _VolDefault_sceneLutContribution; // 0x358
		::System::Boolean _VolDefault_enableLightShaft; // 0x35C
		::System::Single _VolDefault_lightShaftThreshold; // 0x360
		::System::Single _VolDefault_lightShaftIntensity; // 0x364
		::System::Boolean _VolDefault_lightShaftColorClamp; // 0x368
		::UnityEngine::Color _VolDefault_lightShaftColor; // 0x36C
		::System::Single _VolDefault_lightShaftLength; // 0x37C
		::System::Single _VolDefault_lightShaftFadeLength; // 0x380
		::System::Boolean _VolDefault_lightShaftBlur; // 0x384
		::System::Boolean _VolDefault_lightShaftUseCustomCenter; // 0x385
		::UnityEngine::Vector2 _VolDefault_lightShaftCustomCenter; // 0x388
		::System::Boolean _VolDefault_overrideWeatherConfig; // 0x390
		::UnityEngine::Color _VolDefault_ambientSkyColor; // 0x394
		::UnityEngine::Color _VolDefault_ambientEquatorColor; // 0x3A4
		::UnityEngine::Color _VolDefault_ambientGroundColor; // 0x3B4
		::System::Boolean _VolDefault_overrideWeatherGIConfig; // 0x3C4
		::UnityEngine::Color _VolDefault_skyColor; // 0x3C8
		::UnityEngine::Color _VolDefault_middleColor; // 0x3D8
		::UnityEngine::Color _VolDefault_groundColor; // 0x3E8
		::System::Boolean _VolPreVal_enableCameraClip_overrideState; // 0x3F8
		::System::Boolean _VolPreVal_enableCameraClip; // 0x3F9
		::System::Boolean _VolPreVal_cameraClipDistance_overrideState; // 0x3FA
		::System::Single _VolPreVal_cameraClipDistance; // 0x3FC
		::System::Boolean _VolPreVal_cameraClipExtension_overrideState; // 0x400
		::UnityEngine::Vector3 _VolPreVal_cameraClipExtension; // 0x404
		::System::Boolean _VolPreVal_cameraClipAlpha_overrideState; // 0x410
		::System::Single _VolPreVal_cameraClipAlpha; // 0x414
		::System::Boolean _VolPreVal_weatherConfig_overrideState; // 0x418
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* _VolPreVal_weatherConfig; // 0x420
		::System::Boolean _VolPreVal_weatherConfigWeight_overrideState; // 0x428
		::System::Single _VolPreVal_weatherConfigWeight; // 0x42C
		::System::Boolean _VolPreVal_fxLightShaftMaskOn_overrideState; // 0x430
		::System::Boolean _VolPreVal_fxLightShaftMaskOn; // 0x431
		::System::Boolean _VolPreVal_fxFxScreenLightMode_overrideState; // 0x432
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode _VolPreVal_fxFxScreenLightMode; // 0x434
		::System::Boolean _VolPreVal_fxScreenLightColor_overrideState; // 0x438
		::UnityEngine::Color _VolPreVal_fxScreenLightColor; // 0x43C
		::System::Boolean _VolPreVal_fxScreenLightMaskOn_overrideState; // 0x44C
		::System::Boolean _VolPreVal_fxScreenLightMaskOn; // 0x44D
		::System::Boolean _VolPreVal_sceneSpecialPPSEffectIntensity_overrideState; // 0x44E
		::System::Single _VolPreVal_sceneSpecialPPSEffectIntensity; // 0x450
		::System::Boolean _VolPreVal_sceneSpecialPPSOverrideWeatherGBufferSaturation_overrideState; // 0x454
		::System::Boolean _VolPreVal_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x455
		::System::Boolean _VolPreVal_sceneSpecialPPSGBufferSaturation_overrideState; // 0x456
		::System::Single _VolPreVal_sceneSpecialPPSGBufferSaturation; // 0x458
		::System::Boolean _VolPreVal_sceneSpecialPPSUseSaturationLut_overrideState; // 0x45C
		::System::Boolean _VolPreVal_sceneSpecialPPSUseSaturationLut; // 0x45D
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationLut_overrideState; // 0x45E
		::UnityEngine::Texture* _VolPreVal_sceneSpecialPPSSaturationLut; // 0x460
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampGap_overrideState; // 0x468
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampGap; // 0x46C
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampValue_overrideState; // 0x47C
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampValue; // 0x480
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampGap2_overrideState; // 0x490
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampGap2; // 0x494
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampValue2_overrideState; // 0x4A4
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampValue2; // 0x4A8
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampGap3_overrideState; // 0x4B8
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampGap3; // 0x4BC
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampValue3_overrideState; // 0x4CC
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampValue3; // 0x4D0
		::System::Boolean _VolPreVal_applySaturationLutToUberPost_overrideState; // 0x4E0
		::System::Boolean _VolPreVal_applySaturationLutToUberPost; // 0x4E1
		::System::Boolean _VolPreVal_sceneSpecialPPSIgnoreRidus_overrideState; // 0x4E2
		::System::Single _VolPreVal_sceneSpecialPPSIgnoreRidus; // 0x4E4
		::System::Boolean _VolPreVal_sceneSpecialPPSRadiusAlphaPow_overrideState; // 0x4E8
		::System::Single _VolPreVal_sceneSpecialPPSRadiusAlphaPow; // 0x4EC
		::System::Boolean _VolPreVal_sceneSpecialPPSEmissionColor_overrideState; // 0x4F0
		::UnityEngine::Color _VolPreVal_sceneSpecialPPSEmissionColor; // 0x4F4
		::System::Boolean _VolPreVal_sceneSpecialSkySaturation_overrideState; // 0x504
		::System::Single _VolPreVal_sceneSpecialSkySaturation; // 0x508
		::System::Boolean _VolPreVal_ForceUseMsaa_overrideState; // 0x50C
		::System::Boolean _VolPreVal_ForceUseMsaa; // 0x50D
		::System::Boolean _VolPreVal_postExposure_overrideState; // 0x50E
		::System::Single _VolPreVal_postExposure; // 0x510
		::System::Boolean _VolPreVal_contrast_overrideState; // 0x514
		::System::Single _VolPreVal_contrast; // 0x518
		::System::Boolean _VolPreVal_saturation_overrideState; // 0x51C
		::System::Single _VolPreVal_saturation; // 0x520
		::System::Boolean _VolPreVal_gamma_overrideState; // 0x524
		::System::Single _VolPreVal_gamma; // 0x528
		::System::Boolean _VolPreVal_lutInvert_overrideState; // 0x52C
		::System::Boolean _VolPreVal_lutInvert; // 0x52D
		::System::Boolean _VolPreVal_lutToneColors_overrideState; // 0x52E
		::System::Boolean _VolPreVal_lutToneColors; // 0x52F
		::System::Boolean _VolPreVal_lutToneA_overrideState; // 0x530
		::UnityEngine::Color _VolPreVal_lutToneA; // 0x534
		::System::Boolean _VolPreVal_lutToneB_overrideState; // 0x544
		::UnityEngine::Color _VolPreVal_lutToneB; // 0x548
		::System::Boolean _VolPreVal_lutMiddlePoint_overrideState; // 0x558
		::System::Single _VolPreVal_lutMiddlePoint; // 0x55C
		::System::Boolean _VolPreVal_lutSoftness_overrideState; // 0x560
		::System::Single _VolPreVal_lutSoftness; // 0x564
		::System::Boolean _VolPreVal_desaturate_overrideState; // 0x568
		::System::Single _VolPreVal_desaturate; // 0x56C
		::System::Boolean _VolPreVal_invert_overrideState; // 0x570
		::System::Boolean _VolPreVal_invert; // 0x571
		::System::Boolean _VolPreVal_toneColors_overrideState; // 0x572
		::System::Boolean _VolPreVal_toneColors; // 0x573
		::System::Boolean _VolPreVal_toneA_overrideState; // 0x574
		::UnityEngine::Color _VolPreVal_toneA; // 0x578
		::System::Boolean _VolPreVal_toneB_overrideState; // 0x588
		::UnityEngine::Color _VolPreVal_toneB; // 0x58C
		::System::Boolean _VolPreVal_middlePoint_overrideState; // 0x59C
		::System::Single _VolPreVal_middlePoint; // 0x5A0
		::System::Boolean _VolPreVal_softness_overrideState; // 0x5A4
		::System::Single _VolPreVal_softness; // 0x5A8
		::System::Boolean _VolPreVal_fxFogMaskPassOn_overrideState; // 0x5AC
		::System::Boolean _VolPreVal_fxFogMaskPassOn; // 0x5AD
		::System::Boolean _VolPreVal_fxColorSaturation_overrideState; // 0x5AE
		::System::Single _VolPreVal_fxColorSaturation; // 0x5B0
		::System::Boolean _VolPreVal_justControlParticleLight_overrideState; // 0x5B4
		::System::Boolean _VolPreVal_justControlParticleLight; // 0x5B5
		::System::Boolean _VolPreVal_localLightMultiplyIntensity_overrideState; // 0x5B6
		::System::Single _VolPreVal_localLightMultiplyIntensity; // 0x5B8
		::System::Boolean _VolPreVal_localLightThreadHold_overrideState; // 0x5BC
		::System::Single _VolPreVal_localLightThreadHold; // 0x5C0
		::System::Boolean _VolPreVal_indirectSpecularIntensity_overrideState; // 0x5C4
		::System::Single _VolPreVal_indirectSpecularIntensity; // 0x5C8
		::System::Boolean _VolPreVal_rainDropColor_overrideState; // 0x5CC
		::UnityEngine::Color _VolPreVal_rainDropColor; // 0x5D0
		::System::Boolean _VolPreVal_wetnessNoiseClamp_overrideState; // 0x5E0
		::UnityEngine::Vector2 _VolPreVal_wetnessNoiseClamp; // 0x5E4
		::System::Boolean _VolPreVal_rainDropSplashColor_overrideState; // 0x5EC
		::UnityEngine::Color _VolPreVal_rainDropSplashColor; // 0x5F0
		::System::Boolean _VolPreVal_rainDropSplashCount_overrideState; // 0x600
		::System::Int32 _VolPreVal_rainDropSplashCount; // 0x604
		::System::Boolean _VolPreVal_distanceFogStart_overrideState; // 0x608
		::System::Single _VolPreVal_distanceFogStart; // 0x60C
		::System::Boolean _VolPreVal_fogHorizontalGradient_overrideState; // 0x610
		::UnityEngine::Gradient* _VolPreVal_fogHorizontalGradient; // 0x618
		::System::Boolean _VolPreVal_heightFogHeight_overrideState; // 0x620
		::System::Single _VolPreVal_heightFogHeight; // 0x624
		::System::Boolean _VolPreVal_heightFogStart_overrideState; // 0x628
		::System::Single _VolPreVal_heightFogStart; // 0x62C
		::System::Boolean _VolPreVal_volumetricFogColor_overrideState; // 0x630
		::UnityEngine::Color _VolPreVal_volumetricFogColor; // 0x634
		::System::Boolean _VolPreVal_skyVerticalGradient_overrideState; // 0x644
		::UnityEngine::Gradient* _VolPreVal_skyVerticalGradient; // 0x648
		::System::Boolean _VolPreVal_skyHorizontalGradient_overrideState; // 0x650
		::UnityEngine::Gradient* _VolPreVal_skyHorizontalGradient; // 0x658
		::System::Boolean _VolPreVal_skyHorizontalHeight_overrideState; // 0x660
		::System::Single _VolPreVal_skyHorizontalHeight; // 0x664
		::System::Boolean _VolPreVal_skyHorizontalOffset_overrideState; // 0x668
		::System::Single _VolPreVal_skyHorizontalOffset; // 0x66C
		::System::Boolean _VolPreVal_skyCloudHorizontalGradient_overrideState; // 0x670
		::UnityEngine::Gradient* _VolPreVal_skyCloudHorizontalGradient; // 0x678
		::System::Boolean _VolPreVal_sunDiscColor_overrideState; // 0x680
		::UnityEngine::Color _VolPreVal_sunDiscColor; // 0x684
		::System::Boolean _VolPreVal_layer1MiddleCloudGradient_overrideState; // 0x694
		::UnityEngine::Gradient* _VolPreVal_layer1MiddleCloudGradient; // 0x698
		::System::Boolean _VolPreVal_layer1CloudAroundSunColor_overrideState; // 0x6A0
		::UnityEngine::Color _VolPreVal_layer1CloudAroundSunColor; // 0x6A4
		::System::Boolean _VolPreVal_layer2MiddleCloudGradient_overrideState; // 0x6B4
		::UnityEngine::Gradient* _VolPreVal_layer2MiddleCloudGradient; // 0x6B8
		::System::Boolean _VolPreVal_layer2CloudAroundSunColor_overrideState; // 0x6C0
		::UnityEngine::Color _VolPreVal_layer2CloudAroundSunColor; // 0x6C4
		::System::Boolean _VolPreVal_layer3MiddleCloudGradient_overrideState; // 0x6D4
		::UnityEngine::Gradient* _VolPreVal_layer3MiddleCloudGradient; // 0x6D8
		::System::Boolean _VolPreVal_layer3CloudAroundSunColor_overrideState; // 0x6E0
		::UnityEngine::Color _VolPreVal_layer3CloudAroundSunColor; // 0x6E4
		::System::Boolean _VolPreVal_sceneLutContribution_overrideState; // 0x6F4
		::System::Single _VolPreVal_sceneLutContribution; // 0x6F8
		::System::Boolean _VolPreVal_enableLightShaft_overrideState; // 0x6FC
		::System::Boolean _VolPreVal_enableLightShaft; // 0x6FD
		::System::Boolean _VolPreVal_lightShaftThreshold_overrideState; // 0x6FE
		::System::Single _VolPreVal_lightShaftThreshold; // 0x700
		::System::Boolean _VolPreVal_lightShaftIntensity_overrideState; // 0x704
		::System::Single _VolPreVal_lightShaftIntensity; // 0x708
		::System::Boolean _VolPreVal_lightShaftColorClamp_overrideState; // 0x70C
		::System::Boolean _VolPreVal_lightShaftColorClamp; // 0x70D
		::System::Boolean _VolPreVal_lightShaftColor_overrideState; // 0x70E
		::UnityEngine::Color _VolPreVal_lightShaftColor; // 0x710
		::System::Boolean _VolPreVal_lightShaftLength_overrideState; // 0x720
		::System::Single _VolPreVal_lightShaftLength; // 0x724
		::System::Boolean _VolPreVal_lightShaftFadeLength_overrideState; // 0x728
		::System::Single _VolPreVal_lightShaftFadeLength; // 0x72C
		::System::Boolean _VolPreVal_lightShaftBlur_overrideState; // 0x730
		::System::Boolean _VolPreVal_lightShaftBlur; // 0x731
		::System::Boolean _VolPreVal_lightShaftUseCustomCenter_overrideState; // 0x732
		::System::Boolean _VolPreVal_lightShaftUseCustomCenter; // 0x733
		::System::Boolean _VolPreVal_lightShaftCustomCenter_overrideState; // 0x734
		::UnityEngine::Vector2 _VolPreVal_lightShaftCustomCenter; // 0x738
		::System::Boolean _VolPreVal_overrideWeatherConfig_overrideState; // 0x740
		::System::Boolean _VolPreVal_overrideWeatherConfig; // 0x741
		::System::Boolean _VolPreVal_ambientSkyColor_overrideState; // 0x742
		::UnityEngine::Color _VolPreVal_ambientSkyColor; // 0x744
		::System::Boolean _VolPreVal_ambientEquatorColor_overrideState; // 0x754
		::UnityEngine::Color _VolPreVal_ambientEquatorColor; // 0x758
		::System::Boolean _VolPreVal_ambientGroundColor_overrideState; // 0x768
		::UnityEngine::Color _VolPreVal_ambientGroundColor; // 0x76C
		::System::Boolean _VolPreVal_overrideWeatherGIConfig_overrideState; // 0x77C
		::System::Boolean _VolPreVal_overrideWeatherGIConfig; // 0x77D
		::System::Boolean _VolPreVal_skyColor_overrideState; // 0x77E
		::UnityEngine::Color _VolPreVal_skyColor; // 0x780
		::System::Boolean _VolPreVal_middleColor_overrideState; // 0x790
		::UnityEngine::Color _VolPreVal_middleColor; // 0x794
		::System::Boolean _VolPreVal_groundColor_overrideState; // 0x7A4
		::UnityEngine::Color _VolPreVal_groundColor; // 0x7A8
		::System::Single _TimelineCurveFirstVal_cameraClipDistance; // 0x7B8
		::System::Single _TimelineCurveLastVal_cameraClipDistance; // 0x7BC
		::UnityEngine::Vector3 _TimelineCurveFirstVal_cameraClipExtension; // 0x7C0
		::UnityEngine::Vector3 _TimelineCurveLastVal_cameraClipExtension; // 0x7CC
		::System::Single _TimelineCurveFirstVal_cameraClipAlpha; // 0x7D8
		::System::Single _TimelineCurveLastVal_cameraClipAlpha; // 0x7DC
		::System::Single _TimelineCurveFirstVal_weatherConfigWeight; // 0x7E0
		::System::Single _TimelineCurveLastVal_weatherConfigWeight; // 0x7E4
		::System::Boolean _TimelineCurveFirstVal_fxLightShaftMaskOn; // 0x7E8
		::System::Boolean _TimelineCurveLastVal_fxLightShaftMaskOn; // 0x7E9
		::UnityEngine::Color _TimelineCurveFirstVal_fxScreenLightColor; // 0x7EC
		::UnityEngine::Color _TimelineCurveLastVal_fxScreenLightColor; // 0x7FC
		::System::Boolean _TimelineCurveFirstVal_fxScreenLightMaskOn; // 0x80C
		::System::Boolean _TimelineCurveLastVal_fxScreenLightMaskOn; // 0x80D
		::System::Single _TimelineCurveFirstVal_sceneSpecialPPSEffectIntensity; // 0x810
		::System::Single _TimelineCurveLastVal_sceneSpecialPPSEffectIntensity; // 0x814
		::System::Boolean _TimelineCurveFirstVal_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x818
		::System::Boolean _TimelineCurveLastVal_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x819
		::System::Single _TimelineCurveFirstVal_sceneSpecialPPSGBufferSaturation; // 0x81C
		::System::Single _TimelineCurveLastVal_sceneSpecialPPSGBufferSaturation; // 0x820
		::System::Boolean _TimelineCurveFirstVal_sceneSpecialPPSUseSaturationLut; // 0x824
		::System::Boolean _TimelineCurveLastVal_sceneSpecialPPSUseSaturationLut; // 0x825
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampGap; // 0x828
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampGap; // 0x838
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampValue; // 0x848
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampValue; // 0x858
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampGap2; // 0x868
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampGap2; // 0x878
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampValue2; // 0x888
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampValue2; // 0x898
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampGap3; // 0x8A8
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampGap3; // 0x8B8
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampValue3; // 0x8C8
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampValue3; // 0x8D8
		::System::Boolean _TimelineCurveFirstVal_applySaturationLutToUberPost; // 0x8E8
		::System::Boolean _TimelineCurveLastVal_applySaturationLutToUberPost; // 0x8E9
		::UnityEngine::Color _TimelineCurveFirstVal_sceneSpecialPPSEmissionColor; // 0x8EC
		::UnityEngine::Color _TimelineCurveLastVal_sceneSpecialPPSEmissionColor; // 0x8FC
		::System::Boolean _TimelineCurveFirstVal_ForceUseMsaa; // 0x90C
		::System::Boolean _TimelineCurveLastVal_ForceUseMsaa; // 0x90D
		::System::Single _TimelineCurveFirstVal_postExposure; // 0x910
		::System::Single _TimelineCurveLastVal_postExposure; // 0x914
		::System::Single _TimelineCurveFirstVal_contrast; // 0x918
		::System::Single _TimelineCurveLastVal_contrast; // 0x91C
		::System::Single _TimelineCurveFirstVal_saturation; // 0x920
		::System::Single _TimelineCurveLastVal_saturation; // 0x924
		::System::Single _TimelineCurveFirstVal_gamma; // 0x928
		::System::Single _TimelineCurveLastVal_gamma; // 0x92C
		::System::Boolean _TimelineCurveFirstVal_lutInvert; // 0x930
		::System::Boolean _TimelineCurveLastVal_lutInvert; // 0x931
		::System::Boolean _TimelineCurveFirstVal_lutToneColors; // 0x932
		::System::Boolean _TimelineCurveLastVal_lutToneColors; // 0x933
		::System::Single _TimelineCurveFirstVal_lutMiddlePoint; // 0x934
		::System::Single _TimelineCurveLastVal_lutMiddlePoint; // 0x938
		::System::Single _TimelineCurveFirstVal_lutSoftness; // 0x93C
		::System::Single _TimelineCurveLastVal_lutSoftness; // 0x940
		::System::Single _TimelineCurveFirstVal_desaturate; // 0x944
		::System::Single _TimelineCurveLastVal_desaturate; // 0x948
		::System::Boolean _TimelineCurveFirstVal_invert; // 0x94C
		::System::Boolean _TimelineCurveLastVal_invert; // 0x94D
		::System::Boolean _TimelineCurveFirstVal_toneColors; // 0x94E
		::System::Boolean _TimelineCurveLastVal_toneColors; // 0x94F
		::System::Single _TimelineCurveFirstVal_middlePoint; // 0x950
		::System::Single _TimelineCurveLastVal_middlePoint; // 0x954
		::System::Single _TimelineCurveFirstVal_softness; // 0x958
		::System::Single _TimelineCurveLastVal_softness; // 0x95C
		::System::Boolean _TimelineCurveFirstVal_fxFogMaskPassOn; // 0x960
		::System::Boolean _TimelineCurveLastVal_fxFogMaskPassOn; // 0x961
		::System::Single _TimelineCurveFirstVal_fxColorSaturation; // 0x964
		::System::Single _TimelineCurveLastVal_fxColorSaturation; // 0x968
		::System::Boolean _TimelineCurveFirstVal_justControlParticleLight; // 0x96C
		::System::Boolean _TimelineCurveLastVal_justControlParticleLight; // 0x96D
		::System::Single _TimelineCurveFirstVal_localLightMultiplyIntensity; // 0x970
		::System::Single _TimelineCurveLastVal_localLightMultiplyIntensity; // 0x974
		::System::Single _TimelineCurveFirstVal_localLightThreadHold; // 0x978
		::System::Single _TimelineCurveLastVal_localLightThreadHold; // 0x97C
		::System::Single _TimelineCurveFirstVal_indirectSpecularIntensity; // 0x980
		::System::Single _TimelineCurveLastVal_indirectSpecularIntensity; // 0x984
		::System::Boolean _TimelineCurveFirstVal_enableLightShaft; // 0x988
		::System::Boolean _TimelineCurveLastVal_enableLightShaft; // 0x989
		::System::Single _TimelineCurveFirstVal_lightShaftThreshold; // 0x98C
		::System::Single _TimelineCurveLastVal_lightShaftThreshold; // 0x990
		::System::Single _TimelineCurveFirstVal_lightShaftIntensity; // 0x994
		::System::Single _TimelineCurveLastVal_lightShaftIntensity; // 0x998
		::System::Boolean _TimelineCurveFirstVal_lightShaftColorClamp; // 0x99C
		::System::Boolean _TimelineCurveLastVal_lightShaftColorClamp; // 0x99D
		::UnityEngine::Color _TimelineCurveFirstVal_lightShaftColor; // 0x9A0
		::UnityEngine::Color _TimelineCurveLastVal_lightShaftColor; // 0x9B0
		::System::Single _TimelineCurveFirstVal_lightShaftLength; // 0x9C0
		::System::Single _TimelineCurveLastVal_lightShaftLength; // 0x9C4
		::System::Single _TimelineCurveFirstVal_lightShaftFadeLength; // 0x9C8
		::System::Single _TimelineCurveLastVal_lightShaftFadeLength; // 0x9CC
		::System::Boolean _TimelineCurveFirstVal_lightShaftBlur; // 0x9D0
		::System::Boolean _TimelineCurveLastVal_lightShaftBlur; // 0x9D1
		::System::Boolean _TimelineCurveFirstVal_lightShaftUseCustomCenter; // 0x9D2
		::System::Boolean _TimelineCurveLastVal_lightShaftUseCustomCenter; // 0x9D3
		::UnityEngine::Vector2 _TimelineCurveFirstVal_lightShaftCustomCenter; // 0x9D4
		::UnityEngine::Vector2 _TimelineCurveLastVal_lightShaftCustomCenter; // 0x9DC
		::System::Boolean _TimelineCurveFirstVal_overrideWeatherConfig; // 0x9E4
		::System::Boolean _TimelineCurveLastVal_overrideWeatherConfig; // 0x9E5
		::UnityEngine::Color _TimelineCurveFirstVal_ambientSkyColor; // 0x9E8
		::UnityEngine::Color _TimelineCurveLastVal_ambientSkyColor; // 0x9F8
		::UnityEngine::Color _TimelineCurveFirstVal_ambientEquatorColor; // 0xA08
		::UnityEngine::Color _TimelineCurveLastVal_ambientEquatorColor; // 0xA18
		::UnityEngine::Color _TimelineCurveFirstVal_ambientGroundColor; // 0xA28
		::UnityEngine::Color _TimelineCurveLastVal_ambientGroundColor; // 0xA38
		::System::Boolean _TimelineCurveFirstVal_overrideWeatherGIConfig; // 0xA48
		::System::Boolean _TimelineCurveLastVal_overrideWeatherGIConfig; // 0xA49
		::UnityEngine::Color _TimelineCurveFirstVal_skyColor; // 0xA4C
		::UnityEngine::Color _TimelineCurveLastVal_skyColor; // 0xA5C
		::UnityEngine::Color _TimelineCurveFirstVal_middleColor; // 0xA6C
		::UnityEngine::Color _TimelineCurveLastVal_middleColor; // 0xA7C
		::UnityEngine::Color _TimelineCurveFirstVal_groundColor; // 0xA8C
		::UnityEngine::Color _TimelineCurveLastVal_groundColor; // 0xA9C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableCameraClip_FieldHandleType; // 0xAAC
		::System::Boolean ESPP_enableCameraClip; // 0xAB0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cameraClipDistance_FieldHandleType; // 0xAB4
		::System::Boolean ESPP_cameraClipDistance_UseIt; // 0xAB8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cameraClipDistance; // 0xAC0
		::System::Boolean ESPP_cameraClipDistance_EnableFade; // 0xAC8
		::System::Boolean ESPP_cameraClipDistance_EnableOverrideDefaultValue; // 0xAC9
		::System::Single ESPP_cameraClipDistance_OverrideDefaultValue; // 0xACC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cameraClipExtension_FieldHandleType; // 0xAD0
		::System::Boolean ESPP_cameraClipExtension_UseIt; // 0xAD4
		::MoleMole::EffectSimulate::Vector3KeyframeCurve* ESPP_cameraClipExtension; // 0xAD8
		::System::Boolean ESPP_cameraClipExtension_EnableFade; // 0xAE0
		::System::Boolean ESPP_cameraClipExtension_EnableOverrideDefaultValue; // 0xAE1
		::UnityEngine::Vector3 ESPP_cameraClipExtension_OverrideDefaultValue; // 0xAE4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cameraClipAlpha_FieldHandleType; // 0xAF0
		::System::Boolean ESPP_cameraClipAlpha_UseIt; // 0xAF4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cameraClipAlpha; // 0xAF8
		::System::Boolean ESPP_cameraClipAlpha_EnableFade; // 0xB00
		::System::Boolean ESPP_cameraClipAlpha_EnableOverrideDefaultValue; // 0xB01
		::System::Single ESPP_cameraClipAlpha_OverrideDefaultValue; // 0xB04
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_weatherConfig_FieldHandleType; // 0xB08
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* ESPP_weatherConfig; // 0xB10
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_weatherConfigWeight_FieldHandleType; // 0xB18
		::System::Boolean ESPP_weatherConfigWeight_UseIt; // 0xB1C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_weatherConfigWeight; // 0xB20
		::System::Boolean ESPP_weatherConfigWeight_EnableFade; // 0xB28
		::System::Boolean ESPP_weatherConfigWeight_EnableOverrideDefaultValue; // 0xB29
		::System::Single ESPP_weatherConfigWeight_OverrideDefaultValue; // 0xB2C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxLightShaftMaskOn_FieldHandleType; // 0xB30
		::System::Boolean ESPP_fxLightShaftMaskOn_UseIt; // 0xB34
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxLightShaftMaskOn; // 0xB38
		::System::Boolean ESPP_fxLightShaftMaskOn_EnableFade; // 0xB40
		::System::Boolean ESPP_fxLightShaftMaskOn_EnableOverrideDefaultValue; // 0xB41
		::System::Boolean ESPP_fxLightShaftMaskOn_OverrideDefaultValue; // 0xB42
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFxScreenLightMode_FieldHandleType; // 0xB44
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode ESPP_fxFxScreenLightMode; // 0xB48
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxScreenLightColor_FieldHandleType; // 0xB4C
		::System::Boolean ESPP_fxScreenLightColor_UseIt; // 0xB50
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_fxScreenLightColor; // 0xB58
		::System::Boolean ESPP_fxScreenLightColor_EnableFade; // 0xB60
		::System::Boolean ESPP_fxScreenLightColor_EnableOverrideDefaultValue; // 0xB61
		::UnityEngine::Color ESPP_fxScreenLightColor_OverrideDefaultValue; // 0xB64
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxScreenLightMaskOn_FieldHandleType; // 0xB74
		::System::Boolean ESPP_fxScreenLightMaskOn_UseIt; // 0xB78
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxScreenLightMaskOn; // 0xB80
		::System::Boolean ESPP_fxScreenLightMaskOn_EnableFade; // 0xB88
		::System::Boolean ESPP_fxScreenLightMaskOn_EnableOverrideDefaultValue; // 0xB89
		::System::Boolean ESPP_fxScreenLightMaskOn_OverrideDefaultValue; // 0xB8A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSEffectIntensity_FieldHandleType; // 0xB8C
		::System::Boolean ESPP_sceneSpecialPPSEffectIntensity_UseIt; // 0xB90
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sceneSpecialPPSEffectIntensity; // 0xB98
		::System::Boolean ESPP_sceneSpecialPPSEffectIntensity_EnableFade; // 0xBA0
		::System::Boolean ESPP_sceneSpecialPPSEffectIntensity_EnableOverrideDefaultValue; // 0xBA1
		::System::Single ESPP_sceneSpecialPPSEffectIntensity_OverrideDefaultValue; // 0xBA4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_FieldHandleType; // 0xBA8
		::System::Boolean ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_UseIt; // 0xBAC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0xBB0
		::System::Boolean ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_EnableFade; // 0xBB8
		::System::Boolean ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_EnableOverrideDefaultValue; // 0xBB9
		::System::Boolean ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_OverrideDefaultValue; // 0xBBA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSGBufferSaturation_FieldHandleType; // 0xBBC
		::System::Boolean ESPP_sceneSpecialPPSGBufferSaturation_UseIt; // 0xBC0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sceneSpecialPPSGBufferSaturation; // 0xBC8
		::System::Boolean ESPP_sceneSpecialPPSGBufferSaturation_EnableFade; // 0xBD0
		::System::Boolean ESPP_sceneSpecialPPSGBufferSaturation_EnableOverrideDefaultValue; // 0xBD1
		::System::Single ESPP_sceneSpecialPPSGBufferSaturation_OverrideDefaultValue; // 0xBD4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSUseSaturationLut_FieldHandleType; // 0xBD8
		::System::Boolean ESPP_sceneSpecialPPSUseSaturationLut_UseIt; // 0xBDC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_sceneSpecialPPSUseSaturationLut; // 0xBE0
		::System::Boolean ESPP_sceneSpecialPPSUseSaturationLut_EnableFade; // 0xBE8
		::System::Boolean ESPP_sceneSpecialPPSUseSaturationLut_EnableOverrideDefaultValue; // 0xBE9
		::System::Boolean ESPP_sceneSpecialPPSUseSaturationLut_OverrideDefaultValue; // 0xBEA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationLut_FieldHandleType; // 0xBEC
		::UnityEngine::Texture* ESPP_sceneSpecialPPSSaturationLut; // 0xBF0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampGap_FieldHandleType; // 0xBF8
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap_UseIt; // 0xBFC
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampGap; // 0xC00
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap_EnableFade; // 0xC08
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap_EnableOverrideDefaultValue; // 0xC09
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampGap_OverrideDefaultValue; // 0xC0C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampValue_FieldHandleType; // 0xC1C
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue_UseIt; // 0xC20
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampValue; // 0xC28
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue_EnableFade; // 0xC30
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue_EnableOverrideDefaultValue; // 0xC31
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampValue_OverrideDefaultValue; // 0xC34
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampGap2_FieldHandleType; // 0xC44
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap2_UseIt; // 0xC48
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampGap2; // 0xC50
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap2_EnableFade; // 0xC58
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap2_EnableOverrideDefaultValue; // 0xC59
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampGap2_OverrideDefaultValue; // 0xC5C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampValue2_FieldHandleType; // 0xC6C
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue2_UseIt; // 0xC70
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampValue2; // 0xC78
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue2_EnableFade; // 0xC80
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue2_EnableOverrideDefaultValue; // 0xC81
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampValue2_OverrideDefaultValue; // 0xC84
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampGap3_FieldHandleType; // 0xC94
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap3_UseIt; // 0xC98
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampGap3; // 0xCA0
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap3_EnableFade; // 0xCA8
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap3_EnableOverrideDefaultValue; // 0xCA9
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampGap3_OverrideDefaultValue; // 0xCAC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampValue3_FieldHandleType; // 0xCBC
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue3_UseIt; // 0xCC0
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampValue3; // 0xCC8
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue3_EnableFade; // 0xCD0
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue3_EnableOverrideDefaultValue; // 0xCD1
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampValue3_OverrideDefaultValue; // 0xCD4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_applySaturationLutToUberPost_FieldHandleType; // 0xCE4
		::System::Boolean ESPP_applySaturationLutToUberPost_UseIt; // 0xCE8
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_applySaturationLutToUberPost; // 0xCF0
		::System::Boolean ESPP_applySaturationLutToUberPost_EnableFade; // 0xCF8
		::System::Boolean ESPP_applySaturationLutToUberPost_EnableOverrideDefaultValue; // 0xCF9
		::System::Boolean ESPP_applySaturationLutToUberPost_OverrideDefaultValue; // 0xCFA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSIgnoreRidus_FieldHandleType; // 0xCFC
		::System::Single ESPP_sceneSpecialPPSIgnoreRidus; // 0xD00
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSRadiusAlphaPow_FieldHandleType; // 0xD04
		::System::Single ESPP_sceneSpecialPPSRadiusAlphaPow; // 0xD08
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSEmissionColor_FieldHandleType; // 0xD0C
		::System::Boolean ESPP_sceneSpecialPPSEmissionColor_UseIt; // 0xD10
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_sceneSpecialPPSEmissionColor; // 0xD18
		::System::Boolean ESPP_sceneSpecialPPSEmissionColor_EnableFade; // 0xD20
		::System::Boolean ESPP_sceneSpecialPPSEmissionColor_EnableOverrideDefaultValue; // 0xD21
		::UnityEngine::Color ESPP_sceneSpecialPPSEmissionColor_OverrideDefaultValue; // 0xD24
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialSkySaturation_FieldHandleType; // 0xD34
		::System::Single ESPP_sceneSpecialSkySaturation; // 0xD38
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ForceUseMsaa_FieldHandleType; // 0xD3C
		::System::Boolean ESPP_ForceUseMsaa_UseIt; // 0xD40
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_ForceUseMsaa; // 0xD48
		::System::Boolean ESPP_ForceUseMsaa_EnableFade; // 0xD50
		::System::Boolean ESPP_ForceUseMsaa_EnableOverrideDefaultValue; // 0xD51
		::System::Boolean ESPP_ForceUseMsaa_OverrideDefaultValue; // 0xD52
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_postExposure_FieldHandleType; // 0xD54
		::System::Boolean ESPP_postExposure_UseIt; // 0xD58
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_postExposure; // 0xD60
		::System::Boolean ESPP_postExposure_EnableFade; // 0xD68
		::System::Boolean ESPP_postExposure_EnableOverrideDefaultValue; // 0xD69
		::System::Single ESPP_postExposure_OverrideDefaultValue; // 0xD6C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_contrast_FieldHandleType; // 0xD70
		::System::Boolean ESPP_contrast_UseIt; // 0xD74
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_contrast; // 0xD78
		::System::Boolean ESPP_contrast_EnableFade; // 0xD80
		::System::Boolean ESPP_contrast_EnableOverrideDefaultValue; // 0xD81
		::System::Single ESPP_contrast_OverrideDefaultValue; // 0xD84
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_saturation_FieldHandleType; // 0xD88
		::System::Boolean ESPP_saturation_UseIt; // 0xD8C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_saturation; // 0xD90
		::System::Boolean ESPP_saturation_EnableFade; // 0xD98
		::System::Boolean ESPP_saturation_EnableOverrideDefaultValue; // 0xD99
		::System::Single ESPP_saturation_OverrideDefaultValue; // 0xD9C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gamma_FieldHandleType; // 0xDA0
		::System::Boolean ESPP_gamma_UseIt; // 0xDA4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_gamma; // 0xDA8
		::System::Boolean ESPP_gamma_EnableFade; // 0xDB0
		::System::Boolean ESPP_gamma_EnableOverrideDefaultValue; // 0xDB1
		::System::Single ESPP_gamma_OverrideDefaultValue; // 0xDB4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutInvert_FieldHandleType; // 0xDB8
		::System::Boolean ESPP_lutInvert_UseIt; // 0xDBC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lutInvert; // 0xDC0
		::System::Boolean ESPP_lutInvert_EnableFade; // 0xDC8
		::System::Boolean ESPP_lutInvert_EnableOverrideDefaultValue; // 0xDC9
		::System::Boolean ESPP_lutInvert_OverrideDefaultValue; // 0xDCA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutToneColors_FieldHandleType; // 0xDCC
		::System::Boolean ESPP_lutToneColors_UseIt; // 0xDD0
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lutToneColors; // 0xDD8
		::System::Boolean ESPP_lutToneColors_EnableFade; // 0xDE0
		::System::Boolean ESPP_lutToneColors_EnableOverrideDefaultValue; // 0xDE1
		::System::Boolean ESPP_lutToneColors_OverrideDefaultValue; // 0xDE2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutToneA_FieldHandleType; // 0xDE4
		::UnityEngine::Color ESPP_lutToneA; // 0xDE8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutToneB_FieldHandleType; // 0xDF8
		::UnityEngine::Color ESPP_lutToneB; // 0xDFC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutMiddlePoint_FieldHandleType; // 0xE0C
		::System::Boolean ESPP_lutMiddlePoint_UseIt; // 0xE10
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lutMiddlePoint; // 0xE18
		::System::Boolean ESPP_lutMiddlePoint_EnableFade; // 0xE20
		::System::Boolean ESPP_lutMiddlePoint_EnableOverrideDefaultValue; // 0xE21
		::System::Single ESPP_lutMiddlePoint_OverrideDefaultValue; // 0xE24
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutSoftness_FieldHandleType; // 0xE28
		::System::Boolean ESPP_lutSoftness_UseIt; // 0xE2C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lutSoftness; // 0xE30
		::System::Boolean ESPP_lutSoftness_EnableFade; // 0xE38
		::System::Boolean ESPP_lutSoftness_EnableOverrideDefaultValue; // 0xE39
		::System::Single ESPP_lutSoftness_OverrideDefaultValue; // 0xE3C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_desaturate_FieldHandleType; // 0xE40
		::System::Boolean ESPP_desaturate_UseIt; // 0xE44
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_desaturate; // 0xE48
		::System::Boolean ESPP_desaturate_EnableFade; // 0xE50
		::System::Boolean ESPP_desaturate_EnableOverrideDefaultValue; // 0xE51
		::System::Single ESPP_desaturate_OverrideDefaultValue; // 0xE54
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_invert_FieldHandleType; // 0xE58
		::System::Boolean ESPP_invert_UseIt; // 0xE5C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_invert; // 0xE60
		::System::Boolean ESPP_invert_EnableFade; // 0xE68
		::System::Boolean ESPP_invert_EnableOverrideDefaultValue; // 0xE69
		::System::Boolean ESPP_invert_OverrideDefaultValue; // 0xE6A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toneColors_FieldHandleType; // 0xE6C
		::System::Boolean ESPP_toneColors_UseIt; // 0xE70
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_toneColors; // 0xE78
		::System::Boolean ESPP_toneColors_EnableFade; // 0xE80
		::System::Boolean ESPP_toneColors_EnableOverrideDefaultValue; // 0xE81
		::System::Boolean ESPP_toneColors_OverrideDefaultValue; // 0xE82
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toneA_FieldHandleType; // 0xE84
		::UnityEngine::Color ESPP_toneA; // 0xE88
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toneB_FieldHandleType; // 0xE98
		::UnityEngine::Color ESPP_toneB; // 0xE9C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_middlePoint_FieldHandleType; // 0xEAC
		::System::Boolean ESPP_middlePoint_UseIt; // 0xEB0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_middlePoint; // 0xEB8
		::System::Boolean ESPP_middlePoint_EnableFade; // 0xEC0
		::System::Boolean ESPP_middlePoint_EnableOverrideDefaultValue; // 0xEC1
		::System::Single ESPP_middlePoint_OverrideDefaultValue; // 0xEC4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_softness_FieldHandleType; // 0xEC8
		::System::Boolean ESPP_softness_UseIt; // 0xECC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_softness; // 0xED0
		::System::Boolean ESPP_softness_EnableFade; // 0xED8
		::System::Boolean ESPP_softness_EnableOverrideDefaultValue; // 0xED9
		::System::Single ESPP_softness_OverrideDefaultValue; // 0xEDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogMaskPassOn_FieldHandleType; // 0xEE0
		::System::Boolean ESPP_fxFogMaskPassOn_UseIt; // 0xEE4
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxFogMaskPassOn; // 0xEE8
		::System::Boolean ESPP_fxFogMaskPassOn_EnableFade; // 0xEF0
		::System::Boolean ESPP_fxFogMaskPassOn_EnableOverrideDefaultValue; // 0xEF1
		::System::Boolean ESPP_fxFogMaskPassOn_OverrideDefaultValue; // 0xEF2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxColorSaturation_FieldHandleType; // 0xEF4
		::System::Boolean ESPP_fxColorSaturation_UseIt; // 0xEF8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxColorSaturation; // 0xF00
		::System::Boolean ESPP_fxColorSaturation_EnableFade; // 0xF08
		::System::Boolean ESPP_fxColorSaturation_EnableOverrideDefaultValue; // 0xF09
		::System::Single ESPP_fxColorSaturation_OverrideDefaultValue; // 0xF0C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_justControlParticleLight_FieldHandleType; // 0xF10
		::System::Boolean ESPP_justControlParticleLight_UseIt; // 0xF14
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_justControlParticleLight; // 0xF18
		::System::Boolean ESPP_justControlParticleLight_EnableFade; // 0xF20
		::System::Boolean ESPP_justControlParticleLight_EnableOverrideDefaultValue; // 0xF21
		::System::Boolean ESPP_justControlParticleLight_OverrideDefaultValue; // 0xF22
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_localLightMultiplyIntensity_FieldHandleType; // 0xF24
		::System::Boolean ESPP_localLightMultiplyIntensity_UseIt; // 0xF28
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_localLightMultiplyIntensity; // 0xF30
		::System::Boolean ESPP_localLightMultiplyIntensity_EnableFade; // 0xF38
		::System::Boolean ESPP_localLightMultiplyIntensity_EnableOverrideDefaultValue; // 0xF39
		::System::Single ESPP_localLightMultiplyIntensity_OverrideDefaultValue; // 0xF3C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_localLightThreadHold_FieldHandleType; // 0xF40
		::System::Boolean ESPP_localLightThreadHold_UseIt; // 0xF44
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_localLightThreadHold; // 0xF48
		::System::Boolean ESPP_localLightThreadHold_EnableFade; // 0xF50
		::System::Boolean ESPP_localLightThreadHold_EnableOverrideDefaultValue; // 0xF51
		::System::Single ESPP_localLightThreadHold_OverrideDefaultValue; // 0xF54
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_indirectSpecularIntensity_FieldHandleType; // 0xF58
		::System::Boolean ESPP_indirectSpecularIntensity_UseIt; // 0xF5C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_indirectSpecularIntensity; // 0xF60
		::System::Boolean ESPP_indirectSpecularIntensity_EnableFade; // 0xF68
		::System::Boolean ESPP_indirectSpecularIntensity_EnableOverrideDefaultValue; // 0xF69
		::System::Single ESPP_indirectSpecularIntensity_OverrideDefaultValue; // 0xF6C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rainDropColor_FieldHandleType; // 0xF70
		::UnityEngine::Color ESPP_rainDropColor; // 0xF74
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_wetnessNoiseClamp_FieldHandleType; // 0xF84
		::UnityEngine::Vector2 ESPP_wetnessNoiseClamp; // 0xF88
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rainDropSplashColor_FieldHandleType; // 0xF90
		::UnityEngine::Color ESPP_rainDropSplashColor; // 0xF94
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rainDropSplashCount_FieldHandleType; // 0xFA4
		::System::Int32 ESPP_rainDropSplashCount; // 0xFA8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceFogStart_FieldHandleType; // 0xFAC
		::System::Single ESPP_distanceFogStart; // 0xFB0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fogHorizontalGradient_FieldHandleType; // 0xFB4
		::UnityEngine::Gradient* ESPP_fogHorizontalGradient; // 0xFB8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_heightFogHeight_FieldHandleType; // 0xFC0
		::System::Single ESPP_heightFogHeight; // 0xFC4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_heightFogStart_FieldHandleType; // 0xFC8
		::System::Single ESPP_heightFogStart; // 0xFCC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_volumetricFogColor_FieldHandleType; // 0xFD0
		::UnityEngine::Color ESPP_volumetricFogColor; // 0xFD4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyVerticalGradient_FieldHandleType; // 0xFE4
		::UnityEngine::Gradient* ESPP_skyVerticalGradient; // 0xFE8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyHorizontalGradient_FieldHandleType; // 0xFF0
		::UnityEngine::Gradient* ESPP_skyHorizontalGradient; // 0xFF8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyHorizontalHeight_FieldHandleType; // 0x1000
		::System::Single ESPP_skyHorizontalHeight; // 0x1004
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyHorizontalOffset_FieldHandleType; // 0x1008
		::System::Single ESPP_skyHorizontalOffset; // 0x100C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyCloudHorizontalGradient_FieldHandleType; // 0x1010
		::UnityEngine::Gradient* ESPP_skyCloudHorizontalGradient; // 0x1018
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sunDiscColor_FieldHandleType; // 0x1020
		::UnityEngine::Color ESPP_sunDiscColor; // 0x1024
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer1MiddleCloudGradient_FieldHandleType; // 0x1034
		::UnityEngine::Gradient* ESPP_layer1MiddleCloudGradient; // 0x1038
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer1CloudAroundSunColor_FieldHandleType; // 0x1040
		::UnityEngine::Color ESPP_layer1CloudAroundSunColor; // 0x1044
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer2MiddleCloudGradient_FieldHandleType; // 0x1054
		::UnityEngine::Gradient* ESPP_layer2MiddleCloudGradient; // 0x1058
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer2CloudAroundSunColor_FieldHandleType; // 0x1060
		::UnityEngine::Color ESPP_layer2CloudAroundSunColor; // 0x1064
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer3MiddleCloudGradient_FieldHandleType; // 0x1074
		::UnityEngine::Gradient* ESPP_layer3MiddleCloudGradient; // 0x1078
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer3CloudAroundSunColor_FieldHandleType; // 0x1080
		::UnityEngine::Color ESPP_layer3CloudAroundSunColor; // 0x1084
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneLutContribution_FieldHandleType; // 0x1094
		::System::Single ESPP_sceneLutContribution; // 0x1098
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableLightShaft_FieldHandleType; // 0x109C
		::System::Boolean ESPP_enableLightShaft_UseIt; // 0x10A0
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enableLightShaft; // 0x10A8
		::System::Boolean ESPP_enableLightShaft_EnableFade; // 0x10B0
		::System::Boolean ESPP_enableLightShaft_EnableOverrideDefaultValue; // 0x10B1
		::System::Boolean ESPP_enableLightShaft_OverrideDefaultValue; // 0x10B2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftThreshold_FieldHandleType; // 0x10B4
		::System::Boolean ESPP_lightShaftThreshold_UseIt; // 0x10B8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftThreshold; // 0x10C0
		::System::Boolean ESPP_lightShaftThreshold_EnableFade; // 0x10C8
		::System::Boolean ESPP_lightShaftThreshold_EnableOverrideDefaultValue; // 0x10C9
		::System::Single ESPP_lightShaftThreshold_OverrideDefaultValue; // 0x10CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftIntensity_FieldHandleType; // 0x10D0
		::System::Boolean ESPP_lightShaftIntensity_UseIt; // 0x10D4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftIntensity; // 0x10D8
		::System::Boolean ESPP_lightShaftIntensity_EnableFade; // 0x10E0
		::System::Boolean ESPP_lightShaftIntensity_EnableOverrideDefaultValue; // 0x10E1
		::System::Single ESPP_lightShaftIntensity_OverrideDefaultValue; // 0x10E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftColorClamp_FieldHandleType; // 0x10E8
		::System::Boolean ESPP_lightShaftColorClamp_UseIt; // 0x10EC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lightShaftColorClamp; // 0x10F0
		::System::Boolean ESPP_lightShaftColorClamp_EnableFade; // 0x10F8
		::System::Boolean ESPP_lightShaftColorClamp_EnableOverrideDefaultValue; // 0x10F9
		::System::Boolean ESPP_lightShaftColorClamp_OverrideDefaultValue; // 0x10FA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftColor_FieldHandleType; // 0x10FC
		::System::Boolean ESPP_lightShaftColor_UseIt; // 0x1100
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_lightShaftColor; // 0x1108
		::System::Boolean ESPP_lightShaftColor_EnableFade; // 0x1110
		::System::Boolean ESPP_lightShaftColor_EnableOverrideDefaultValue; // 0x1111
		::UnityEngine::Color ESPP_lightShaftColor_OverrideDefaultValue; // 0x1114
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftLength_FieldHandleType; // 0x1124
		::System::Boolean ESPP_lightShaftLength_UseIt; // 0x1128
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftLength; // 0x1130
		::System::Boolean ESPP_lightShaftLength_EnableFade; // 0x1138
		::System::Boolean ESPP_lightShaftLength_EnableOverrideDefaultValue; // 0x1139
		::System::Single ESPP_lightShaftLength_OverrideDefaultValue; // 0x113C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftFadeLength_FieldHandleType; // 0x1140
		::System::Boolean ESPP_lightShaftFadeLength_UseIt; // 0x1144
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftFadeLength; // 0x1148
		::System::Boolean ESPP_lightShaftFadeLength_EnableFade; // 0x1150
		::System::Boolean ESPP_lightShaftFadeLength_EnableOverrideDefaultValue; // 0x1151
		::System::Single ESPP_lightShaftFadeLength_OverrideDefaultValue; // 0x1154
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftBlur_FieldHandleType; // 0x1158
		::System::Boolean ESPP_lightShaftBlur_UseIt; // 0x115C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lightShaftBlur; // 0x1160
		::System::Boolean ESPP_lightShaftBlur_EnableFade; // 0x1168
		::System::Boolean ESPP_lightShaftBlur_EnableOverrideDefaultValue; // 0x1169
		::System::Boolean ESPP_lightShaftBlur_OverrideDefaultValue; // 0x116A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftUseCustomCenter_FieldHandleType; // 0x116C
		::System::Boolean ESPP_lightShaftUseCustomCenter_UseIt; // 0x1170
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lightShaftUseCustomCenter; // 0x1178
		::System::Boolean ESPP_lightShaftUseCustomCenter_EnableFade; // 0x1180
		::System::Boolean ESPP_lightShaftUseCustomCenter_EnableOverrideDefaultValue; // 0x1181
		::System::Boolean ESPP_lightShaftUseCustomCenter_OverrideDefaultValue; // 0x1182
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftCustomCenter_FieldHandleType; // 0x1184
		::System::Boolean ESPP_lightShaftCustomCenter_UseIt; // 0x1188
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_lightShaftCustomCenter; // 0x1190
		::System::Boolean ESPP_lightShaftCustomCenter_EnableFade; // 0x1198
		::System::Boolean ESPP_lightShaftCustomCenter_EnableOverrideDefaultValue; // 0x1199
		::UnityEngine::Vector2 ESPP_lightShaftCustomCenter_OverrideDefaultValue; // 0x119C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_overrideWeatherConfig_FieldHandleType; // 0x11A4
		::System::Boolean ESPP_overrideWeatherConfig_UseIt; // 0x11A8
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_overrideWeatherConfig; // 0x11B0
		::System::Boolean ESPP_overrideWeatherConfig_EnableFade; // 0x11B8
		::System::Boolean ESPP_overrideWeatherConfig_EnableOverrideDefaultValue; // 0x11B9
		::System::Boolean ESPP_overrideWeatherConfig_OverrideDefaultValue; // 0x11BA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ambientSkyColor_FieldHandleType; // 0x11BC
		::System::Boolean ESPP_ambientSkyColor_UseIt; // 0x11C0
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_ambientSkyColor; // 0x11C8
		::System::Boolean ESPP_ambientSkyColor_EnableFade; // 0x11D0
		::System::Boolean ESPP_ambientSkyColor_EnableOverrideDefaultValue; // 0x11D1
		::UnityEngine::Color ESPP_ambientSkyColor_OverrideDefaultValue; // 0x11D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ambientEquatorColor_FieldHandleType; // 0x11E4
		::System::Boolean ESPP_ambientEquatorColor_UseIt; // 0x11E8
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_ambientEquatorColor; // 0x11F0
		::System::Boolean ESPP_ambientEquatorColor_EnableFade; // 0x11F8
		::System::Boolean ESPP_ambientEquatorColor_EnableOverrideDefaultValue; // 0x11F9
		::UnityEngine::Color ESPP_ambientEquatorColor_OverrideDefaultValue; // 0x11FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ambientGroundColor_FieldHandleType; // 0x120C
		::System::Boolean ESPP_ambientGroundColor_UseIt; // 0x1210
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_ambientGroundColor; // 0x1218
		::System::Boolean ESPP_ambientGroundColor_EnableFade; // 0x1220
		::System::Boolean ESPP_ambientGroundColor_EnableOverrideDefaultValue; // 0x1221
		::UnityEngine::Color ESPP_ambientGroundColor_OverrideDefaultValue; // 0x1224
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_overrideWeatherGIConfig_FieldHandleType; // 0x1234
		::System::Boolean ESPP_overrideWeatherGIConfig_UseIt; // 0x1238
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_overrideWeatherGIConfig; // 0x1240
		::System::Boolean ESPP_overrideWeatherGIConfig_EnableFade; // 0x1248
		::System::Boolean ESPP_overrideWeatherGIConfig_EnableOverrideDefaultValue; // 0x1249
		::System::Boolean ESPP_overrideWeatherGIConfig_OverrideDefaultValue; // 0x124A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyColor_FieldHandleType; // 0x124C
		::System::Boolean ESPP_skyColor_UseIt; // 0x1250
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_skyColor; // 0x1258
		::System::Boolean ESPP_skyColor_EnableFade; // 0x1260
		::System::Boolean ESPP_skyColor_EnableOverrideDefaultValue; // 0x1261
		::UnityEngine::Color ESPP_skyColor_OverrideDefaultValue; // 0x1264
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_middleColor_FieldHandleType; // 0x1274
		::System::Boolean ESPP_middleColor_UseIt; // 0x1278
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_middleColor; // 0x1280
		::System::Boolean ESPP_middleColor_EnableFade; // 0x1288
		::System::Boolean ESPP_middleColor_EnableOverrideDefaultValue; // 0x1289
		::UnityEngine::Color ESPP_middleColor_OverrideDefaultValue; // 0x128C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_groundColor_FieldHandleType; // 0x129C
		::System::Boolean ESPP_groundColor_UseIt; // 0x12A0
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_groundColor; // 0x12A8
		::System::Boolean ESPP_groundColor_EnableFade; // 0x12B0
		::System::Boolean ESPP_groundColor_EnableOverrideDefaultValue; // 0x12B1
		::UnityEngine::Color ESPP_groundColor_OverrideDefaultValue; // 0x12B4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_75DE19B7C4B2C2D6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_75DE19B7C4B2C2D6_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_C422DE9CC617B43A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_C422DE9CC617B43A_OFFSET))(this, a1);
		}

		::System::Void Method_5_ECCE1872B868F9DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_ECCE1872B868F9DC_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_2A99139D13C42A50_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_2A99139D13C42A50_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_8D6879CAA76F6588()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_8D6879CAA76F6588_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_63D56313608AFE32(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_63D56313608AFE32_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_76ECC59BC7430042(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_76ECC59BC7430042_OFFSET))(this, a1);
		}

		::System::Void Method_5_6BA7BB45F0BA72F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_6BA7BB45F0BA72F4_OFFSET))(this);
		}

		::System::Void Method_5_76ECC59BC7430042_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_76ECC59BC7430042_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}
	};
}
