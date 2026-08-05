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
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class FXColorCorrection; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x16895900)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x168A0190)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_4EABDB38571EED79_OFFSET UNITYSDK_OFFSET(0x16896890)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x168A0160)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_68160D9981ECFFF0_OFFSET UNITYSDK_OFFSET(0x16897460)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x168A0180)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x168A0170)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x16896C80)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1689D9E0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1689E2E0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1689FEE0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FXColorCorrectionBehaviour_TypeDefinitionIndex = 78996;

	class FXColorCorrectionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::FXColorCorrectionBehaviour_Struct_2_52AD02145F5FCE3A_27 _methodParm; // 0x18
		::System::Boolean enabled; // 0x2D0
		::System::Boolean active_postExposure; // 0x2D1
		::System::Boolean use_postExposure; // 0x2D2
		::System::Single postExposure; // 0x2D4
		::System::Boolean active_contrast; // 0x2D8
		::System::Boolean use_contrast; // 0x2D9
		::System::Single contrast; // 0x2DC
		::System::Boolean active_saturation; // 0x2E0
		::System::Boolean use_saturation; // 0x2E1
		::System::Single saturation; // 0x2E4
		::System::Boolean active_gamma; // 0x2E8
		::System::Boolean use_gamma; // 0x2E9
		::System::Single gamma; // 0x2EC
		::System::Boolean active_lutInvert; // 0x2F0
		::System::Boolean use_lutInvert; // 0x2F1
		::System::Boolean lutInvert; // 0x2F2
		::System::Boolean active_lutToneColors; // 0x2F3
		::System::Boolean use_lutToneColors; // 0x2F4
		::System::Boolean lutToneColors; // 0x2F5
		::System::Boolean active_lutToneA; // 0x2F6
		::System::Boolean use_lutToneA; // 0x2F7
		::UnityEngine::Color lutToneA; // 0x2F8
		::System::Boolean active_lutToneB; // 0x308
		::System::Boolean use_lutToneB; // 0x309
		::UnityEngine::Color lutToneB; // 0x30C
		::System::Boolean active_lutMiddlePoint; // 0x31C
		::System::Boolean use_lutMiddlePoint; // 0x31D
		::System::Single lutMiddlePoint; // 0x320
		::System::Boolean active_lutSoftness; // 0x324
		::System::Boolean use_lutSoftness; // 0x325
		::System::Single lutSoftness; // 0x328
		::System::Boolean active_desaturate; // 0x32C
		::System::Boolean use_desaturate; // 0x32D
		::System::Single desaturate; // 0x330
		::System::Boolean active_invert; // 0x334
		::System::Boolean use_invert; // 0x335
		::System::Boolean invert; // 0x336
		::System::Boolean active_toneColors; // 0x337
		::System::Boolean use_toneColors; // 0x338
		::System::Boolean toneColors; // 0x339
		::System::Boolean active_toneA; // 0x33A
		::System::Boolean use_toneA; // 0x33B
		::UnityEngine::Color toneA; // 0x33C
		::System::Boolean active_toneB; // 0x34C
		::System::Boolean use_toneB; // 0x34D
		::UnityEngine::Color toneB; // 0x350
		::System::Boolean active_middlePoint; // 0x360
		::System::Boolean use_middlePoint; // 0x361
		::System::Single middlePoint; // 0x364
		::System::Boolean active_softness; // 0x368
		::System::Boolean use_softness; // 0x369
		::System::Single softness; // 0x36C
		::System::Boolean active_fxFogMaskPassOn; // 0x370
		::System::Boolean use_fxFogMaskPassOn; // 0x371
		::System::Boolean fxFogMaskPassOn; // 0x372
		::System::Boolean active_justControlParticleLight; // 0x373
		::System::Boolean use_justControlParticleLight; // 0x374
		::System::Boolean justControlParticleLight; // 0x375
		::System::Boolean active_localLightMultiplyIntensity; // 0x376
		::System::Boolean use_localLightMultiplyIntensity; // 0x377
		::System::Single localLightMultiplyIntensity; // 0x378
		::System::Boolean active_localLightThreadHold; // 0x37C
		::System::Boolean use_localLightThreadHold; // 0x37D
		::System::Single localLightThreadHold; // 0x380
		::System::Boolean active_enableLightShaft; // 0x384
		::System::Boolean use_enableLightShaft; // 0x385
		::System::Boolean enableLightShaft; // 0x386
		::System::Boolean active_lightShaftThreshold; // 0x387
		::System::Boolean use_lightShaftThreshold; // 0x388
		::System::Single lightShaftThreshold; // 0x38C
		::System::Boolean active_lightShaftIntensity; // 0x390
		::System::Boolean use_lightShaftIntensity; // 0x391
		::System::Single lightShaftIntensity; // 0x394
		::System::Boolean active_lightShaftColorClamp; // 0x398
		::System::Boolean use_lightShaftColorClamp; // 0x399
		::System::Boolean lightShaftColorClamp; // 0x39A
		::System::Boolean active_lightShaftColor; // 0x39B
		::System::Boolean use_lightShaftColor; // 0x39C
		::UnityEngine::Color lightShaftColor; // 0x3A0
		::System::Boolean active_lightShaftLength; // 0x3B0
		::System::Boolean use_lightShaftLength; // 0x3B1
		::System::Single lightShaftLength; // 0x3B4
		::System::Boolean active_lightShaftFadeLength; // 0x3B8
		::System::Boolean use_lightShaftFadeLength; // 0x3B9
		::System::Single lightShaftFadeLength; // 0x3BC
		::System::Boolean active_lightShaftBlur; // 0x3C0
		::System::Boolean use_lightShaftBlur; // 0x3C1
		::System::Boolean lightShaftBlur; // 0x3C2
		::System::Boolean active_fxScreenLightMaskOn; // 0x3C3
		::System::Boolean use_fxScreenLightMaskOn; // 0x3C4
		::System::Boolean fxScreenLightMaskOn; // 0x3C5
		::System::Boolean active_fxFxScreenLightMode; // 0x3C6
		::System::Boolean use_fxFxScreenLightMode; // 0x3C7
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode fxFxScreenLightMode; // 0x3C8
		::System::Boolean active_fxLightShaftMaskOn; // 0x3CC
		::System::Boolean use_fxLightShaftMaskOn; // 0x3CD
		::System::Boolean fxLightShaftMaskOn; // 0x3CE
		::System::Boolean active_enableCameraClip; // 0x3CF
		::System::Boolean use_enableCameraClip; // 0x3D0
		::System::Boolean enableCameraClip; // 0x3D1
		::System::Boolean active_cameraClipDistance; // 0x3D2
		::System::Boolean use_cameraClipDistance; // 0x3D3
		::System::Single cameraClipDistance; // 0x3D4
		::System::Boolean active_sceneSpecialPPSEffectIntensity; // 0x3D8
		::System::Boolean use_sceneSpecialPPSEffectIntensity; // 0x3D9
		::System::Single sceneSpecialPPSEffectIntensity; // 0x3DC
		::System::Boolean active_sceneSpecialSkySaturation; // 0x3E0
		::System::Boolean use_sceneSpecialSkySaturation; // 0x3E1
		::System::Single sceneSpecialSkySaturation; // 0x3E4
		::System::Boolean active_sceneSpecialPPSIgnoreRidus; // 0x3E8
		::System::Boolean use_sceneSpecialPPSIgnoreRidus; // 0x3E9
		::System::Single sceneSpecialPPSIgnoreRidus; // 0x3EC
		::System::Boolean active_sceneSpecialPPSRadiusAlphaPow; // 0x3F0
		::System::Boolean use_sceneSpecialPPSRadiusAlphaPow; // 0x3F1
		::System::Single sceneSpecialPPSRadiusAlphaPow; // 0x3F4
		::System::Boolean active_sceneSpecialPPSEmissionColor; // 0x3F8
		::System::Boolean use_sceneSpecialPPSEmissionColor; // 0x3F9
		::UnityEngine::Color sceneSpecialPPSEmissionColor; // 0x3FC
		::System::Boolean active_cameraClipExtension; // 0x40C
		::System::Boolean use_cameraClipExtension; // 0x40D
		::UnityEngine::Vector3 cameraClipExtension; // 0x410
		::System::Boolean active_cameraClipAlpha; // 0x41C
		::System::Boolean use_cameraClipAlpha; // 0x41D
		::System::Single cameraClipAlpha; // 0x420
		::System::Boolean active_weatherConfig; // 0x424
		::System::Boolean use_weatherConfig; // 0x425
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* weatherConfig; // 0x428
		::System::Boolean active_weatherConfigWeight; // 0x430
		::System::Boolean use_weatherConfigWeight; // 0x431
		::System::Single weatherConfigWeight; // 0x434
		::System::Boolean active_fxScreenLightColor; // 0x438
		::System::Boolean use_fxScreenLightColor; // 0x439
		::UnityEngine::Color fxScreenLightColor; // 0x43C
		::System::Boolean active_overrideWeatherGIConfig; // 0x44C
		::System::Boolean use_overrideWeatherGIConfig; // 0x44D
		::System::Boolean overrideWeatherGIConfig; // 0x44E
		::System::Boolean active_skyColor; // 0x44F
		::System::Boolean use_skyColor; // 0x450
		::UnityEngine::Color skyColor; // 0x454
		::System::Boolean active_middleColor; // 0x464
		::System::Boolean use_middleColor; // 0x465
		::UnityEngine::Color middleColor; // 0x468
		::System::Boolean active_groundColor; // 0x478
		::System::Boolean use_groundColor; // 0x479
		::UnityEngine::Color groundColor; // 0x47C
		::System::Boolean active_indirectSpecularIntensity; // 0x48C
		::System::Boolean use_indirectSpecularIntensity; // 0x48D
		::System::Single indirectSpecularIntensity; // 0x490
		::System::Boolean active_fxColorSaturation; // 0x494
		::System::Boolean use_fxColorSaturation; // 0x495
		::System::Single fxColorSaturation; // 0x498
		::System::Boolean active_lightShaftUseCustomCenter; // 0x49C
		::System::Boolean use_lightShaftUseCustomCenter; // 0x49D
		::System::Boolean lightShaftUseCustomCenter; // 0x49E
		::System::Boolean active_lightShaftCustomCenter; // 0x49F
		::System::Boolean use_lightShaftCustomCenter; // 0x4A0
		::UnityEngine::Vector2 lightShaftCustomCenter; // 0x4A4
		::System::Boolean active_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x4AC
		::System::Boolean use_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x4AD
		::System::Boolean sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x4AE
		::System::Boolean active_sceneSpecialPPSGBufferSaturation; // 0x4AF
		::System::Boolean use_sceneSpecialPPSGBufferSaturation; // 0x4B0
		::System::Single sceneSpecialPPSGBufferSaturation; // 0x4B4
		::System::Boolean active_sceneSpecialPPSUseSaturationLut; // 0x4B8
		::System::Boolean use_sceneSpecialPPSUseSaturationLut; // 0x4B9
		::System::Boolean sceneSpecialPPSUseSaturationLut; // 0x4BA
		::System::Boolean active_sceneSpecialPPSSaturationLut; // 0x4BB
		::System::Boolean use_sceneSpecialPPSSaturationLut; // 0x4BC
		::UnityEngine::Texture* sceneSpecialPPSSaturationLut; // 0x4C0
		::System::Boolean active_sceneSpecialPPSSaturationRampGap; // 0x4C8
		::System::Boolean use_sceneSpecialPPSSaturationRampGap; // 0x4C9
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampGap; // 0x4CC
		::System::Boolean active_sceneSpecialPPSSaturationRampValue; // 0x4DC
		::System::Boolean use_sceneSpecialPPSSaturationRampValue; // 0x4DD
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampValue; // 0x4E0
		::System::Boolean active_sceneSpecialPPSSaturationRampGap2; // 0x4F0
		::System::Boolean use_sceneSpecialPPSSaturationRampGap2; // 0x4F1
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampGap2; // 0x4F4
		::System::Boolean active_sceneSpecialPPSSaturationRampValue2; // 0x504
		::System::Boolean use_sceneSpecialPPSSaturationRampValue2; // 0x505
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampValue2; // 0x508
		::System::Boolean active_sceneSpecialPPSSaturationRampGap3; // 0x518
		::System::Boolean use_sceneSpecialPPSSaturationRampGap3; // 0x519
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampGap3; // 0x51C
		::System::Boolean active_sceneSpecialPPSSaturationRampValue3; // 0x52C
		::System::Boolean use_sceneSpecialPPSSaturationRampValue3; // 0x52D
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampValue3; // 0x530
		::System::Boolean active_applySaturationLutToUberPost; // 0x540
		::System::Boolean use_applySaturationLutToUberPost; // 0x541
		::System::Boolean applySaturationLutToUberPost; // 0x542
		::System::Boolean active_ForceUseMsaa; // 0x543
		::System::Boolean use_ForceUseMsaa; // 0x544
		::System::Boolean ForceUseMsaa; // 0x545
		::System::Boolean active_useLutWithMask; // 0x546
		::System::Boolean use_useLutWithMask; // 0x547
		::System::Boolean useLutWithMask; // 0x548
		::System::Boolean active_lutWithMaskTex; // 0x549
		::System::Boolean use_lutWithMaskTex; // 0x54A
		::UnityEngine::Texture* lutWithMaskTex; // 0x550
		::System::Boolean active_lutWithMaskContribution; // 0x558
		::System::Boolean use_lutWithMaskContribution; // 0x559
		::System::Single lutWithMaskContribution; // 0x55C
		::System::Boolean active_lightShaftIgnoreSceneDepthMask; // 0x560
		::System::Boolean use_lightShaftIgnoreSceneDepthMask; // 0x561
		::System::Boolean lightShaftIgnoreSceneDepthMask; // 0x562
		::System::Boolean active_cameraClipFxExtraExtension; // 0x563
		::System::Boolean use_cameraClipFxExtraExtension; // 0x564
		::UnityEngine::Vector3 cameraClipFxExtraExtension; // 0x568
		::System::Boolean active_enableLocalLightControl; // 0x574
		::System::Boolean use_enableLocalLightControl; // 0x575
		::System::Boolean enableLocalLightControl; // 0x576
		::System::Boolean active_localLightIntensityMultiplier; // 0x577
		::System::Boolean use_localLightIntensityMultiplier; // 0x578
		::System::Single localLightIntensityMultiplier; // 0x57C
		::UnityEngine::Rendering::Universal::FXColorCorrection* _FXColorCorrection; // 0x580

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

		::System::Void Method_4_68160D9981ECFFF0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_68160D9981ECFFF0_OFFSET))(this);
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

		::UnityEngine::Rendering::Universal::FXColorCorrection* Method_4_4EABDB38571EED79(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::FXColorCorrection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_4EABDB38571EED79_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}
	};
}
