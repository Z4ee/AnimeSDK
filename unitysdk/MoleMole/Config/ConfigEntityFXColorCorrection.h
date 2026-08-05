#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_FxScreenLightMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector2; }
namespace MoleMole::Config { class ScreenEffectVector3; }
namespace MoleMole::Config { class ScreenEffectVector4; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETAPPLYSATURATIONLUTTOUBERPOST_OFFSET UNITYSDK_OFFSET(0x1A4AD4B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPALPHA_OFFSET UNITYSDK_OFFSET(0x1A4AC900)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A4AC7E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPEXTENSION_OFFSET UNITYSDK_OFFSET(0x1A4AC860)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPFXEXTRAEXTENSION_OFFSET UNITYSDK_OFFSET(0x1A4AEE90)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCONTRAST_OFFSET UNITYSDK_OFFSET(0x1A4AD820)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETDESATURATE_OFFSET UNITYSDK_OFFSET(0x1A4ADCA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLECAMERACLIP_OFFSET UNITYSDK_OFFSET(0x1A4AC770)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLELIGHTSHAFT_OFFSET UNITYSDK_OFFSET(0x1A4AE320)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLELOCALLIGHTCONTROL_OFFSET UNITYSDK_OFFSET(0x1A4AEF30)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFORCEUSEMSAA_OFFSET UNITYSDK_OFFSET(0x1A4AD720)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXCOLORSATURATION_OFFSET UNITYSDK_OFFSET(0x1A4AE0A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXFOGMASKPASSON_OFFSET UNITYSDK_OFFSET(0x1A4AE020)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXFXSCREENLIGHTMODE_OFFSET UNITYSDK_OFFSET(0x1A4ACAF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXLIGHTSHAFTMASKON_OFFSET UNITYSDK_OFFSET(0x1A4ACA70)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXSCREENLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x1A4ACB60)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXSCREENLIGHTMASKON_OFFSET UNITYSDK_OFFSET(0x1A4ACC00)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETGAMMA_OFFSET UNITYSDK_OFFSET(0x1A4AD920)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x1A4AEA00)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETINDIRECTSPECULARINTENSITY_OFFSET UNITYSDK_OFFSET(0x1A4AE2A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETINVERT_OFFSET UNITYSDK_OFFSET(0x1A4ADD20)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETJUSTCONTROLPARTICLELIGHT_OFFSET UNITYSDK_OFFSET(0x1A4AE120)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTBLUR_OFFSET UNITYSDK_OFFSET(0x1A4AE6C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCOLORCLAMP_OFFSET UNITYSDK_OFFSET(0x1A4AE4A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCOLOR_OFFSET UNITYSDK_OFFSET(0x1A4AE520)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCUSTOMCENTER_OFFSET UNITYSDK_OFFSET(0x1A4AE7C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTFADELENGTH_OFFSET UNITYSDK_OFFSET(0x1A4AE640)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTIGNORESCENEDEPTHMASK_OFFSET UNITYSDK_OFFSET(0x1A4AEE10)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTINTENSITY_OFFSET UNITYSDK_OFFSET(0x1A4AE420)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTLENGTH_OFFSET UNITYSDK_OFFSET(0x1A4AE5C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1A4AE3A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTUSECUSTOMCENTER_OFFSET UNITYSDK_OFFSET(0x1A4AE740)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALFOGINTENSITY_OFFSET UNITYSDK_OFFSET(0x1A4AF030)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTINTENSITYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1A4AEFB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTMULTIPLYINTENSITY_OFFSET UNITYSDK_OFFSET(0x1A4AE1A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTTHREADHOLD_OFFSET UNITYSDK_OFFSET(0x1A4AE220)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTINVERT_OFFSET UNITYSDK_OFFSET(0x1A4AD9A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTMIDDLEPOINT_OFFSET UNITYSDK_OFFSET(0x1A4ADBA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTSOFTNESS_OFFSET UNITYSDK_OFFSET(0x1A4ADC20)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONEA_OFFSET UNITYSDK_OFFSET(0x1A4ADAA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONEB_OFFSET UNITYSDK_OFFSET(0x1A4ADB20)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONECOLORS_OFFSET UNITYSDK_OFFSET(0x1A4ADA20)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTWITHMASKCONTRIBUTION_OFFSET UNITYSDK_OFFSET(0x1A4AED90)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTWITHMASKTEX_OFFSET UNITYSDK_OFFSET(0x1A4AED20)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETMIDDLECOLOR_OFFSET UNITYSDK_OFFSET(0x1A4AE960)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETMIDDLEPOINT_OFFSET UNITYSDK_OFFSET(0x1A4ADF20)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETOVERRIDEWEATHERGICONFIG_OFFSET UNITYSDK_OFFSET(0x1A4AE840)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETPOSTEXPOSURE_OFFSET UNITYSDK_OFFSET(0x1A4AD7A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSATURATION_OFFSET UNITYSDK_OFFSET(0x1A4AD8A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSEFFECTINTENSITY_OFFSET UNITYSDK_OFFSET(0x1A4ACC80)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSEMISSIONCOLOR_OFFSET UNITYSDK_OFFSET(0x1A4AD610)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSGBUFFERSATURATION_OFFSET UNITYSDK_OFFSET(0x1A4ACD80)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSIGNORERIDUS_OFFSET UNITYSDK_OFFSET(0x1A4AD530)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSOVERRIDEWEATHERGBUFFERSATURATION_OFFSET UNITYSDK_OFFSET(0x1A4ACD00)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSRADIUSALPHAPOW_OFFSET UNITYSDK_OFFSET(0x1A4AD5A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONLUT_OFFSET UNITYSDK_OFFSET(0x1A4AD080)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPGAP2_OFFSET UNITYSDK_OFFSET(0x1A4AD230)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPGAP3_OFFSET UNITYSDK_OFFSET(0x1A4AD370)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPGAP_OFFSET UNITYSDK_OFFSET(0x1A4AD0F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPVALUE2_OFFSET UNITYSDK_OFFSET(0x1A4AD2D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPVALUE3_OFFSET UNITYSDK_OFFSET(0x1A4AD410)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPVALUE_OFFSET UNITYSDK_OFFSET(0x1A4AD190)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSUSESATURATIONLUT_OFFSET UNITYSDK_OFFSET(0x1A4ACE00)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALSKYSATURATION_OFFSET UNITYSDK_OFFSET(0x1A4AD6B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYCOLOR_OFFSET UNITYSDK_OFFSET(0x1A4AE8C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSOFTNESS_OFFSET UNITYSDK_OFFSET(0x1A4ADFA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONEA_OFFSET UNITYSDK_OFFSET(0x1A4ADE20)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONEB_OFFSET UNITYSDK_OFFSET(0x1A4ADEA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONECOLORS_OFFSET UNITYSDK_OFFSET(0x1A4ADDA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETUSELUTWITHMASK_OFFSET UNITYSDK_OFFSET(0x1A4AEAA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWEATHERCONFIGWEIGHT_OFFSET UNITYSDK_OFFSET(0x1A4AC9F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWEATHERCONFIG_OFFSET UNITYSDK_OFFSET(0x1A4AC980)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GET_LUTWITHMASKTEX_OFFSET UNITYSDK_OFFSET(0x1A4AEB20)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GET_SCENESPECIALPPSSATURATIONLUT_OFFSET UNITYSDK_OFFSET(0x1A4ACE80)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4AF0B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityFXColorCorrection_TypeDefinitionIndex = 58969;

	class ConfigEntityFXColorCorrection : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectColor* middleColor; // 0x40
		::MoleMole::Config::ScreenEffectBool* lightShaftBlur; // 0x48
		::MoleMole::Config::ScreenEffectBool* applySaturationLutToUberPost; // 0x50
		::MoleMole::Config::ScreenEffectBool* lightShaftColorClamp; // 0x58
		::MoleMole::Config::ScreenEffectFloat* localLightMultiplyIntensity; // 0x60
		::MoleMole::Config::ScreenEffectBool* justControlParticleLight; // 0x68
		::MoleMole::Config::ScreenEffectFloat* lightShaftThreshold; // 0x70
		::MoleMole::Config::ScreenEffectFloat* lutWithMaskContribution; // 0x78
		::MoleMole::Config::ScreenEffectColor* skyColor; // 0x80
		::System::String* lutWithMaskTexPath; // 0x88
		::UnityEngine::Texture2D* _lutWithMaskTex; // 0x90
		::MoleMole::Config::ScreenEffectBool* lutInvert; // 0x98
		::MoleMole::Config::ScreenEffectBool* sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0xA0
		::MoleMole::Config::ScreenEffectFloat* softness; // 0xA8
		::MoleMole::Config::ScreenEffectBool* overrideWeatherGIConfig; // 0xB0
		::MoleMole::Config::ScreenEffectBool* enableLightShaft; // 0xB8
		::MoleMole::Config::ScreenEffectBool* fxLightShaftMaskOn; // 0xC0
		::MoleMole::Config::ScreenEffectBool* enableLocalLightControl; // 0xC8
		::MoleMole::Config::ScreenEffectFloat* indirectSpecularIntensity; // 0xD0
		::MoleMole::Config::ScreenEffectVector3* cameraClipFxExtraExtension; // 0xD8
		::MoleMole::Config::ScreenEffectColor* fxScreenLightColor; // 0xE0
		::MoleMole::Config::ScreenEffectFloat* gamma; // 0xE8
		::MoleMole::Config::ScreenEffectFloat* cameraClipAlpha; // 0xF0
		::MoleMole::Config::ScreenEffectBool* invert; // 0xF8
		::MoleMole::Config::ScreenEffectVector2* lightShaftCustomCenter; // 0x100
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampGap2; // 0x108
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* weatherConfig; // 0x110
		::MoleMole::Config::ScreenEffectBool* fxFogMaskPassOn; // 0x118
		::MoleMole::Config::ScreenEffectFloat* fxColorSaturation; // 0x120
		::System::String* sceneSpecialPPSSaturationLutPath; // 0x128
		::MoleMole::Config::ScreenEffectFloat* weatherConfigWeight; // 0x130
		::MoleMole::Config::ScreenEffectBool* lutToneColors; // 0x138
		::MoleMole::Config::ScreenEffectFloat* localFogIntensity; // 0x140
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampGap3; // 0x148
		::MoleMole::Config::ScreenEffectBool* lightShaftUseCustomCenter; // 0x150
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampValue; // 0x158
		::MoleMole::Config::ScreenEffectFloat* postExposure; // 0x160
		::MoleMole::Config::ScreenEffectBool* fxScreenLightMaskOn; // 0x168
		::MoleMole::Config::ScreenEffectFloat* localLightThreadHold; // 0x170
		::MoleMole::Config::ScreenEffectColor* lightShaftColor; // 0x178
		::MoleMole::Config::ScreenEffectFloat* lightShaftIntensity; // 0x180
		::MoleMole::Config::ScreenEffectBool* sceneSpecialPPSUseSaturationLut; // 0x188
		::MoleMole::Config::ScreenEffectFloat* desaturate; // 0x190
		::MoleMole::Config::ScreenEffectBool* ForceUseMsaa; // 0x198
		::MoleMole::Config::ScreenEffectFloat* cameraClipDistance; // 0x1A0
		::MoleMole::Config::ScreenEffectBool* toneColors; // 0x1A8
		::MoleMole::Config::ScreenEffectFloat* contrast; // 0x1B0
		::UnityEngine::Texture2D* _sceneSpecialPPSSaturationLut; // 0x1B8
		::MoleMole::Config::ScreenEffectFloat* localLightIntensityMultiplier; // 0x1C0
		::MoleMole::Config::ScreenEffectColor* sceneSpecialPPSEmissionColor; // 0x1C8
		::MoleMole::Config::ScreenEffectColor* groundColor; // 0x1D0
		::MoleMole::Config::ScreenEffectFloat* saturation; // 0x1D8
		::MoleMole::Config::ScreenEffectFloat* middlePoint; // 0x1E0
		::MoleMole::Config::ScreenEffectFloat* lutMiddlePoint; // 0x1E8
		::MoleMole::Config::ScreenEffectFloat* lightShaftLength; // 0x1F0
		::MoleMole::Config::ScreenEffectFloat* lightShaftFadeLength; // 0x1F8
		::MoleMole::Config::ScreenEffectFloat* lutSoftness; // 0x200
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampGap; // 0x208
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampValue3; // 0x210
		::MoleMole::Config::ScreenEffectBool* useLutWithMask; // 0x218
		::MoleMole::Config::ScreenEffectFloat* sceneSpecialPPSEffectIntensity; // 0x220
		::MoleMole::Config::ScreenEffectBool* lightShaftIgnoreSceneDepthMask; // 0x228
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampValue2; // 0x230
		::MoleMole::Config::ScreenEffectFloat* sceneSpecialPPSGBufferSaturation; // 0x238
		::MoleMole::Config::ScreenEffectVector3* cameraClipExtension; // 0x240
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSOverrideWeatherGBufferSaturationHandleType; // 0x248
		::MoleMole::Config::ScreenEffectFieldHandleType weatherConfigWeightHandleType; // 0x24C
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampGapHandleType; // 0x250
		::UnityEngine::Color lutToneB; // 0x254
		::MoleMole::Config::ScreenEffectFieldHandleType justControlParticleLightHandleType; // 0x264
		::MoleMole::Config::ScreenEffectFieldHandleType middleColorHandleType; // 0x268
		::MoleMole::Config::ScreenEffectFieldHandleType invertHandleType; // 0x26C
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSEffectIntensityHandleType; // 0x270
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftIgnoreSceneDepthMaskHandleType; // 0x274
		::MoleMole::Config::ScreenEffectFieldHandleType lutMiddlePointHandleType; // 0x278
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampValue3HandleType; // 0x27C
		::System::Single sceneSpecialPPSRadiusAlphaPow; // 0x280
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftCustomCenterHandleType; // 0x284
		::MoleMole::Config::ScreenEffectFieldHandleType cameraClipExtensionHandleType; // 0x288
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSEmissionColorHandleType; // 0x28C
		::MoleMole::Config::ScreenEffectFieldHandleType toneAHandleType; // 0x290
		::MoleMole::Config::ScreenEffectFieldHandleType contrastHandleType; // 0x294
		::MoleMole::Config::ScreenEffectFieldHandleType softnessHandleType; // 0x298
		::MoleMole::Config::ScreenEffectFieldHandleType fxLightShaftMaskOnHandleType; // 0x29C
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftLengthHandleType; // 0x2A0
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftUseCustomCenterHandleType; // 0x2A4
		::System::Single sceneSpecialSkySaturation; // 0x2A8
		::MoleMole::Config::ScreenEffectFieldHandleType groundColorHandleType; // 0x2AC
		::UnityEngine::Color lutToneA; // 0x2B0
		::MoleMole::Config::ScreenEffectFieldHandleType middlePointHandleType; // 0x2C0
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSGBufferSaturationHandleType; // 0x2C4
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftColorHandleType; // 0x2C8
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialSkySaturationHandleType; // 0x2CC
		::System::Single sceneSpecialPPSIgnoreRidus; // 0x2D0
		::MoleMole::Config::ScreenEffectFieldHandleType saturationHandleType; // 0x2D4
		::MoleMole::Config::ScreenEffectFieldHandleType lutToneBHandleType; // 0x2D8
		::MoleMole::Config::ScreenEffectFieldHandleType enableLocalLightControlHandleType; // 0x2DC
		::MoleMole::Config::ScreenEffectFieldHandleType localLightMultiplyIntensityHandleType; // 0x2E0
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampValue2HandleType; // 0x2E4
		::MoleMole::Config::ScreenEffectFieldHandleType lutWithMaskContributionHandleType; // 0x2E8
		::MoleMole::Config::ScreenEffectFieldHandleType lutWithMaskTexHandleType; // 0x2EC
		::MoleMole::Config::ScreenEffectFieldHandleType toneColorsHandleType; // 0x2F0
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampGap3HandleType; // 0x2F4
		::MoleMole::Config::ScreenEffectFieldHandleType fxScreenLightMaskOnHandleType; // 0x2F8
		::MoleMole::Config::ScreenEffectFieldHandleType ForceUseMsaaHandleType; // 0x2FC
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSIgnoreRidusHandleType; // 0x300
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSUseSaturationLutHandleType; // 0x304
		::MoleMole::Config::ScreenEffectFieldHandleType enableLightShaftHandleType; // 0x308
		::MoleMole::Config::ScreenEffectFieldHandleType fxColorSaturationHandleType; // 0x30C
		::MoleMole::Config::ScreenEffectFieldHandleType gammaHandleType; // 0x310
		::MoleMole::Config::ScreenEffectFieldHandleType desaturateHandleType; // 0x314
		::MoleMole::Config::ScreenEffectFieldHandleType lutToneAHandleType; // 0x318
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftThresholdHandleType; // 0x31C
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode fxFxScreenLightMode; // 0x320
		::MoleMole::Config::ScreenEffectFieldHandleType localLightThreadHoldHandleType; // 0x324
		::MoleMole::Config::ScreenEffectFieldHandleType indirectSpecularIntensityHandleType; // 0x328
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftBlurHandleType; // 0x32C
		::MoleMole::Config::ScreenEffectFieldHandleType cameraClipAlphaHandleType; // 0x330
		::MoleMole::Config::ScreenEffectFieldHandleType enableCameraClipHandleType; // 0x334
		::MoleMole::Config::ScreenEffectFieldHandleType toneBHandleType; // 0x338
		::MoleMole::Config::ScreenEffectFieldHandleType applySaturationLutToUberPostHandleType; // 0x33C
		::MoleMole::Config::ScreenEffectFieldHandleType postExposureHandleType; // 0x340
		::MoleMole::Config::ScreenEffectFieldHandleType skyColorHandleType; // 0x344
		::MoleMole::Config::ScreenEffectFieldHandleType cameraClipFxExtraExtensionHandleType; // 0x348
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampGap2HandleType; // 0x34C
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSRadiusAlphaPowHandleType; // 0x350
		::MoleMole::Config::ScreenEffectFieldHandleType localFogIntensityHandleType; // 0x354
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationLutHandleType; // 0x358
		::MoleMole::Config::ScreenEffectFieldHandleType useLutWithMaskHandleType; // 0x35C
		::MoleMole::Config::ScreenEffectFieldHandleType lutSoftnessHandleType; // 0x360
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampValueHandleType; // 0x364
		::MoleMole::Config::ScreenEffectFieldHandleType localLightIntensityMultiplierHandleType; // 0x368
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftIntensityHandleType; // 0x36C
		::MoleMole::Config::ScreenEffectFieldHandleType lutInvertHandleType; // 0x370
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogMaskPassOnHandleType; // 0x374
		::System::Boolean enableCameraClip; // 0x378
		::MoleMole::Config::ScreenEffectFieldHandleType overrideWeatherGIConfigHandleType; // 0x37C
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftFadeLengthHandleType; // 0x380
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftColorClampHandleType; // 0x384
		::MoleMole::Config::ScreenEffectFieldHandleType cameraClipDistanceHandleType; // 0x388
		::MoleMole::Config::ScreenEffectFieldHandleType lutToneColorsHandleType; // 0x38C
		::UnityEngine::Color toneB; // 0x390
		::MoleMole::Config::ScreenEffectFieldHandleType fxFxScreenLightModeHandleType; // 0x3A0
		::MoleMole::Config::ScreenEffectFieldHandleType fxScreenLightColorHandleType; // 0x3A4
		::UnityEngine::Color toneA; // 0x3A8
		::MoleMole::Config::ScreenEffectFieldHandleType weatherConfigHandleType; // 0x3B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION__CTOR_OFFSET))(this);
		}

		::System::Boolean GetEnableCameraClip(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLECAMERACLIP_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCameraClipDistance(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPDISTANCE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector3 GetCameraClipExtension(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPEXTENSION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCameraClipAlpha(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPALPHA_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* GetWeatherConfig(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWEATHERCONFIG_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetWeatherConfigWeight(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWEATHERCONFIGWEIGHT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetFxLightShaftMaskOn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXLIGHTSHAFTMASKON_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode GetFxFxScreenLightMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXFXSCREENLIGHTMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetFxScreenLightColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXSCREENLIGHTCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetFxScreenLightMaskOn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXSCREENLIGHTMASKON_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSceneSpecialPPSEffectIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSEFFECTINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetSceneSpecialPPSOverrideWeatherGBufferSaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSOVERRIDEWEATHERGBUFFERSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSceneSpecialPPSGBufferSaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSGBUFFERSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetSceneSpecialPPSUseSaturationLut(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSUSESATURATIONLUT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_sceneSpecialPPSSaturationLut()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GET_SCENESPECIALPPSSATURATIONLUT_OFFSET))(this);
		}

		::UnityEngine::Texture* GetSceneSpecialPPSSaturationLut(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONLUT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetSceneSpecialPPSSaturationRampGap(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPGAP_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetSceneSpecialPPSSaturationRampValue(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPVALUE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetSceneSpecialPPSSaturationRampGap2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPGAP2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetSceneSpecialPPSSaturationRampValue2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPVALUE2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetSceneSpecialPPSSaturationRampGap3(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPGAP3_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetSceneSpecialPPSSaturationRampValue3(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPVALUE3_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetApplySaturationLutToUberPost(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETAPPLYSATURATIONLUTTOUBERPOST_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSceneSpecialPPSIgnoreRidus(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSIGNORERIDUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSceneSpecialPPSRadiusAlphaPow(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSRADIUSALPHAPOW_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSceneSpecialPPSEmissionColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSEMISSIONCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSceneSpecialSkySaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALSKYSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetForceUseMsaa(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFORCEUSEMSAA_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPostExposure(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETPOSTEXPOSURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetContrast(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCONTRAST_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGamma(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETGAMMA_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLutInvert(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTINVERT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLutToneColors(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONECOLORS_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLutToneA(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONEA_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLutToneB(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONEB_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLutMiddlePoint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTMIDDLEPOINT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLutSoftness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTSOFTNESS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDesaturate(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETDESATURATE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetInvert(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETINVERT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetToneColors(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONECOLORS_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetToneA(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONEA_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetToneB(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONEB_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMiddlePoint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETMIDDLEPOINT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSoftness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSOFTNESS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetFxFogMaskPassOn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXFOGMASKPASSON_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFxColorSaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXCOLORSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetJustControlParticleLight(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETJUSTCONTROLPARTICLELIGHT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLocalLightMultiplyIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTMULTIPLYINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLocalLightThreadHold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTTHREADHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetIndirectSpecularIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETINDIRECTSPECULARINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetEnableLightShaft(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLELIGHTSHAFT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLightShaftThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTTHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLightShaftIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLightShaftColorClamp(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCOLORCLAMP_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLightShaftColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLightShaftLength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTLENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLightShaftFadeLength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTFADELENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLightShaftBlur(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTBLUR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLightShaftUseCustomCenter(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTUSECUSTOMCENTER_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetLightShaftCustomCenter(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCUSTOMCENTER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetOverrideWeatherGIConfig(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETOVERRIDEWEATHERGICONFIG_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSkyColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetMiddleColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETMIDDLECOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetGroundColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETGROUNDCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetUseLutWithMask(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETUSELUTWITHMASK_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_lutWithMaskTex()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GET_LUTWITHMASKTEX_OFFSET))(this);
		}

		::UnityEngine::Texture* GetLutWithMaskTex(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTWITHMASKTEX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLutWithMaskContribution(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTWITHMASKCONTRIBUTION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLightShaftIgnoreSceneDepthMask(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTIGNORESCENEDEPTHMASK_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector3 GetCameraClipFxExtraExtension(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPFXEXTRAEXTENSION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetEnableLocalLightControl(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLELOCALLIGHTCONTROL_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLocalLightIntensityMultiplier(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTINTENSITYMULTIPLIER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLocalFogIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALFOGINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
