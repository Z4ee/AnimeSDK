#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/FXColorCorrectionBehaviour_Struct_2_52AD02145F5FCE3A_27.h"
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

#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1A1AF3A0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1A1BCC70)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_4EABDB38571EED79_OFFSET UNITYSDK_OFFSET(0x1A1B0870)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x1A1BCC80)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_95F0B0E4A30C4E0A_OFFSET UNITYSDK_OFFSET(0x1A1B16B0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x1A1BCCA0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x1A1BCC90)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1A1B0C60)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A1B9800)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A1BA360)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BC870)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FXColorCorrectionBehaviour_TypeDefinitionIndex = 76203;

	class FXColorCorrectionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::FXColorCorrectionBehaviour_Struct_2_52AD02145F5FCE3A_27 _methodParm; // 0x18
		::System::Boolean enabled; // 0x420
		::System::Boolean active_postExposure; // 0x421
		::System::Boolean use_postExposure; // 0x422
		::System::Single postExposure; // 0x424
		::System::Boolean active_contrast; // 0x428
		::System::Boolean use_contrast; // 0x429
		::System::Single contrast; // 0x42C
		::System::Boolean active_saturation; // 0x430
		::System::Boolean use_saturation; // 0x431
		::System::Single saturation; // 0x434
		::System::Boolean active_gamma; // 0x438
		::System::Boolean use_gamma; // 0x439
		::System::Single gamma; // 0x43C
		::System::Boolean active_lutInvert; // 0x440
		::System::Boolean use_lutInvert; // 0x441
		::System::Boolean lutInvert; // 0x442
		::System::Boolean active_lutToneColors; // 0x443
		::System::Boolean use_lutToneColors; // 0x444
		::System::Boolean lutToneColors; // 0x445
		::System::Boolean active_lutToneA; // 0x446
		::System::Boolean use_lutToneA; // 0x447
		::UnityEngine::Color lutToneA; // 0x448
		::System::Boolean active_lutToneB; // 0x458
		::System::Boolean use_lutToneB; // 0x459
		::UnityEngine::Color lutToneB; // 0x45C
		::System::Boolean active_lutMiddlePoint; // 0x46C
		::System::Boolean use_lutMiddlePoint; // 0x46D
		::System::Single lutMiddlePoint; // 0x470
		::System::Boolean active_lutSoftness; // 0x474
		::System::Boolean use_lutSoftness; // 0x475
		::System::Single lutSoftness; // 0x478
		::System::Boolean active_desaturate; // 0x47C
		::System::Boolean use_desaturate; // 0x47D
		::System::Single desaturate; // 0x480
		::System::Boolean active_invert; // 0x484
		::System::Boolean use_invert; // 0x485
		::System::Boolean invert; // 0x486
		::System::Boolean active_toneColors; // 0x487
		::System::Boolean use_toneColors; // 0x488
		::System::Boolean toneColors; // 0x489
		::System::Boolean active_toneA; // 0x48A
		::System::Boolean use_toneA; // 0x48B
		::UnityEngine::Color toneA; // 0x48C
		::System::Boolean active_toneB; // 0x49C
		::System::Boolean use_toneB; // 0x49D
		::UnityEngine::Color toneB; // 0x4A0
		::System::Boolean active_middlePoint; // 0x4B0
		::System::Boolean use_middlePoint; // 0x4B1
		::System::Single middlePoint; // 0x4B4
		::System::Boolean active_softness; // 0x4B8
		::System::Boolean use_softness; // 0x4B9
		::System::Single softness; // 0x4BC
		::System::Boolean active_fxFogMaskPassOn; // 0x4C0
		::System::Boolean use_fxFogMaskPassOn; // 0x4C1
		::System::Boolean fxFogMaskPassOn; // 0x4C2
		::System::Boolean active_justControlParticleLight; // 0x4C3
		::System::Boolean use_justControlParticleLight; // 0x4C4
		::System::Boolean justControlParticleLight; // 0x4C5
		::System::Boolean active_localLightMultiplyIntensity; // 0x4C6
		::System::Boolean use_localLightMultiplyIntensity; // 0x4C7
		::System::Single localLightMultiplyIntensity; // 0x4C8
		::System::Boolean active_localLightThreadHold; // 0x4CC
		::System::Boolean use_localLightThreadHold; // 0x4CD
		::System::Single localLightThreadHold; // 0x4D0
		::System::Boolean active_skyVerticalGradient; // 0x4D4
		::System::Boolean use_skyVerticalGradient; // 0x4D5
		::UnityEngine::Gradient* skyVerticalGradient; // 0x4D8
		::System::Boolean active_enableLightShaft; // 0x4E0
		::System::Boolean use_enableLightShaft; // 0x4E1
		::System::Boolean enableLightShaft; // 0x4E2
		::System::Boolean active_lightShaftThreshold; // 0x4E3
		::System::Boolean use_lightShaftThreshold; // 0x4E4
		::System::Single lightShaftThreshold; // 0x4E8
		::System::Boolean active_lightShaftIntensity; // 0x4EC
		::System::Boolean use_lightShaftIntensity; // 0x4ED
		::System::Single lightShaftIntensity; // 0x4F0
		::System::Boolean active_lightShaftColorClamp; // 0x4F4
		::System::Boolean use_lightShaftColorClamp; // 0x4F5
		::System::Boolean lightShaftColorClamp; // 0x4F6
		::System::Boolean active_lightShaftColor; // 0x4F7
		::System::Boolean use_lightShaftColor; // 0x4F8
		::UnityEngine::Color lightShaftColor; // 0x4FC
		::System::Boolean active_lightShaftLength; // 0x50C
		::System::Boolean use_lightShaftLength; // 0x50D
		::System::Single lightShaftLength; // 0x510
		::System::Boolean active_lightShaftFadeLength; // 0x514
		::System::Boolean use_lightShaftFadeLength; // 0x515
		::System::Single lightShaftFadeLength; // 0x518
		::System::Boolean active_lightShaftBlur; // 0x51C
		::System::Boolean use_lightShaftBlur; // 0x51D
		::System::Boolean lightShaftBlur; // 0x51E
		::System::Boolean active_fxScreenLightMaskOn; // 0x51F
		::System::Boolean use_fxScreenLightMaskOn; // 0x520
		::System::Boolean fxScreenLightMaskOn; // 0x521
		::System::Boolean active_fxFxScreenLightMode; // 0x522
		::System::Boolean use_fxFxScreenLightMode; // 0x523
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode fxFxScreenLightMode; // 0x524
		::System::Boolean active_fxLightShaftMaskOn; // 0x528
		::System::Boolean use_fxLightShaftMaskOn; // 0x529
		::System::Boolean fxLightShaftMaskOn; // 0x52A
		::System::Boolean active_enableCameraClip; // 0x52B
		::System::Boolean use_enableCameraClip; // 0x52C
		::System::Boolean enableCameraClip; // 0x52D
		::System::Boolean active_cameraClipDistance; // 0x52E
		::System::Boolean use_cameraClipDistance; // 0x52F
		::System::Single cameraClipDistance; // 0x530
		::System::Boolean active_sceneSpecialPPSEffectIntensity; // 0x534
		::System::Boolean use_sceneSpecialPPSEffectIntensity; // 0x535
		::System::Single sceneSpecialPPSEffectIntensity; // 0x538
		::System::Boolean active_sceneSpecialSkySaturation; // 0x53C
		::System::Boolean use_sceneSpecialSkySaturation; // 0x53D
		::System::Single sceneSpecialSkySaturation; // 0x540
		::System::Boolean active_sceneSpecialPPSIgnoreRidus; // 0x544
		::System::Boolean use_sceneSpecialPPSIgnoreRidus; // 0x545
		::System::Single sceneSpecialPPSIgnoreRidus; // 0x548
		::System::Boolean active_sceneSpecialPPSRadiusAlphaPow; // 0x54C
		::System::Boolean use_sceneSpecialPPSRadiusAlphaPow; // 0x54D
		::System::Single sceneSpecialPPSRadiusAlphaPow; // 0x550
		::System::Boolean active_sceneSpecialPPSEmissionColor; // 0x554
		::System::Boolean use_sceneSpecialPPSEmissionColor; // 0x555
		::UnityEngine::Color sceneSpecialPPSEmissionColor; // 0x558
		::System::Boolean active_cameraClipExtension; // 0x568
		::System::Boolean use_cameraClipExtension; // 0x569
		::UnityEngine::Vector3 cameraClipExtension; // 0x56C
		::System::Boolean active_cameraClipAlpha; // 0x578
		::System::Boolean use_cameraClipAlpha; // 0x579
		::System::Single cameraClipAlpha; // 0x57C
		::System::Boolean active_weatherConfig; // 0x580
		::System::Boolean use_weatherConfig; // 0x581
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* weatherConfig; // 0x588
		::System::Boolean active_weatherConfigWeight; // 0x590
		::System::Boolean use_weatherConfigWeight; // 0x591
		::System::Single weatherConfigWeight; // 0x594
		::System::Boolean active_fxScreenLightColor; // 0x598
		::System::Boolean use_fxScreenLightColor; // 0x599
		::UnityEngine::Color fxScreenLightColor; // 0x59C
		::System::Boolean active_overrideWeatherConfig; // 0x5AC
		::System::Boolean use_overrideWeatherConfig; // 0x5AD
		::System::Boolean overrideWeatherConfig; // 0x5AE
		::System::Boolean active_rainDropColor; // 0x5AF
		::System::Boolean use_rainDropColor; // 0x5B0
		::UnityEngine::Color rainDropColor; // 0x5B4
		::System::Boolean active_wetnessNoiseClamp; // 0x5C4
		::System::Boolean use_wetnessNoiseClamp; // 0x5C5
		::UnityEngine::Vector2 wetnessNoiseClamp; // 0x5C8
		::System::Boolean active_rainDropSplashColor; // 0x5D0
		::System::Boolean use_rainDropSplashColor; // 0x5D1
		::UnityEngine::Color rainDropSplashColor; // 0x5D4
		::System::Boolean active_rainDropSplashCount; // 0x5E4
		::System::Boolean use_rainDropSplashCount; // 0x5E5
		::System::Int32 rainDropSplashCount; // 0x5E8
		::System::Boolean active_distanceFogStart; // 0x5EC
		::System::Boolean use_distanceFogStart; // 0x5ED
		::System::Single distanceFogStart; // 0x5F0
		::System::Boolean active_fogHorizontalGradient; // 0x5F4
		::System::Boolean use_fogHorizontalGradient; // 0x5F5
		::UnityEngine::Gradient* fogHorizontalGradient; // 0x5F8
		::System::Boolean active_heightFogHeight; // 0x600
		::System::Boolean use_heightFogHeight; // 0x601
		::System::Single heightFogHeight; // 0x604
		::System::Boolean active_heightFogStart; // 0x608
		::System::Boolean use_heightFogStart; // 0x609
		::System::Single heightFogStart; // 0x60C
		::System::Boolean active_volumetricFogColor; // 0x610
		::System::Boolean use_volumetricFogColor; // 0x611
		::UnityEngine::Color volumetricFogColor; // 0x614
		::System::Boolean active_skyHorizontalGradient; // 0x624
		::System::Boolean use_skyHorizontalGradient; // 0x625
		::UnityEngine::Gradient* skyHorizontalGradient; // 0x628
		::System::Boolean active_skyHorizontalHeight; // 0x630
		::System::Boolean use_skyHorizontalHeight; // 0x631
		::System::Single skyHorizontalHeight; // 0x634
		::System::Boolean active_skyHorizontalOffset; // 0x638
		::System::Boolean use_skyHorizontalOffset; // 0x639
		::System::Single skyHorizontalOffset; // 0x63C
		::System::Boolean active_skyCloudHorizontalGradient; // 0x640
		::System::Boolean use_skyCloudHorizontalGradient; // 0x641
		::UnityEngine::Gradient* skyCloudHorizontalGradient; // 0x648
		::System::Boolean active_sunDiscColor; // 0x650
		::System::Boolean use_sunDiscColor; // 0x651
		::UnityEngine::Color sunDiscColor; // 0x654
		::System::Boolean active_layer1MiddleCloudGradient; // 0x664
		::System::Boolean use_layer1MiddleCloudGradient; // 0x665
		::UnityEngine::Gradient* layer1MiddleCloudGradient; // 0x668
		::System::Boolean active_layer1CloudAroundSunColor; // 0x670
		::System::Boolean use_layer1CloudAroundSunColor; // 0x671
		::UnityEngine::Color layer1CloudAroundSunColor; // 0x674
		::System::Boolean active_layer2MiddleCloudGradient; // 0x684
		::System::Boolean use_layer2MiddleCloudGradient; // 0x685
		::UnityEngine::Gradient* layer2MiddleCloudGradient; // 0x688
		::System::Boolean active_layer2CloudAroundSunColor; // 0x690
		::System::Boolean use_layer2CloudAroundSunColor; // 0x691
		::UnityEngine::Color layer2CloudAroundSunColor; // 0x694
		::System::Boolean active_layer3MiddleCloudGradient; // 0x6A4
		::System::Boolean use_layer3MiddleCloudGradient; // 0x6A5
		::UnityEngine::Gradient* layer3MiddleCloudGradient; // 0x6A8
		::System::Boolean active_layer3CloudAroundSunColor; // 0x6B0
		::System::Boolean use_layer3CloudAroundSunColor; // 0x6B1
		::UnityEngine::Color layer3CloudAroundSunColor; // 0x6B4
		::System::Boolean active_sceneLutContribution; // 0x6C4
		::System::Boolean use_sceneLutContribution; // 0x6C5
		::System::Single sceneLutContribution; // 0x6C8
		::System::Boolean active_ambientSkyColor; // 0x6CC
		::System::Boolean use_ambientSkyColor; // 0x6CD
		::UnityEngine::Color ambientSkyColor; // 0x6D0
		::System::Boolean active_ambientEquatorColor; // 0x6E0
		::System::Boolean use_ambientEquatorColor; // 0x6E1
		::UnityEngine::Color ambientEquatorColor; // 0x6E4
		::System::Boolean active_ambientGroundColor; // 0x6F4
		::System::Boolean use_ambientGroundColor; // 0x6F5
		::UnityEngine::Color ambientGroundColor; // 0x6F8
		::System::Boolean active_overrideWeatherGIConfig; // 0x708
		::System::Boolean use_overrideWeatherGIConfig; // 0x709
		::System::Boolean overrideWeatherGIConfig; // 0x70A
		::System::Boolean active_skyColor; // 0x70B
		::System::Boolean use_skyColor; // 0x70C
		::UnityEngine::Color skyColor; // 0x710
		::System::Boolean active_middleColor; // 0x720
		::System::Boolean use_middleColor; // 0x721
		::UnityEngine::Color middleColor; // 0x724
		::System::Boolean active_groundColor; // 0x734
		::System::Boolean use_groundColor; // 0x735
		::UnityEngine::Color groundColor; // 0x738
		::System::Boolean active_indirectSpecularIntensity; // 0x748
		::System::Boolean use_indirectSpecularIntensity; // 0x749
		::System::Single indirectSpecularIntensity; // 0x74C
		::System::Boolean active_fxColorSaturation; // 0x750
		::System::Boolean use_fxColorSaturation; // 0x751
		::System::Single fxColorSaturation; // 0x754
		::System::Boolean active_lightShaftUseCustomCenter; // 0x758
		::System::Boolean use_lightShaftUseCustomCenter; // 0x759
		::System::Boolean lightShaftUseCustomCenter; // 0x75A
		::System::Boolean active_lightShaftCustomCenter; // 0x75B
		::System::Boolean use_lightShaftCustomCenter; // 0x75C
		::UnityEngine::Vector2 lightShaftCustomCenter; // 0x760
		::System::Boolean active_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x768
		::System::Boolean use_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x769
		::System::Boolean sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x76A
		::System::Boolean active_sceneSpecialPPSGBufferSaturation; // 0x76B
		::System::Boolean use_sceneSpecialPPSGBufferSaturation; // 0x76C
		::System::Single sceneSpecialPPSGBufferSaturation; // 0x770
		::System::Boolean active_sceneSpecialPPSUseSaturationLut; // 0x774
		::System::Boolean use_sceneSpecialPPSUseSaturationLut; // 0x775
		::System::Boolean sceneSpecialPPSUseSaturationLut; // 0x776
		::System::Boolean active_sceneSpecialPPSSaturationLut; // 0x777
		::System::Boolean use_sceneSpecialPPSSaturationLut; // 0x778
		::UnityEngine::Texture* sceneSpecialPPSSaturationLut; // 0x780
		::System::Boolean active_sceneSpecialPPSSaturationRampGap; // 0x788
		::System::Boolean use_sceneSpecialPPSSaturationRampGap; // 0x789
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampGap; // 0x78C
		::System::Boolean active_sceneSpecialPPSSaturationRampValue; // 0x79C
		::System::Boolean use_sceneSpecialPPSSaturationRampValue; // 0x79D
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampValue; // 0x7A0
		::System::Boolean active_sceneSpecialPPSSaturationRampGap2; // 0x7B0
		::System::Boolean use_sceneSpecialPPSSaturationRampGap2; // 0x7B1
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampGap2; // 0x7B4
		::System::Boolean active_sceneSpecialPPSSaturationRampValue2; // 0x7C4
		::System::Boolean use_sceneSpecialPPSSaturationRampValue2; // 0x7C5
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampValue2; // 0x7C8
		::System::Boolean active_sceneSpecialPPSSaturationRampGap3; // 0x7D8
		::System::Boolean use_sceneSpecialPPSSaturationRampGap3; // 0x7D9
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampGap3; // 0x7DC
		::System::Boolean active_sceneSpecialPPSSaturationRampValue3; // 0x7EC
		::System::Boolean use_sceneSpecialPPSSaturationRampValue3; // 0x7ED
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampValue3; // 0x7F0
		::System::Boolean active_applySaturationLutToUberPost; // 0x800
		::System::Boolean use_applySaturationLutToUberPost; // 0x801
		::System::Boolean applySaturationLutToUberPost; // 0x802
		::System::Boolean active_ForceUseMsaa; // 0x803
		::System::Boolean use_ForceUseMsaa; // 0x804
		::System::Boolean ForceUseMsaa; // 0x805
		::System::Boolean active_useLutWithMask; // 0x806
		::System::Boolean use_useLutWithMask; // 0x807
		::System::Boolean useLutWithMask; // 0x808
		::System::Boolean active_lutWithMaskTex; // 0x809
		::System::Boolean use_lutWithMaskTex; // 0x80A
		::UnityEngine::Texture* lutWithMaskTex; // 0x810
		::System::Boolean active_lutWithMaskContribution; // 0x818
		::System::Boolean use_lutWithMaskContribution; // 0x819
		::System::Single lutWithMaskContribution; // 0x81C
		::System::Boolean active_lightShaftIgnoreSceneDepthMask; // 0x820
		::System::Boolean use_lightShaftIgnoreSceneDepthMask; // 0x821
		::System::Boolean lightShaftIgnoreSceneDepthMask; // 0x822
		::UnityEngine::Rendering::Universal::FXColorCorrection* _FXColorCorrection; // 0x828

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

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_95F0B0E4A30C4E0A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_95F0B0E4A30C4E0A_OFFSET))(this);
		}
	};
}
