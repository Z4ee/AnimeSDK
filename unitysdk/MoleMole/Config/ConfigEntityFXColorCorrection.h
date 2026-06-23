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
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETAMBIENTEQUATORCOLOR_OFFSET UNITYSDK_OFFSET(0x106D5CC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETAMBIENTGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x106D5D60)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETAMBIENTSKYCOLOR_OFFSET UNITYSDK_OFFSET(0x106D5C20)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETAPPLYSATURATIONLUTTOUBERPOST_OFFSET UNITYSDK_OFFSET(0x106D3E00)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPALPHA_OFFSET UNITYSDK_OFFSET(0x106D3250)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPDISTANCE_OFFSET UNITYSDK_OFFSET(0x106D3130)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPEXTENSION_OFFSET UNITYSDK_OFFSET(0x106D31B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCONTRAST_OFFSET UNITYSDK_OFFSET(0x106D4170)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETDESATURATE_OFFSET UNITYSDK_OFFSET(0x106D45F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETDISTANCEFOGSTART_OFFSET UNITYSDK_OFFSET(0x106D4E50)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLECAMERACLIP_OFFSET UNITYSDK_OFFSET(0x106D30C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLELIGHTSHAFT_OFFSET UNITYSDK_OFFSET(0x106D5680)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFOGHORIZONTALGRADIENT_OFFSET UNITYSDK_OFFSET(0x106D4EC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFORCEUSEMSAA_OFFSET UNITYSDK_OFFSET(0x106D4070)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXCOLORSATURATION_OFFSET UNITYSDK_OFFSET(0x106D49F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXFOGMASKPASSON_OFFSET UNITYSDK_OFFSET(0x106D4970)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXFXSCREENLIGHTMODE_OFFSET UNITYSDK_OFFSET(0x106D3440)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXLIGHTSHAFTMASKON_OFFSET UNITYSDK_OFFSET(0x106D33C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXSCREENLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x106D34B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXSCREENLIGHTMASKON_OFFSET UNITYSDK_OFFSET(0x106D3550)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETGAMMA_OFFSET UNITYSDK_OFFSET(0x106D4270)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x106D5FC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETHEIGHTFOGHEIGHT_OFFSET UNITYSDK_OFFSET(0x106D4F30)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETHEIGHTFOGSTART_OFFSET UNITYSDK_OFFSET(0x106D4FA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETINDIRECTSPECULARINTENSITY_OFFSET UNITYSDK_OFFSET(0x106D4BF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETINVERT_OFFSET UNITYSDK_OFFSET(0x106D4670)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETJUSTCONTROLPARTICLELIGHT_OFFSET UNITYSDK_OFFSET(0x106D4A70)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER1CLOUDAROUNDSUNCOLOR_OFFSET UNITYSDK_OFFSET(0x106D53B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER1MIDDLECLOUDGRADIENT_OFFSET UNITYSDK_OFFSET(0x106D5340)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER2CLOUDAROUNDSUNCOLOR_OFFSET UNITYSDK_OFFSET(0x106D54A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER2MIDDLECLOUDGRADIENT_OFFSET UNITYSDK_OFFSET(0x106D5430)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER3CLOUDAROUNDSUNCOLOR_OFFSET UNITYSDK_OFFSET(0x106D5590)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER3MIDDLECLOUDGRADIENT_OFFSET UNITYSDK_OFFSET(0x106D5520)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTBLUR_OFFSET UNITYSDK_OFFSET(0x106D5A20)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCOLORCLAMP_OFFSET UNITYSDK_OFFSET(0x106D5800)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCOLOR_OFFSET UNITYSDK_OFFSET(0x106D5880)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCUSTOMCENTER_OFFSET UNITYSDK_OFFSET(0x106D5B20)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTFADELENGTH_OFFSET UNITYSDK_OFFSET(0x106D59A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTIGNORESCENEDEPTHMASK_OFFSET UNITYSDK_OFFSET(0x106D63D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTINTENSITY_OFFSET UNITYSDK_OFFSET(0x106D5780)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTLENGTH_OFFSET UNITYSDK_OFFSET(0x106D5920)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x106D5700)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTUSECUSTOMCENTER_OFFSET UNITYSDK_OFFSET(0x106D5AA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTMULTIPLYINTENSITY_OFFSET UNITYSDK_OFFSET(0x106D4AF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTTHREADHOLD_OFFSET UNITYSDK_OFFSET(0x106D4B70)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTINVERT_OFFSET UNITYSDK_OFFSET(0x106D42F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTMIDDLEPOINT_OFFSET UNITYSDK_OFFSET(0x106D44F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTSOFTNESS_OFFSET UNITYSDK_OFFSET(0x106D4570)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONEA_OFFSET UNITYSDK_OFFSET(0x106D43F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONEB_OFFSET UNITYSDK_OFFSET(0x106D4470)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONECOLORS_OFFSET UNITYSDK_OFFSET(0x106D4370)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTWITHMASKCONTRIBUTION_OFFSET UNITYSDK_OFFSET(0x106D6350)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTWITHMASKTEX_OFFSET UNITYSDK_OFFSET(0x106D62E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETMIDDLECOLOR_OFFSET UNITYSDK_OFFSET(0x106D5F20)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETMIDDLEPOINT_OFFSET UNITYSDK_OFFSET(0x106D4870)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETOVERRIDEWEATHERCONFIG_OFFSET UNITYSDK_OFFSET(0x106D5BA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETOVERRIDEWEATHERGICONFIG_OFFSET UNITYSDK_OFFSET(0x106D5E00)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETPOSTEXPOSURE_OFFSET UNITYSDK_OFFSET(0x106D40F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETRAINDROPCOLOR_OFFSET UNITYSDK_OFFSET(0x106D4C70)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETRAINDROPSPLASHCOLOR_OFFSET UNITYSDK_OFFSET(0x106D4D60)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETRAINDROPSPLASHCOUNT_OFFSET UNITYSDK_OFFSET(0x106D4DE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSATURATION_OFFSET UNITYSDK_OFFSET(0x106D41F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENELUTCONTRIBUTION_OFFSET UNITYSDK_OFFSET(0x106D5610)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSEFFECTINTENSITY_OFFSET UNITYSDK_OFFSET(0x106D35D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSEMISSIONCOLOR_OFFSET UNITYSDK_OFFSET(0x106D3F60)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSGBUFFERSATURATION_OFFSET UNITYSDK_OFFSET(0x106D36D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSIGNORERIDUS_OFFSET UNITYSDK_OFFSET(0x106D3E80)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSOVERRIDEWEATHERGBUFFERSATURATION_OFFSET UNITYSDK_OFFSET(0x106D3650)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSRADIUSALPHAPOW_OFFSET UNITYSDK_OFFSET(0x106D3EF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONLUT_OFFSET UNITYSDK_OFFSET(0x106D39D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPGAP2_OFFSET UNITYSDK_OFFSET(0x106D3B80)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPGAP3_OFFSET UNITYSDK_OFFSET(0x106D3CC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPGAP_OFFSET UNITYSDK_OFFSET(0x106D3A40)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPVALUE2_OFFSET UNITYSDK_OFFSET(0x106D3C20)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPVALUE3_OFFSET UNITYSDK_OFFSET(0x106D3D60)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPVALUE_OFFSET UNITYSDK_OFFSET(0x106D3AE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSUSESATURATIONLUT_OFFSET UNITYSDK_OFFSET(0x106D3750)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALSKYSATURATION_OFFSET UNITYSDK_OFFSET(0x106D4000)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYCLOUDHORIZONTALGRADIENT_OFFSET UNITYSDK_OFFSET(0x106D5250)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYCOLOR_OFFSET UNITYSDK_OFFSET(0x106D5E80)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYHORIZONTALGRADIENT_OFFSET UNITYSDK_OFFSET(0x106D5100)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYHORIZONTALHEIGHT_OFFSET UNITYSDK_OFFSET(0x106D5170)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYHORIZONTALOFFSET_OFFSET UNITYSDK_OFFSET(0x106D51E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYVERTICALGRADIENT_OFFSET UNITYSDK_OFFSET(0x106D5090)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSOFTNESS_OFFSET UNITYSDK_OFFSET(0x106D48F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSUNDISCCOLOR_OFFSET UNITYSDK_OFFSET(0x106D52C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONEA_OFFSET UNITYSDK_OFFSET(0x106D4770)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONEB_OFFSET UNITYSDK_OFFSET(0x106D47F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONECOLORS_OFFSET UNITYSDK_OFFSET(0x106D46F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETUSELUTWITHMASK_OFFSET UNITYSDK_OFFSET(0x106D6060)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETVOLUMETRICFOGCOLOR_OFFSET UNITYSDK_OFFSET(0x106D5010)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWEATHERCONFIGWEIGHT_OFFSET UNITYSDK_OFFSET(0x106D3340)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWEATHERCONFIG_OFFSET UNITYSDK_OFFSET(0x106D32D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWETNESSNOISECLAMP_OFFSET UNITYSDK_OFFSET(0x106D4CF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GET_LUTWITHMASKTEX_OFFSET UNITYSDK_OFFSET(0x106D60E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GET_SCENESPECIALPPSSATURATIONLUT_OFFSET UNITYSDK_OFFSET(0x106D37D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x106D6450)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityFXColorCorrection_TypeDefinitionIndex = 81722;

	class ConfigEntityFXColorCorrection : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectColor* ambientGroundColor; // 0x40
		::MoleMole::Config::ScreenEffectBool* ForceUseMsaa; // 0x48
		::MoleMole::Config::ScreenEffectFloat* fxColorSaturation; // 0x50
		::MoleMole::Config::ScreenEffectBool* lightShaftIgnoreSceneDepthMask; // 0x58
		::MoleMole::Config::ScreenEffectColor* sceneSpecialPPSEmissionColor; // 0x60
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampValue3; // 0x68
		::MoleMole::Config::ScreenEffectVector3* cameraClipExtension; // 0x70
		::MoleMole::Config::ScreenEffectFloat* cameraClipDistance; // 0x78
		::MoleMole::Config::ScreenEffectColor* groundColor; // 0x80
		::MoleMole::Config::ScreenEffectFloat* middlePoint; // 0x88
		::MoleMole::Config::ScreenEffectFloat* postExposure; // 0x90
		::UnityEngine::Gradient* skyVerticalGradient; // 0x98
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampGap2; // 0xA0
		::UnityEngine::Texture2D* _lutWithMaskTex; // 0xA8
		::MoleMole::Config::ScreenEffectBool* useLutWithMask; // 0xB0
		::UnityEngine::Gradient* layer1MiddleCloudGradient; // 0xB8
		::System::String* lutWithMaskTexPath; // 0xC0
		::MoleMole::Config::ScreenEffectBool* justControlParticleLight; // 0xC8
		::MoleMole::Config::ScreenEffectBool* lightShaftColorClamp; // 0xD0
		::UnityEngine::Gradient* fogHorizontalGradient; // 0xD8
		::MoleMole::Config::ScreenEffectFloat* gamma; // 0xE0
		::MoleMole::Config::ScreenEffectBool* lightShaftBlur; // 0xE8
		::UnityEngine::Gradient* layer3MiddleCloudGradient; // 0xF0
		::MoleMole::Config::ScreenEffectFloat* sceneSpecialPPSEffectIntensity; // 0xF8
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampValue2; // 0x100
		::MoleMole::Config::ScreenEffectColor* middleColor; // 0x108
		::MoleMole::Config::ScreenEffectBool* fxLightShaftMaskOn; // 0x110
		::UnityEngine::Gradient* skyHorizontalGradient; // 0x118
		::MoleMole::Config::ScreenEffectBool* lutInvert; // 0x120
		::MoleMole::Config::ScreenEffectBool* fxFogMaskPassOn; // 0x128
		::MoleMole::Config::ScreenEffectFloat* localLightMultiplyIntensity; // 0x130
		::MoleMole::Config::ScreenEffectFloat* weatherConfigWeight; // 0x138
		::UnityEngine::Gradient* skyCloudHorizontalGradient; // 0x140
		::MoleMole::Config::ScreenEffectFloat* sceneSpecialPPSGBufferSaturation; // 0x148
		::MoleMole::Config::ScreenEffectColor* lightShaftColor; // 0x150
		::MoleMole::Config::ScreenEffectVector2* lightShaftCustomCenter; // 0x158
		::MoleMole::Config::ScreenEffectFloat* lutWithMaskContribution; // 0x160
		::MoleMole::Config::ScreenEffectBool* applySaturationLutToUberPost; // 0x168
		::MoleMole::Config::ScreenEffectFloat* desaturate; // 0x170
		::MoleMole::Config::ScreenEffectBool* toneColors; // 0x178
		::MoleMole::Config::ScreenEffectBool* fxScreenLightMaskOn; // 0x180
		::MoleMole::Config::ScreenEffectBool* lightShaftUseCustomCenter; // 0x188
		::MoleMole::Config::ScreenEffectFloat* lutMiddlePoint; // 0x190
		::MoleMole::Config::ScreenEffectFloat* saturation; // 0x198
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampGap; // 0x1A0
		::MoleMole::Config::ScreenEffectColor* ambientEquatorColor; // 0x1A8
		::MoleMole::Config::ScreenEffectBool* lutToneColors; // 0x1B0
		::MoleMole::Config::ScreenEffectFloat* lightShaftLength; // 0x1B8
		::MoleMole::Config::ScreenEffectFloat* lightShaftIntensity; // 0x1C0
		::MoleMole::Config::ScreenEffectFloat* indirectSpecularIntensity; // 0x1C8
		::MoleMole::Config::ScreenEffectFloat* lutSoftness; // 0x1D0
		::MoleMole::Config::ScreenEffectBool* overrideWeatherGIConfig; // 0x1D8
		::MoleMole::Config::ScreenEffectFloat* lightShaftThreshold; // 0x1E0
		::MoleMole::Config::ScreenEffectColor* ambientSkyColor; // 0x1E8
		::MoleMole::Config::ScreenEffectBool* invert; // 0x1F0
		::MoleMole::Config::ScreenEffectFloat* cameraClipAlpha; // 0x1F8
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* weatherConfig; // 0x200
		::MoleMole::Config::ScreenEffectFloat* localLightThreadHold; // 0x208
		::MoleMole::Config::ScreenEffectBool* sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x210
		::MoleMole::Config::ScreenEffectColor* skyColor; // 0x218
		::MoleMole::Config::ScreenEffectBool* sceneSpecialPPSUseSaturationLut; // 0x220
		::MoleMole::Config::ScreenEffectFloat* softness; // 0x228
		::MoleMole::Config::ScreenEffectFloat* lightShaftFadeLength; // 0x230
		::MoleMole::Config::ScreenEffectFloat* contrast; // 0x238
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampGap3; // 0x240
		::MoleMole::Config::ScreenEffectBool* overrideWeatherConfig; // 0x248
		::System::String* sceneSpecialPPSSaturationLutPath; // 0x250
		::UnityEngine::Gradient* layer2MiddleCloudGradient; // 0x258
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampValue; // 0x260
		::UnityEngine::Texture2D* _sceneSpecialPPSSaturationLut; // 0x268
		::MoleMole::Config::ScreenEffectColor* fxScreenLightColor; // 0x270
		::MoleMole::Config::ScreenEffectBool* enableLightShaft; // 0x278
		::MoleMole::Config::ScreenEffectFieldHandleType skyColorHandleType; // 0x280
		::MoleMole::Config::ScreenEffectFieldHandleType localLightMultiplyIntensityHandleType; // 0x284
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftLengthHandleType; // 0x288
		::MoleMole::Config::ScreenEffectFieldHandleType justControlParticleLightHandleType; // 0x28C
		::UnityEngine::Color rainDropSplashColor; // 0x290
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftCustomCenterHandleType; // 0x2A0
		::MoleMole::Config::ScreenEffectFieldHandleType sceneLutContributionHandleType; // 0x2A4
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSEmissionColorHandleType; // 0x2A8
		::MoleMole::Config::ScreenEffectFieldHandleType toneBHandleType; // 0x2AC
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftIntensityHandleType; // 0x2B0
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSUseSaturationLutHandleType; // 0x2B4
		::MoleMole::Config::ScreenEffectFieldHandleType lutToneColorsHandleType; // 0x2B8
		::MoleMole::Config::ScreenEffectFieldHandleType layer2CloudAroundSunColorHandleType; // 0x2BC
		::MoleMole::Config::ScreenEffectFieldHandleType skyCloudHorizontalGradientHandleType; // 0x2C0
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationLutHandleType; // 0x2C4
		::MoleMole::Config::ScreenEffectFieldHandleType overrideWeatherGIConfigHandleType; // 0x2C8
		::MoleMole::Config::ScreenEffectFieldHandleType sunDiscColorHandleType; // 0x2CC
		::System::Single heightFogStart; // 0x2D0
		::UnityEngine::Color lutToneB; // 0x2D4
		::MoleMole::Config::ScreenEffectFieldHandleType desaturateHandleType; // 0x2E4
		::MoleMole::Config::ScreenEffectFieldHandleType middleColorHandleType; // 0x2E8
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSEffectIntensityHandleType; // 0x2EC
		::MoleMole::Config::ScreenEffectFieldHandleType contrastHandleType; // 0x2F0
		::MoleMole::Config::ScreenEffectFieldHandleType groundColorHandleType; // 0x2F4
		::MoleMole::Config::ScreenEffectFieldHandleType skyHorizontalOffsetHandleType; // 0x2F8
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampGap2HandleType; // 0x2FC
		::MoleMole::Config::ScreenEffectFieldHandleType ambientSkyColorHandleType; // 0x300
		::MoleMole::Config::ScreenEffectFieldHandleType skyHorizontalGradientHandleType; // 0x304
		::MoleMole::Config::ScreenEffectFieldHandleType weatherConfigWeightHandleType; // 0x308
		::MoleMole::Config::ScreenEffectFieldHandleType fxColorSaturationHandleType; // 0x30C
		::MoleMole::Config::ScreenEffectFieldHandleType localLightThreadHoldHandleType; // 0x310
		::MoleMole::Config::ScreenEffectFieldHandleType lutSoftnessHandleType; // 0x314
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampValue2HandleType; // 0x318
		::System::Single distanceFogStart; // 0x31C
		::MoleMole::Config::ScreenEffectFieldHandleType cameraClipAlphaHandleType; // 0x320
		::MoleMole::Config::ScreenEffectFieldHandleType volumetricFogColorHandleType; // 0x324
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampValueHandleType; // 0x328
		::UnityEngine::Color layer1CloudAroundSunColor; // 0x32C
		::System::Single sceneSpecialSkySaturation; // 0x33C
		::MoleMole::Config::ScreenEffectFieldHandleType lutWithMaskTexHandleType; // 0x340
		::MoleMole::Config::ScreenEffectFieldHandleType skyHorizontalHeightHandleType; // 0x344
		::MoleMole::Config::ScreenEffectFieldHandleType layer1MiddleCloudGradientHandleType; // 0x348
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSOverrideWeatherGBufferSaturationHandleType; // 0x34C
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSIgnoreRidusHandleType; // 0x350
		::UnityEngine::Color sunDiscColor; // 0x354
		::MoleMole::Config::ScreenEffectFieldHandleType enableLightShaftHandleType; // 0x364
		::UnityEngine::Color toneB; // 0x368
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampValue3HandleType; // 0x378
		::MoleMole::Config::ScreenEffectFieldHandleType layer1CloudAroundSunColorHandleType; // 0x37C
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftUseCustomCenterHandleType; // 0x380
		::MoleMole::Config::ScreenEffectFieldHandleType softnessHandleType; // 0x384
		::UnityEngine::Color layer2CloudAroundSunColor; // 0x388
		::MoleMole::Config::ScreenEffectFieldHandleType postExposureHandleType; // 0x398
		::MoleMole::Config::ScreenEffectFieldHandleType rainDropSplashCountHandleType; // 0x39C
		::MoleMole::Config::ScreenEffectFieldHandleType lutMiddlePointHandleType; // 0x3A0
		::MoleMole::Config::ScreenEffectFieldHandleType toneAHandleType; // 0x3A4
		::MoleMole::Config::ScreenEffectFieldHandleType middlePointHandleType; // 0x3A8
		::MoleMole::Config::ScreenEffectFieldHandleType lutToneBHandleType; // 0x3AC
		::System::Single skyHorizontalOffset; // 0x3B0
		::System::Single sceneLutContribution; // 0x3B4
		::MoleMole::Config::ScreenEffectFieldHandleType overrideWeatherConfigHandleType; // 0x3B8
		::MoleMole::Config::ScreenEffectFieldHandleType useLutWithMaskHandleType; // 0x3BC
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogMaskPassOnHandleType; // 0x3C0
		::MoleMole::Config::ScreenEffectFieldHandleType rainDropColorHandleType; // 0x3C4
		::MoleMole::Config::ScreenEffectFieldHandleType enableCameraClipHandleType; // 0x3C8
		::MoleMole::Config::ScreenEffectFieldHandleType distanceFogStartHandleType; // 0x3CC
		::MoleMole::Config::ScreenEffectFieldHandleType heightFogHeightHandleType; // 0x3D0
		::System::Single heightFogHeight; // 0x3D4
		::MoleMole::Config::ScreenEffectFieldHandleType saturationHandleType; // 0x3D8
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftFadeLengthHandleType; // 0x3DC
		::MoleMole::Config::ScreenEffectFieldHandleType indirectSpecularIntensityHandleType; // 0x3E0
		::System::Boolean enableCameraClip; // 0x3E4
		::MoleMole::Config::ScreenEffectFieldHandleType fxScreenLightMaskOnHandleType; // 0x3E8
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampGapHandleType; // 0x3EC
		::MoleMole::Config::ScreenEffectFieldHandleType invertHandleType; // 0x3F0
		::MoleMole::Config::ScreenEffectFieldHandleType applySaturationLutToUberPostHandleType; // 0x3F4
		::MoleMole::Config::ScreenEffectFieldHandleType fxLightShaftMaskOnHandleType; // 0x3F8
		::System::Single sceneSpecialPPSIgnoreRidus; // 0x3FC
		::MoleMole::Config::ScreenEffectFieldHandleType toneColorsHandleType; // 0x400
		::UnityEngine::Color layer3CloudAroundSunColor; // 0x404
		::System::Single skyHorizontalHeight; // 0x414
		::MoleMole::Config::ScreenEffectFieldHandleType ForceUseMsaaHandleType; // 0x418
		::MoleMole::Config::ScreenEffectFieldHandleType weatherConfigHandleType; // 0x41C
		::MoleMole::Config::ScreenEffectFieldHandleType lutToneAHandleType; // 0x420
		::MoleMole::Config::ScreenEffectFieldHandleType lutWithMaskContributionHandleType; // 0x424
		::MoleMole::Config::ScreenEffectFieldHandleType gammaHandleType; // 0x428
		::MoleMole::Config::ScreenEffectFieldHandleType layer2MiddleCloudGradientHandleType; // 0x42C
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode fxFxScreenLightMode; // 0x430
		::MoleMole::Config::ScreenEffectFieldHandleType ambientGroundColorHandleType; // 0x434
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSRadiusAlphaPowHandleType; // 0x438
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftColorClampHandleType; // 0x43C
		::MoleMole::Config::ScreenEffectFieldHandleType rainDropSplashColorHandleType; // 0x440
		::MoleMole::Config::ScreenEffectFieldHandleType skyVerticalGradientHandleType; // 0x444
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftBlurHandleType; // 0x448
		::MoleMole::Config::ScreenEffectFieldHandleType layer3CloudAroundSunColorHandleType; // 0x44C
		::System::Single sceneSpecialPPSRadiusAlphaPow; // 0x450
		::MoleMole::Config::ScreenEffectFieldHandleType lutInvertHandleType; // 0x454
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftIgnoreSceneDepthMaskHandleType; // 0x458
		::MoleMole::Config::ScreenEffectFieldHandleType fxScreenLightColorHandleType; // 0x45C
		::MoleMole::Config::ScreenEffectFieldHandleType cameraClipDistanceHandleType; // 0x460
		::MoleMole::Config::ScreenEffectFieldHandleType wetnessNoiseClampHandleType; // 0x464
		::MoleMole::Config::ScreenEffectFieldHandleType fxFxScreenLightModeHandleType; // 0x468
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftColorHandleType; // 0x46C
		::System::Int32 rainDropSplashCount; // 0x470
		::UnityEngine::Color lutToneA; // 0x474
		::UnityEngine::Color rainDropColor; // 0x484
		::UnityEngine::Color volumetricFogColor; // 0x494
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftThresholdHandleType; // 0x4A4
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSGBufferSaturationHandleType; // 0x4A8
		::MoleMole::Config::ScreenEffectFieldHandleType cameraClipExtensionHandleType; // 0x4AC
		::MoleMole::Config::ScreenEffectFieldHandleType heightFogStartHandleType; // 0x4B0
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialSkySaturationHandleType; // 0x4B4
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampGap3HandleType; // 0x4B8
		::MoleMole::Config::ScreenEffectFieldHandleType layer3MiddleCloudGradientHandleType; // 0x4BC
		::UnityEngine::Vector2 wetnessNoiseClamp; // 0x4C0
		::UnityEngine::Color toneA; // 0x4C8
		::MoleMole::Config::ScreenEffectFieldHandleType fogHorizontalGradientHandleType; // 0x4D8
		::MoleMole::Config::ScreenEffectFieldHandleType ambientEquatorColorHandleType; // 0x4DC

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

		::UnityEngine::Color GetRainDropColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETRAINDROPCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetWetnessNoiseClamp(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWETNESSNOISECLAMP_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetRainDropSplashColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETRAINDROPSPLASHCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetRainDropSplashCount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETRAINDROPSPLASHCOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDistanceFogStart(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETDISTANCEFOGSTART_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Gradient* GetFogHorizontalGradient(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFOGHORIZONTALGRADIENT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHeightFogHeight(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETHEIGHTFOGHEIGHT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHeightFogStart(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETHEIGHTFOGSTART_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetVolumetricFogColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETVOLUMETRICFOGCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Gradient* GetSkyVerticalGradient(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYVERTICALGRADIENT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Gradient* GetSkyHorizontalGradient(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYHORIZONTALGRADIENT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSkyHorizontalHeight(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYHORIZONTALHEIGHT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSkyHorizontalOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYHORIZONTALOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Gradient* GetSkyCloudHorizontalGradient(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYCLOUDHORIZONTALGRADIENT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSunDiscColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSUNDISCCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Gradient* GetLayer1MiddleCloudGradient(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER1MIDDLECLOUDGRADIENT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLayer1CloudAroundSunColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER1CLOUDAROUNDSUNCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Gradient* GetLayer2MiddleCloudGradient(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER2MIDDLECLOUDGRADIENT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLayer2CloudAroundSunColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER2CLOUDAROUNDSUNCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Gradient* GetLayer3MiddleCloudGradient(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER3MIDDLECLOUDGRADIENT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLayer3CloudAroundSunColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER3CLOUDAROUNDSUNCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSceneLutContribution(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENELUTCONTRIBUTION_OFFSET))(this, curTime, realHoldTime);
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

		::System::Boolean GetOverrideWeatherConfig(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETOVERRIDEWEATHERCONFIG_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetAmbientSkyColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETAMBIENTSKYCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetAmbientEquatorColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETAMBIENTEQUATORCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetAmbientGroundColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETAMBIENTGROUNDCOLOR_OFFSET))(this, curTime, realHoldTime);
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
	};
}
