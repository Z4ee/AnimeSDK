#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/FXColorCorrectionBehaviour_Struct_2_52AD02145F5FCE3A_31.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_FxScreenLightMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class FXColorCorrection; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x15BB8960)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x15BC59B0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_4EABDB38571EED79_OFFSET UNITYSDK_OFFSET(0x15BB9D90)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x15BC59E0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_95F0B0E4A30C4E0A_OFFSET UNITYSDK_OFFSET(0x15BBAB60)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x15BC59D0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x15BC59C0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15BBA180)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15BC26C0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x15BC31B0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC55C0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FXColorCorrectionBehaviour_TypeDefinitionIndex = 81640;

	class FXColorCorrectionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::FXColorCorrectionBehaviour_Struct_2_52AD02145F5FCE3A_31 _methodParm; // 0x18
		::System::Boolean enabled; // 0x400
		::System::Boolean active_postExposure; // 0x401
		::System::Boolean use_postExposure; // 0x402
		::System::Single postExposure; // 0x404
		::System::Boolean active_contrast; // 0x408
		::System::Boolean use_contrast; // 0x409
		::System::Single contrast; // 0x40C
		::System::Boolean active_saturation; // 0x410
		::System::Boolean use_saturation; // 0x411
		::System::Single saturation; // 0x414
		::System::Boolean active_gamma; // 0x418
		::System::Boolean use_gamma; // 0x419
		::System::Single gamma; // 0x41C
		::System::Boolean active_lutInvert; // 0x420
		::System::Boolean use_lutInvert; // 0x421
		::System::Boolean lutInvert; // 0x422
		::System::Boolean active_lutToneColors; // 0x423
		::System::Boolean use_lutToneColors; // 0x424
		::System::Boolean lutToneColors; // 0x425
		::System::Boolean active_lutToneA; // 0x426
		::System::Boolean use_lutToneA; // 0x427
		::UnityEngine::Color lutToneA; // 0x428
		::System::Boolean active_lutToneB; // 0x438
		::System::Boolean use_lutToneB; // 0x439
		::UnityEngine::Color lutToneB; // 0x43C
		::System::Boolean active_lutMiddlePoint; // 0x44C
		::System::Boolean use_lutMiddlePoint; // 0x44D
		::System::Single lutMiddlePoint; // 0x450
		::System::Boolean active_lutSoftness; // 0x454
		::System::Boolean use_lutSoftness; // 0x455
		::System::Single lutSoftness; // 0x458
		::System::Boolean active_desaturate; // 0x45C
		::System::Boolean use_desaturate; // 0x45D
		::System::Single desaturate; // 0x460
		::System::Boolean active_invert; // 0x464
		::System::Boolean use_invert; // 0x465
		::System::Boolean invert; // 0x466
		::System::Boolean active_toneColors; // 0x467
		::System::Boolean use_toneColors; // 0x468
		::System::Boolean toneColors; // 0x469
		::System::Boolean active_toneA; // 0x46A
		::System::Boolean use_toneA; // 0x46B
		::UnityEngine::Color toneA; // 0x46C
		::System::Boolean active_toneB; // 0x47C
		::System::Boolean use_toneB; // 0x47D
		::UnityEngine::Color toneB; // 0x480
		::System::Boolean active_middlePoint; // 0x490
		::System::Boolean use_middlePoint; // 0x491
		::System::Single middlePoint; // 0x494
		::System::Boolean active_softness; // 0x498
		::System::Boolean use_softness; // 0x499
		::System::Single softness; // 0x49C
		::System::Boolean active_fxFogMaskPassOn; // 0x4A0
		::System::Boolean use_fxFogMaskPassOn; // 0x4A1
		::System::Boolean fxFogMaskPassOn; // 0x4A2
		::System::Boolean active_justControlParticleLight; // 0x4A3
		::System::Boolean use_justControlParticleLight; // 0x4A4
		::System::Boolean justControlParticleLight; // 0x4A5
		::System::Boolean active_localLightMultiplyIntensity; // 0x4A6
		::System::Boolean use_localLightMultiplyIntensity; // 0x4A7
		::System::Single localLightMultiplyIntensity; // 0x4A8
		::System::Boolean active_localLightThreadHold; // 0x4AC
		::System::Boolean use_localLightThreadHold; // 0x4AD
		::System::Single localLightThreadHold; // 0x4B0
		::System::Boolean active_skyVerticalGradient; // 0x4B4
		::System::Boolean use_skyVerticalGradient; // 0x4B5
		::UnityEngine::Gradient* skyVerticalGradient; // 0x4B8
		::System::Boolean active_enableLightShaft; // 0x4C0
		::System::Boolean use_enableLightShaft; // 0x4C1
		::System::Boolean enableLightShaft; // 0x4C2
		::System::Boolean active_lightShaftThreshold; // 0x4C3
		::System::Boolean use_lightShaftThreshold; // 0x4C4
		::System::Single lightShaftThreshold; // 0x4C8
		::System::Boolean active_lightShaftIntensity; // 0x4CC
		::System::Boolean use_lightShaftIntensity; // 0x4CD
		::System::Single lightShaftIntensity; // 0x4D0
		::System::Boolean active_lightShaftColorClamp; // 0x4D4
		::System::Boolean use_lightShaftColorClamp; // 0x4D5
		::System::Boolean lightShaftColorClamp; // 0x4D6
		::System::Boolean active_lightShaftColor; // 0x4D7
		::System::Boolean use_lightShaftColor; // 0x4D8
		::UnityEngine::Color lightShaftColor; // 0x4DC
		::System::Boolean active_lightShaftLength; // 0x4EC
		::System::Boolean use_lightShaftLength; // 0x4ED
		::System::Single lightShaftLength; // 0x4F0
		::System::Boolean active_lightShaftFadeLength; // 0x4F4
		::System::Boolean use_lightShaftFadeLength; // 0x4F5
		::System::Single lightShaftFadeLength; // 0x4F8
		::System::Boolean active_lightShaftBlur; // 0x4FC
		::System::Boolean use_lightShaftBlur; // 0x4FD
		::System::Boolean lightShaftBlur; // 0x4FE
		::System::Boolean active_fxScreenLightMaskOn; // 0x4FF
		::System::Boolean use_fxScreenLightMaskOn; // 0x500
		::System::Boolean fxScreenLightMaskOn; // 0x501
		::System::Boolean active_fxFxScreenLightMode; // 0x502
		::System::Boolean use_fxFxScreenLightMode; // 0x503
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode fxFxScreenLightMode; // 0x504
		::System::Boolean active_fxLightShaftMaskOn; // 0x508
		::System::Boolean use_fxLightShaftMaskOn; // 0x509
		::System::Boolean fxLightShaftMaskOn; // 0x50A
		::System::Boolean active_enableCameraClip; // 0x50B
		::System::Boolean use_enableCameraClip; // 0x50C
		::System::Boolean enableCameraClip; // 0x50D
		::System::Boolean active_cameraClipDistance; // 0x50E
		::System::Boolean use_cameraClipDistance; // 0x50F
		::System::Single cameraClipDistance; // 0x510
		::System::Boolean active_sceneSpecialPPSEffectIntensity; // 0x514
		::System::Boolean use_sceneSpecialPPSEffectIntensity; // 0x515
		::System::Single sceneSpecialPPSEffectIntensity; // 0x518
		::System::Boolean active_sceneSpecialSkySaturation; // 0x51C
		::System::Boolean use_sceneSpecialSkySaturation; // 0x51D
		::System::Single sceneSpecialSkySaturation; // 0x520
		::System::Boolean active_sceneSpecialPPSIgnoreRidus; // 0x524
		::System::Boolean use_sceneSpecialPPSIgnoreRidus; // 0x525
		::System::Single sceneSpecialPPSIgnoreRidus; // 0x528
		::System::Boolean active_sceneSpecialPPSRadiusAlphaPow; // 0x52C
		::System::Boolean use_sceneSpecialPPSRadiusAlphaPow; // 0x52D
		::System::Single sceneSpecialPPSRadiusAlphaPow; // 0x530
		::System::Boolean active_sceneSpecialPPSEmissionColor; // 0x534
		::System::Boolean use_sceneSpecialPPSEmissionColor; // 0x535
		::UnityEngine::Color sceneSpecialPPSEmissionColor; // 0x538
		::System::Boolean active_cameraClipExtension; // 0x548
		::System::Boolean use_cameraClipExtension; // 0x549
		::UnityEngine::Vector3 cameraClipExtension; // 0x54C
		::System::Boolean active_cameraClipAlpha; // 0x558
		::System::Boolean use_cameraClipAlpha; // 0x559
		::System::Single cameraClipAlpha; // 0x55C
		::System::Boolean active_weatherConfig; // 0x560
		::System::Boolean use_weatherConfig; // 0x561
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* weatherConfig; // 0x568
		::System::Boolean active_weatherConfigWeight; // 0x570
		::System::Boolean use_weatherConfigWeight; // 0x571
		::System::Single weatherConfigWeight; // 0x574
		::System::Boolean active_fxScreenLightColor; // 0x578
		::System::Boolean use_fxScreenLightColor; // 0x579
		::UnityEngine::Color fxScreenLightColor; // 0x57C
		::System::Boolean active_overrideWeatherConfig; // 0x58C
		::System::Boolean use_overrideWeatherConfig; // 0x58D
		::System::Boolean overrideWeatherConfig; // 0x58E
		::System::Boolean active_rainDropColor; // 0x58F
		::System::Boolean use_rainDropColor; // 0x590
		::UnityEngine::Color rainDropColor; // 0x594
		::System::Boolean active_wetnessNoiseClamp; // 0x5A4
		::System::Boolean use_wetnessNoiseClamp; // 0x5A5
		::UnityEngine::Vector2 wetnessNoiseClamp; // 0x5A8
		::System::Boolean active_rainDropSplashColor; // 0x5B0
		::System::Boolean use_rainDropSplashColor; // 0x5B1
		::UnityEngine::Color rainDropSplashColor; // 0x5B4
		::System::Boolean active_rainDropSplashCount; // 0x5C4
		::System::Boolean use_rainDropSplashCount; // 0x5C5
		::System::Int32 rainDropSplashCount; // 0x5C8
		::System::Boolean active_distanceFogStart; // 0x5CC
		::System::Boolean use_distanceFogStart; // 0x5CD
		::System::Single distanceFogStart; // 0x5D0
		::System::Boolean active_fogHorizontalGradient; // 0x5D4
		::System::Boolean use_fogHorizontalGradient; // 0x5D5
		::UnityEngine::Gradient* fogHorizontalGradient; // 0x5D8
		::System::Boolean active_heightFogHeight; // 0x5E0
		::System::Boolean use_heightFogHeight; // 0x5E1
		::System::Single heightFogHeight; // 0x5E4
		::System::Boolean active_heightFogStart; // 0x5E8
		::System::Boolean use_heightFogStart; // 0x5E9
		::System::Single heightFogStart; // 0x5EC
		::System::Boolean active_volumetricFogColor; // 0x5F0
		::System::Boolean use_volumetricFogColor; // 0x5F1
		::UnityEngine::Color volumetricFogColor; // 0x5F4
		::System::Boolean active_skyHorizontalGradient; // 0x604
		::System::Boolean use_skyHorizontalGradient; // 0x605
		::UnityEngine::Gradient* skyHorizontalGradient; // 0x608
		::System::Boolean active_skyHorizontalHeight; // 0x610
		::System::Boolean use_skyHorizontalHeight; // 0x611
		::System::Single skyHorizontalHeight; // 0x614
		::System::Boolean active_skyHorizontalOffset; // 0x618
		::System::Boolean use_skyHorizontalOffset; // 0x619
		::System::Single skyHorizontalOffset; // 0x61C
		::System::Boolean active_skyCloudHorizontalGradient; // 0x620
		::System::Boolean use_skyCloudHorizontalGradient; // 0x621
		::UnityEngine::Gradient* skyCloudHorizontalGradient; // 0x628
		::System::Boolean active_sunDiscColor; // 0x630
		::System::Boolean use_sunDiscColor; // 0x631
		::UnityEngine::Color sunDiscColor; // 0x634
		::System::Boolean active_layer1MiddleCloudGradient; // 0x644
		::System::Boolean use_layer1MiddleCloudGradient; // 0x645
		::UnityEngine::Gradient* layer1MiddleCloudGradient; // 0x648
		::System::Boolean active_layer1CloudAroundSunColor; // 0x650
		::System::Boolean use_layer1CloudAroundSunColor; // 0x651
		::UnityEngine::Color layer1CloudAroundSunColor; // 0x654
		::System::Boolean active_layer2MiddleCloudGradient; // 0x664
		::System::Boolean use_layer2MiddleCloudGradient; // 0x665
		::UnityEngine::Gradient* layer2MiddleCloudGradient; // 0x668
		::System::Boolean active_layer2CloudAroundSunColor; // 0x670
		::System::Boolean use_layer2CloudAroundSunColor; // 0x671
		::UnityEngine::Color layer2CloudAroundSunColor; // 0x674
		::System::Boolean active_layer3MiddleCloudGradient; // 0x684
		::System::Boolean use_layer3MiddleCloudGradient; // 0x685
		::UnityEngine::Gradient* layer3MiddleCloudGradient; // 0x688
		::System::Boolean active_layer3CloudAroundSunColor; // 0x690
		::System::Boolean use_layer3CloudAroundSunColor; // 0x691
		::UnityEngine::Color layer3CloudAroundSunColor; // 0x694
		::System::Boolean active_sceneLutContribution; // 0x6A4
		::System::Boolean use_sceneLutContribution; // 0x6A5
		::System::Single sceneLutContribution; // 0x6A8
		::System::Boolean active_ambientSkyColor; // 0x6AC
		::System::Boolean use_ambientSkyColor; // 0x6AD
		::UnityEngine::Color ambientSkyColor; // 0x6B0
		::System::Boolean active_ambientEquatorColor; // 0x6C0
		::System::Boolean use_ambientEquatorColor; // 0x6C1
		::UnityEngine::Color ambientEquatorColor; // 0x6C4
		::System::Boolean active_ambientGroundColor; // 0x6D4
		::System::Boolean use_ambientGroundColor; // 0x6D5
		::UnityEngine::Color ambientGroundColor; // 0x6D8
		::System::Boolean active_overrideWeatherGIConfig; // 0x6E8
		::System::Boolean use_overrideWeatherGIConfig; // 0x6E9
		::System::Boolean overrideWeatherGIConfig; // 0x6EA
		::System::Boolean active_skyColor; // 0x6EB
		::System::Boolean use_skyColor; // 0x6EC
		::UnityEngine::Color skyColor; // 0x6F0
		::System::Boolean active_middleColor; // 0x700
		::System::Boolean use_middleColor; // 0x701
		::UnityEngine::Color middleColor; // 0x704
		::System::Boolean active_groundColor; // 0x714
		::System::Boolean use_groundColor; // 0x715
		::UnityEngine::Color groundColor; // 0x718
		::System::Boolean active_indirectSpecularIntensity; // 0x728
		::System::Boolean use_indirectSpecularIntensity; // 0x729
		::System::Single indirectSpecularIntensity; // 0x72C
		::System::Boolean active_fxColorSaturation; // 0x730
		::System::Boolean use_fxColorSaturation; // 0x731
		::System::Single fxColorSaturation; // 0x734
		::System::Boolean active_lightShaftUseCustomCenter; // 0x738
		::System::Boolean use_lightShaftUseCustomCenter; // 0x739
		::System::Boolean lightShaftUseCustomCenter; // 0x73A
		::System::Boolean active_lightShaftCustomCenter; // 0x73B
		::System::Boolean use_lightShaftCustomCenter; // 0x73C
		::UnityEngine::Vector2 lightShaftCustomCenter; // 0x740
		::System::Boolean active_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x748
		::System::Boolean use_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x749
		::System::Boolean sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x74A
		::System::Boolean active_sceneSpecialPPSGBufferSaturation; // 0x74B
		::System::Boolean use_sceneSpecialPPSGBufferSaturation; // 0x74C
		::System::Single sceneSpecialPPSGBufferSaturation; // 0x750
		::System::Boolean active_sceneSpecialPPSUseSaturationLut; // 0x754
		::System::Boolean use_sceneSpecialPPSUseSaturationLut; // 0x755
		::System::Boolean sceneSpecialPPSUseSaturationLut; // 0x756
		::System::Boolean active_sceneSpecialPPSSaturationLut; // 0x757
		::System::Boolean use_sceneSpecialPPSSaturationLut; // 0x758
		::UnityEngine::Texture* sceneSpecialPPSSaturationLut; // 0x760
		::System::Boolean active_sceneSpecialPPSSaturationRampGap; // 0x768
		::System::Boolean use_sceneSpecialPPSSaturationRampGap; // 0x769
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampGap; // 0x76C
		::System::Boolean active_sceneSpecialPPSSaturationRampValue; // 0x77C
		::System::Boolean use_sceneSpecialPPSSaturationRampValue; // 0x77D
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampValue; // 0x780
		::System::Boolean active_sceneSpecialPPSSaturationRampGap2; // 0x790
		::System::Boolean use_sceneSpecialPPSSaturationRampGap2; // 0x791
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampGap2; // 0x794
		::System::Boolean active_sceneSpecialPPSSaturationRampValue2; // 0x7A4
		::System::Boolean use_sceneSpecialPPSSaturationRampValue2; // 0x7A5
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampValue2; // 0x7A8
		::System::Boolean active_sceneSpecialPPSSaturationRampGap3; // 0x7B8
		::System::Boolean use_sceneSpecialPPSSaturationRampGap3; // 0x7B9
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampGap3; // 0x7BC
		::System::Boolean active_sceneSpecialPPSSaturationRampValue3; // 0x7CC
		::System::Boolean use_sceneSpecialPPSSaturationRampValue3; // 0x7CD
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampValue3; // 0x7D0
		::System::Boolean active_applySaturationLutToUberPost; // 0x7E0
		::System::Boolean use_applySaturationLutToUberPost; // 0x7E1
		::System::Boolean applySaturationLutToUberPost; // 0x7E2
		::System::Boolean active_ForceUseMsaa; // 0x7E3
		::System::Boolean use_ForceUseMsaa; // 0x7E4
		::System::Boolean ForceUseMsaa; // 0x7E5
		::UnityEngine::Rendering::Universal::FXColorCorrection* _FXColorCorrection; // 0x7E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::FXColorCorrection* Method_4_4EABDB38571EED79(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::FXColorCorrection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_4EABDB38571EED79_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_95F0B0E4A30C4E0A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_95F0B0E4A30C4E0A_OFFSET))(this);
		}
	};
}
