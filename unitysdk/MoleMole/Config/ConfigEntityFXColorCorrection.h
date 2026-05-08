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

#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETAMBIENTEQUATORCOLOR_OFFSET UNITYSDK_OFFSET(0x186B7F90)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETAMBIENTGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x186B8030)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETAMBIENTSKYCOLOR_OFFSET UNITYSDK_OFFSET(0x186B7EF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETAPPLYSATURATIONLUTTOUBERPOST_OFFSET UNITYSDK_OFFSET(0x186B60D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPALPHA_OFFSET UNITYSDK_OFFSET(0x186B5520)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPDISTANCE_OFFSET UNITYSDK_OFFSET(0x186B5400)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPEXTENSION_OFFSET UNITYSDK_OFFSET(0x186B5480)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCONTRAST_OFFSET UNITYSDK_OFFSET(0x186B6440)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETDESATURATE_OFFSET UNITYSDK_OFFSET(0x186B68C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETDISTANCEFOGSTART_OFFSET UNITYSDK_OFFSET(0x186B7120)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLECAMERACLIP_OFFSET UNITYSDK_OFFSET(0x186B5390)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLELIGHTSHAFT_OFFSET UNITYSDK_OFFSET(0x186B7950)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFOGHORIZONTALGRADIENT_OFFSET UNITYSDK_OFFSET(0x186B7190)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFORCEUSEMSAA_OFFSET UNITYSDK_OFFSET(0x186B6340)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXCOLORSATURATION_OFFSET UNITYSDK_OFFSET(0x186B6CC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXFOGMASKPASSON_OFFSET UNITYSDK_OFFSET(0x186B6C40)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXFXSCREENLIGHTMODE_OFFSET UNITYSDK_OFFSET(0x186B5710)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXLIGHTSHAFTMASKON_OFFSET UNITYSDK_OFFSET(0x186B5690)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXSCREENLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x186B5780)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXSCREENLIGHTMASKON_OFFSET UNITYSDK_OFFSET(0x186B5820)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETGAMMA_OFFSET UNITYSDK_OFFSET(0x186B6540)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x186B8290)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETHEIGHTFOGHEIGHT_OFFSET UNITYSDK_OFFSET(0x186B7200)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETHEIGHTFOGSTART_OFFSET UNITYSDK_OFFSET(0x186B7270)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETINDIRECTSPECULARINTENSITY_OFFSET UNITYSDK_OFFSET(0x186B6EC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETINVERT_OFFSET UNITYSDK_OFFSET(0x186B6940)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETJUSTCONTROLPARTICLELIGHT_OFFSET UNITYSDK_OFFSET(0x186B6D40)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER1CLOUDAROUNDSUNCOLOR_OFFSET UNITYSDK_OFFSET(0x186B7680)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER1MIDDLECLOUDGRADIENT_OFFSET UNITYSDK_OFFSET(0x186B7610)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER2CLOUDAROUNDSUNCOLOR_OFFSET UNITYSDK_OFFSET(0x186B7770)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER2MIDDLECLOUDGRADIENT_OFFSET UNITYSDK_OFFSET(0x186B7700)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER3CLOUDAROUNDSUNCOLOR_OFFSET UNITYSDK_OFFSET(0x186B7860)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER3MIDDLECLOUDGRADIENT_OFFSET UNITYSDK_OFFSET(0x186B77F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTBLUR_OFFSET UNITYSDK_OFFSET(0x186B7CF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCOLORCLAMP_OFFSET UNITYSDK_OFFSET(0x186B7AD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCOLOR_OFFSET UNITYSDK_OFFSET(0x186B7B50)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCUSTOMCENTER_OFFSET UNITYSDK_OFFSET(0x186B7DF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTFADELENGTH_OFFSET UNITYSDK_OFFSET(0x186B7C70)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTINTENSITY_OFFSET UNITYSDK_OFFSET(0x186B7A50)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTLENGTH_OFFSET UNITYSDK_OFFSET(0x186B7BF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x186B79D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTUSECUSTOMCENTER_OFFSET UNITYSDK_OFFSET(0x186B7D70)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTMULTIPLYINTENSITY_OFFSET UNITYSDK_OFFSET(0x186B6DC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTTHREADHOLD_OFFSET UNITYSDK_OFFSET(0x186B6E40)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTINVERT_OFFSET UNITYSDK_OFFSET(0x186B65C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTMIDDLEPOINT_OFFSET UNITYSDK_OFFSET(0x186B67C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTSOFTNESS_OFFSET UNITYSDK_OFFSET(0x186B6840)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONEA_OFFSET UNITYSDK_OFFSET(0x186B66C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONEB_OFFSET UNITYSDK_OFFSET(0x186B6740)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONECOLORS_OFFSET UNITYSDK_OFFSET(0x186B6640)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETMIDDLECOLOR_OFFSET UNITYSDK_OFFSET(0x186B81F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETMIDDLEPOINT_OFFSET UNITYSDK_OFFSET(0x186B6B40)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETOVERRIDEWEATHERCONFIG_OFFSET UNITYSDK_OFFSET(0x186B7E70)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETOVERRIDEWEATHERGICONFIG_OFFSET UNITYSDK_OFFSET(0x186B80D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETPOSTEXPOSURE_OFFSET UNITYSDK_OFFSET(0x186B63C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETRAINDROPCOLOR_OFFSET UNITYSDK_OFFSET(0x186B6F40)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETRAINDROPSPLASHCOLOR_OFFSET UNITYSDK_OFFSET(0x186B7030)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETRAINDROPSPLASHCOUNT_OFFSET UNITYSDK_OFFSET(0x186B70B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSATURATION_OFFSET UNITYSDK_OFFSET(0x186B64C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENELUTCONTRIBUTION_OFFSET UNITYSDK_OFFSET(0x186B78E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSEFFECTINTENSITY_OFFSET UNITYSDK_OFFSET(0x186B58A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSEMISSIONCOLOR_OFFSET UNITYSDK_OFFSET(0x186B6230)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSGBUFFERSATURATION_OFFSET UNITYSDK_OFFSET(0x186B59A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSIGNORERIDUS_OFFSET UNITYSDK_OFFSET(0x186B6150)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSOVERRIDEWEATHERGBUFFERSATURATION_OFFSET UNITYSDK_OFFSET(0x186B5920)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSRADIUSALPHAPOW_OFFSET UNITYSDK_OFFSET(0x186B61C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONLUT_OFFSET UNITYSDK_OFFSET(0x186B5CA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPGAP2_OFFSET UNITYSDK_OFFSET(0x186B5E50)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPGAP3_OFFSET UNITYSDK_OFFSET(0x186B5F90)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPGAP_OFFSET UNITYSDK_OFFSET(0x186B5D10)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPVALUE2_OFFSET UNITYSDK_OFFSET(0x186B5EF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPVALUE3_OFFSET UNITYSDK_OFFSET(0x186B6030)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPVALUE_OFFSET UNITYSDK_OFFSET(0x186B5DB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSUSESATURATIONLUT_OFFSET UNITYSDK_OFFSET(0x186B5A20)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALSKYSATURATION_OFFSET UNITYSDK_OFFSET(0x186B62D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYCLOUDHORIZONTALGRADIENT_OFFSET UNITYSDK_OFFSET(0x186B7520)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYCOLOR_OFFSET UNITYSDK_OFFSET(0x186B8150)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYHORIZONTALGRADIENT_OFFSET UNITYSDK_OFFSET(0x186B73D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYHORIZONTALHEIGHT_OFFSET UNITYSDK_OFFSET(0x186B7440)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYHORIZONTALOFFSET_OFFSET UNITYSDK_OFFSET(0x186B74B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYVERTICALGRADIENT_OFFSET UNITYSDK_OFFSET(0x186B7360)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSOFTNESS_OFFSET UNITYSDK_OFFSET(0x186B6BC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSUNDISCCOLOR_OFFSET UNITYSDK_OFFSET(0x186B7590)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONEA_OFFSET UNITYSDK_OFFSET(0x186B6A40)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONEB_OFFSET UNITYSDK_OFFSET(0x186B6AC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONECOLORS_OFFSET UNITYSDK_OFFSET(0x186B69C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETVOLUMETRICFOGCOLOR_OFFSET UNITYSDK_OFFSET(0x186B72E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWEATHERCONFIGWEIGHT_OFFSET UNITYSDK_OFFSET(0x186B5610)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWEATHERCONFIG_OFFSET UNITYSDK_OFFSET(0x186B55A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWETNESSNOISECLAMP_OFFSET UNITYSDK_OFFSET(0x186B6FC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GET_SCENESPECIALPPSSATURATIONLUT_OFFSET UNITYSDK_OFFSET(0x186B5AA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x186B8330)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityFXColorCorrection_TypeDefinitionIndex = 39577;

	class ConfigEntityFXColorCorrection : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::UnityEngine::Gradient* layer3MiddleCloudGradient; // 0x40
		::MoleMole::Config::ScreenEffectFloat* softness; // 0x48
		::MoleMole::Config::ScreenEffectBool* fxFogMaskPassOn; // 0x50
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampValue2; // 0x58
		::MoleMole::Config::ScreenEffectColor* ambientEquatorColor; // 0x60
		::MoleMole::Config::ScreenEffectFloat* localLightThreadHold; // 0x68
		::MoleMole::Config::ScreenEffectColor* groundColor; // 0x70
		::UnityEngine::Gradient* skyHorizontalGradient; // 0x78
		::MoleMole::Config::ScreenEffectColor* middleColor; // 0x80
		::MoleMole::Config::ScreenEffectColor* skyColor; // 0x88
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampValue; // 0x90
		::MoleMole::Config::ScreenEffectColor* lightShaftColor; // 0x98
		::MoleMole::Config::ScreenEffectVector2* lightShaftCustomCenter; // 0xA0
		::MoleMole::Config::ScreenEffectFloat* lightShaftThreshold; // 0xA8
		::MoleMole::Config::ScreenEffectBool* ForceUseMsaa; // 0xB0
		::MoleMole::Config::ScreenEffectFloat* fxColorSaturation; // 0xB8
		::MoleMole::Config::ScreenEffectFloat* gamma; // 0xC0
		::MoleMole::Config::ScreenEffectFloat* contrast; // 0xC8
		::UnityEngine::Gradient* layer2MiddleCloudGradient; // 0xD0
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampGap3; // 0xD8
		::MoleMole::Config::ScreenEffectBool* lightShaftColorClamp; // 0xE0
		::MoleMole::Config::ScreenEffectFloat* lutSoftness; // 0xE8
		::MoleMole::Config::ScreenEffectBool* fxLightShaftMaskOn; // 0xF0
		::MoleMole::Config::ScreenEffectBool* toneColors; // 0xF8
		::MoleMole::Config::ScreenEffectBool* lightShaftUseCustomCenter; // 0x100
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampGap; // 0x108
		::MoleMole::Config::ScreenEffectFloat* middlePoint; // 0x110
		::UnityEngine::Gradient* layer1MiddleCloudGradient; // 0x118
		::MoleMole::Config::ScreenEffectColor* ambientSkyColor; // 0x120
		::MoleMole::Config::ScreenEffectBool* fxScreenLightMaskOn; // 0x128
		::MoleMole::Config::ScreenEffectBool* lutInvert; // 0x130
		::MoleMole::Config::ScreenEffectColor* fxScreenLightColor; // 0x138
		::MoleMole::Config::ScreenEffectFloat* lightShaftIntensity; // 0x140
		::MoleMole::Config::ScreenEffectColor* ambientGroundColor; // 0x148
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* weatherConfig; // 0x150
		::MoleMole::Config::ScreenEffectBool* sceneSpecialPPSUseSaturationLut; // 0x158
		::MoleMole::Config::ScreenEffectFloat* lightShaftLength; // 0x160
		::MoleMole::Config::ScreenEffectFloat* weatherConfigWeight; // 0x168
		::MoleMole::Config::ScreenEffectBool* applySaturationLutToUberPost; // 0x170
		::MoleMole::Config::ScreenEffectFloat* lutMiddlePoint; // 0x178
		::MoleMole::Config::ScreenEffectFloat* indirectSpecularIntensity; // 0x180
		::MoleMole::Config::ScreenEffectBool* justControlParticleLight; // 0x188
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampGap2; // 0x190
		::UnityEngine::Gradient* skyCloudHorizontalGradient; // 0x198
		::MoleMole::Config::ScreenEffectFloat* saturation; // 0x1A0
		::MoleMole::Config::ScreenEffectVector3* cameraClipExtension; // 0x1A8
		::MoleMole::Config::ScreenEffectBool* overrideWeatherConfig; // 0x1B0
		::MoleMole::Config::ScreenEffectFloat* sceneSpecialPPSEffectIntensity; // 0x1B8
		::UnityEngine::Gradient* fogHorizontalGradient; // 0x1C0
		::MoleMole::Config::ScreenEffectFloat* cameraClipAlpha; // 0x1C8
		::System::String* sceneSpecialPPSSaturationLutPath; // 0x1D0
		::MoleMole::Config::ScreenEffectBool* invert; // 0x1D8
		::MoleMole::Config::ScreenEffectColor* sceneSpecialPPSEmissionColor; // 0x1E0
		::MoleMole::Config::ScreenEffectFloat* sceneSpecialPPSGBufferSaturation; // 0x1E8
		::MoleMole::Config::ScreenEffectFloat* lightShaftFadeLength; // 0x1F0
		::MoleMole::Config::ScreenEffectBool* sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x1F8
		::MoleMole::Config::ScreenEffectBool* lightShaftBlur; // 0x200
		::MoleMole::Config::ScreenEffectFloat* localLightMultiplyIntensity; // 0x208
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampValue3; // 0x210
		::MoleMole::Config::ScreenEffectBool* enableLightShaft; // 0x218
		::MoleMole::Config::ScreenEffectBool* lutToneColors; // 0x220
		::MoleMole::Config::ScreenEffectFloat* postExposure; // 0x228
		::MoleMole::Config::ScreenEffectFloat* desaturate; // 0x230
		::UnityEngine::Gradient* skyVerticalGradient; // 0x238
		::MoleMole::Config::ScreenEffectBool* overrideWeatherGIConfig; // 0x240
		::MoleMole::Config::ScreenEffectFloat* cameraClipDistance; // 0x248
		::UnityEngine::Texture2D* _sceneSpecialPPSSaturationLut; // 0x250
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSOverrideWeatherGBufferSaturationHandleType; // 0x258
		::MoleMole::Config::ScreenEffectFieldHandleType wetnessNoiseClampHandleType; // 0x25C
		::MoleMole::Config::ScreenEffectFieldHandleType lutToneBHandleType; // 0x260
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampGapHandleType; // 0x264
		::MoleMole::Config::ScreenEffectFieldHandleType middlePointHandleType; // 0x268
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftCustomCenterHandleType; // 0x26C
		::MoleMole::Config::ScreenEffectFieldHandleType toneAHandleType; // 0x270
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampGap2HandleType; // 0x274
		::UnityEngine::Color layer1CloudAroundSunColor; // 0x278
		::MoleMole::Config::ScreenEffectFieldHandleType skyVerticalGradientHandleType; // 0x288
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftColorHandleType; // 0x28C
		::System::Single heightFogHeight; // 0x290
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampValueHandleType; // 0x294
		::System::Int32 rainDropSplashCount; // 0x298
		::MoleMole::Config::ScreenEffectFieldHandleType toneBHandleType; // 0x29C
		::MoleMole::Config::ScreenEffectFieldHandleType layer3MiddleCloudGradientHandleType; // 0x2A0
		::MoleMole::Config::ScreenEffectFieldHandleType groundColorHandleType; // 0x2A4
		::MoleMole::Config::ScreenEffectFieldHandleType skyHorizontalHeightHandleType; // 0x2A8
		::MoleMole::Config::ScreenEffectFieldHandleType volumetricFogColorHandleType; // 0x2AC
		::MoleMole::Config::ScreenEffectFieldHandleType heightFogHeightHandleType; // 0x2B0
		::MoleMole::Config::ScreenEffectFieldHandleType fxColorSaturationHandleType; // 0x2B4
		::MoleMole::Config::ScreenEffectFieldHandleType localLightMultiplyIntensityHandleType; // 0x2B8
		::MoleMole::Config::ScreenEffectFieldHandleType middleColorHandleType; // 0x2BC
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftThresholdHandleType; // 0x2C0
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSIgnoreRidusHandleType; // 0x2C4
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftUseCustomCenterHandleType; // 0x2C8
		::MoleMole::Config::ScreenEffectFieldHandleType lutMiddlePointHandleType; // 0x2CC
		::MoleMole::Config::ScreenEffectFieldHandleType fxLightShaftMaskOnHandleType; // 0x2D0
		::MoleMole::Config::ScreenEffectFieldHandleType cameraClipAlphaHandleType; // 0x2D4
		::MoleMole::Config::ScreenEffectFieldHandleType enableLightShaftHandleType; // 0x2D8
		::UnityEngine::Color volumetricFogColor; // 0x2DC
		::MoleMole::Config::ScreenEffectFieldHandleType cameraClipDistanceHandleType; // 0x2EC
		::MoleMole::Config::ScreenEffectFieldHandleType skyColorHandleType; // 0x2F0
		::MoleMole::Config::ScreenEffectFieldHandleType postExposureHandleType; // 0x2F4
		::MoleMole::Config::ScreenEffectFieldHandleType sceneLutContributionHandleType; // 0x2F8
		::MoleMole::Config::ScreenEffectFieldHandleType rainDropColorHandleType; // 0x2FC
		::MoleMole::Config::ScreenEffectFieldHandleType layer2CloudAroundSunColorHandleType; // 0x300
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSEffectIntensityHandleType; // 0x304
		::MoleMole::Config::ScreenEffectFieldHandleType lutInvertHandleType; // 0x308
		::UnityEngine::Vector2 wetnessNoiseClamp; // 0x30C
		::UnityEngine::Color toneA; // 0x314
		::UnityEngine::Color lutToneB; // 0x324
		::UnityEngine::Color lutToneA; // 0x334
		::UnityEngine::Color toneB; // 0x344
		::UnityEngine::Color layer2CloudAroundSunColor; // 0x354
		::System::Boolean enableCameraClip; // 0x364
		::MoleMole::Config::ScreenEffectFieldHandleType skyHorizontalOffsetHandleType; // 0x368
		::UnityEngine::Color sunDiscColor; // 0x36C
		::MoleMole::Config::ScreenEffectFieldHandleType fxFxScreenLightModeHandleType; // 0x37C
		::MoleMole::Config::ScreenEffectFieldHandleType lutToneColorsHandleType; // 0x380
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSGBufferSaturationHandleType; // 0x384
		::UnityEngine::Color rainDropColor; // 0x388
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode fxFxScreenLightMode; // 0x398
		::MoleMole::Config::ScreenEffectFieldHandleType justControlParticleLightHandleType; // 0x39C
		::MoleMole::Config::ScreenEffectFieldHandleType sunDiscColorHandleType; // 0x3A0
		::MoleMole::Config::ScreenEffectFieldHandleType indirectSpecularIntensityHandleType; // 0x3A4
		::MoleMole::Config::ScreenEffectFieldHandleType overrideWeatherConfigHandleType; // 0x3A8
		::MoleMole::Config::ScreenEffectFieldHandleType ForceUseMsaaHandleType; // 0x3AC
		::MoleMole::Config::ScreenEffectFieldHandleType layer1CloudAroundSunColorHandleType; // 0x3B0
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftColorClampHandleType; // 0x3B4
		::MoleMole::Config::ScreenEffectFieldHandleType cameraClipExtensionHandleType; // 0x3B8
		::MoleMole::Config::ScreenEffectFieldHandleType layer1MiddleCloudGradientHandleType; // 0x3BC
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationLutHandleType; // 0x3C0
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampValue3HandleType; // 0x3C4
		::MoleMole::Config::ScreenEffectFieldHandleType overrideWeatherGIConfigHandleType; // 0x3C8
		::MoleMole::Config::ScreenEffectFieldHandleType enableCameraClipHandleType; // 0x3CC
		::System::Single sceneSpecialSkySaturation; // 0x3D0
		::MoleMole::Config::ScreenEffectFieldHandleType fxScreenLightMaskOnHandleType; // 0x3D4
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSUseSaturationLutHandleType; // 0x3D8
		::MoleMole::Config::ScreenEffectFieldHandleType heightFogStartHandleType; // 0x3DC
		::MoleMole::Config::ScreenEffectFieldHandleType fogHorizontalGradientHandleType; // 0x3E0
		::MoleMole::Config::ScreenEffectFieldHandleType rainDropSplashCountHandleType; // 0x3E4
		::MoleMole::Config::ScreenEffectFieldHandleType distanceFogStartHandleType; // 0x3E8
		::MoleMole::Config::ScreenEffectFieldHandleType desaturateHandleType; // 0x3EC
		::MoleMole::Config::ScreenEffectFieldHandleType contrastHandleType; // 0x3F0
		::MoleMole::Config::ScreenEffectFieldHandleType applySaturationLutToUberPostHandleType; // 0x3F4
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSEmissionColorHandleType; // 0x3F8
		::MoleMole::Config::ScreenEffectFieldHandleType ambientGroundColorHandleType; // 0x3FC
		::MoleMole::Config::ScreenEffectFieldHandleType skyHorizontalGradientHandleType; // 0x400
		::System::Single sceneSpecialPPSRadiusAlphaPow; // 0x404
		::System::Single sceneSpecialPPSIgnoreRidus; // 0x408
		::MoleMole::Config::ScreenEffectFieldHandleType rainDropSplashColorHandleType; // 0x40C
		::System::Single skyHorizontalOffset; // 0x410
		::MoleMole::Config::ScreenEffectFieldHandleType saturationHandleType; // 0x414
		::MoleMole::Config::ScreenEffectFieldHandleType lutSoftnessHandleType; // 0x418
		::MoleMole::Config::ScreenEffectFieldHandleType localLightThreadHoldHandleType; // 0x41C
		::MoleMole::Config::ScreenEffectFieldHandleType skyCloudHorizontalGradientHandleType; // 0x420
		::MoleMole::Config::ScreenEffectFieldHandleType weatherConfigWeightHandleType; // 0x424
		::UnityEngine::Color layer3CloudAroundSunColor; // 0x428
		::MoleMole::Config::ScreenEffectFieldHandleType lutToneAHandleType; // 0x438
		::System::Single heightFogStart; // 0x43C
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftFadeLengthHandleType; // 0x440
		::MoleMole::Config::ScreenEffectFieldHandleType ambientEquatorColorHandleType; // 0x444
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampGap3HandleType; // 0x448
		::System::Single skyHorizontalHeight; // 0x44C
		::System::Single distanceFogStart; // 0x450
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftIntensityHandleType; // 0x454
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialSkySaturationHandleType; // 0x458
		::MoleMole::Config::ScreenEffectFieldHandleType softnessHandleType; // 0x45C
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogMaskPassOnHandleType; // 0x460
		::System::Single sceneLutContribution; // 0x464
		::MoleMole::Config::ScreenEffectFieldHandleType layer2MiddleCloudGradientHandleType; // 0x468
		::MoleMole::Config::ScreenEffectFieldHandleType weatherConfigHandleType; // 0x46C
		::MoleMole::Config::ScreenEffectFieldHandleType invertHandleType; // 0x470
		::MoleMole::Config::ScreenEffectFieldHandleType fxScreenLightColorHandleType; // 0x474
		::UnityEngine::Color rainDropSplashColor; // 0x478
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampValue2HandleType; // 0x488
		::MoleMole::Config::ScreenEffectFieldHandleType layer3CloudAroundSunColorHandleType; // 0x48C
		::MoleMole::Config::ScreenEffectFieldHandleType toneColorsHandleType; // 0x490
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSRadiusAlphaPowHandleType; // 0x494
		::MoleMole::Config::ScreenEffectFieldHandleType gammaHandleType; // 0x498
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftLengthHandleType; // 0x49C
		::MoleMole::Config::ScreenEffectFieldHandleType ambientSkyColorHandleType; // 0x4A0
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftBlurHandleType; // 0x4A4

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
	};
}
