#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapBloomQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BloomResolution.h"
#include "unitysdk/UnityEngine/Rendering/Universal/HQBloomMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/PP_Quality.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector4; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class FlareProfile_NativeSRP; }

#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETAREATHRESHOLD_OFFSET UNITYSDK_OFFSET(0xE970700)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETBLURLEVELBUFFERHEIGHTS_OFFSET UNITYSDK_OFFSET(0xE970170)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETBLURLEVELWEIGHTS_OFFSET UNITYSDK_OFFSET(0xE96FE60)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETBLURRADIUS_OFFSET UNITYSDK_OFFSET(0xE96FBE0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETDIRTINTENSITY_OFFSET UNITYSDK_OFFSET(0xE970500)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETDIRTTEXTURE_OFFSET UNITYSDK_OFFSET(0xE970490)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETDOBLOOMAFTERTAA_OFFSET UNITYSDK_OFFSET(0xE96FC60)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETENABLESPRITEFLARE_OFFSET UNITYSDK_OFFSET(0xE970600)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETFLAREPROFILE_OFFSET UNITYSDK_OFFSET(0xE970A00)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETFLARETHRESHOLD_OFFSET UNITYSDK_OFFSET(0xE970680)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETGLAREINTENSITY_OFFSET UNITYSDK_OFFSET(0xE96E570)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETGLARESCALERFORHDR_OFFSET UNITYSDK_OFFSET(0xE96FDE0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETGLARESCALER_OFFSET UNITYSDK_OFFSET(0xE96E470)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETGLARETHRESHOLDFORHDR_OFFSET UNITYSDK_OFFSET(0xE96FD60)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETGLARETHRESHOLD_OFFSET UNITYSDK_OFFSET(0xE96E4F0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHASEXTRADOWNSAMPLE_OFFSET UNITYSDK_OFFSET(0xE970580)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMINTENSITY_OFFSET UNITYSDK_OFFSET(0xE96F8D0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMMODE_OFFSET UNITYSDK_OFFSET(0xE96E6F0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMRESOLUTION_OFFSET UNITYSDK_OFFSET(0xE96FAF0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSCATTER_OFFSET UNITYSDK_OFFSET(0xE96F9D0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE1RTX_OFFSET UNITYSDK_OFFSET(0xE96F4D0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE1_OFFSET UNITYSDK_OFFSET(0xE96ED50)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE2RTX_OFFSET UNITYSDK_OFFSET(0xE96F450)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE2_OFFSET UNITYSDK_OFFSET(0xE96ECD0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE3RTX_OFFSET UNITYSDK_OFFSET(0xE96F3D0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE3_OFFSET UNITYSDK_OFFSET(0xE96EC50)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE4RTX_OFFSET UNITYSDK_OFFSET(0xE96F350)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE4_OFFSET UNITYSDK_OFFSET(0xE96EBD0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE5RTX_OFFSET UNITYSDK_OFFSET(0xE96F2D0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE5_OFFSET UNITYSDK_OFFSET(0xE96EB50)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE6RTX_OFFSET UNITYSDK_OFFSET(0xE96F250)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE6_OFFSET UNITYSDK_OFFSET(0xE96EAD0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xE96F950)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT1RTX_OFFSET UNITYSDK_OFFSET(0xE96F850)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT1_OFFSET UNITYSDK_OFFSET(0xE96F050)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT2RTX_OFFSET UNITYSDK_OFFSET(0xE96F7D0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT2_OFFSET UNITYSDK_OFFSET(0xE96EFD0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT3RTX_OFFSET UNITYSDK_OFFSET(0xE96F750)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT3_OFFSET UNITYSDK_OFFSET(0xE96EF50)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT4RTX_OFFSET UNITYSDK_OFFSET(0xE96F6D0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT4_OFFSET UNITYSDK_OFFSET(0xE96EED0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT5RTX_OFFSET UNITYSDK_OFFSET(0xE96F650)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT5_OFFSET UNITYSDK_OFFSET(0xE96EE50)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT6RTX_OFFSET UNITYSDK_OFFSET(0xE96F5D0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT6_OFFSET UNITYSDK_OFFSET(0xE96EDD0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT_OFFSET UNITYSDK_OFFSET(0xE96FA50)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMENABLERTXSINGLECONTROL_OFFSET UNITYSDK_OFFSET(0xE96F0D0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMINTENSITYCHARFROMSCENE_OFFSET UNITYSDK_OFFSET(0xE970A70)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMINTENSITYCHAR_OFFSET UNITYSDK_OFFSET(0xE96EA50)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMINTENSITYRTX_OFFSET UNITYSDK_OFFSET(0xE96F1D0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMINTENSITY_OFFSET UNITYSDK_OFFSET(0xE96E9D0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMMAXTHRESHOLDCHAR_OFFSET UNITYSDK_OFFSET(0xE96E950)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMMAXTHRESHOLDRTX_OFFSET UNITYSDK_OFFSET(0xE96F550)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMMAXTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xE96E8D0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMTHRESHOLDCHAR_OFFSET UNITYSDK_OFFSET(0xE96E850)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMTHRESHOLDRTX_OFFSET UNITYSDK_OFFSET(0xE96F150)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xE96E7D0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUESAMPLEQUALITY_OFFSET UNITYSDK_OFFSET(0xE96E760)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETINTENSITYCLAMP_OFFSET UNITYSDK_OFFSET(0xE970900)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETITERATIONNUM_OFFSET UNITYSDK_OFFSET(0xE970980)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETQUALITY_OFFSET UNITYSDK_OFFSET(0xE970100)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETRANDOMIZE_OFFSET UNITYSDK_OFFSET(0xE970800)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETSATURATE_OFFSET UNITYSDK_OFFSET(0xE970780)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETSECONDARYBLURLEVELBUFFERHEIGHT_OFFSET UNITYSDK_OFFSET(0xE970210)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETSECONDARYBLURRADIUS_OFFSET UNITYSDK_OFFSET(0xE970080)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETSECONDARYGLARECONTRAST_OFFSET UNITYSDK_OFFSET(0xE96FF80)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETSECONDARYGLARETHRESHOLD_OFFSET UNITYSDK_OFFSET(0xE96FF00)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETSECONDARYGLAREWEIGHT_OFFSET UNITYSDK_OFFSET(0xE970000)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETSIZECLAMP_OFFSET UNITYSDK_OFFSET(0xE970880)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETUSEREALDOWNSAMPLE_OFFSET UNITYSDK_OFFSET(0xE96FB60)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETUSESOURCELUMAMASK_OFFSET UNITYSDK_OFFSET(0xE96FCE0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETXBLURINTENSITY_OFFSET UNITYSDK_OFFSET(0xE96E5F0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETYBLURINTENSITY_OFFSET UNITYSDK_OFFSET(0xE96E670)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GET_DIRTTEXTURE_OFFSET UNITYSDK_OFFSET(0xE970290)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM__CTOR_OFFSET UNITYSDK_OFFSET(0xE970AF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigNapBloom_TypeDefinitionIndex = 56345;

	class ConfigNapBloom : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* secondaryGlareThreshold; // 0x40
		::MoleMole::Config::ScreenEffectFloat* glareIntensity; // 0x48
		::MoleMole::Config::ScreenEffectFloat* blurRadius; // 0x50
		::MoleMole::Config::ScreenEffectFloat* hQBloomIntensity; // 0x58
		::MoleMole::Config::ScreenEffectFloat* randomize; // 0x60
		::MoleMole::Config::ScreenEffectFloat* xBlurIntensity; // 0x68
		::MoleMole::Config::ScreenEffectFloat* secondaryBlurRadius; // 0x70
		::MoleMole::Config::ScreenEffectFloat* hqUEBloomMaxThresholdChar; // 0x78
		::MoleMole::Config::ScreenEffectFloat* hqBloomTint4RTX; // 0x80
		::MoleMole::Config::ScreenEffectFloat* secondaryGlareWeight; // 0x88
		::MoleMole::Config::ScreenEffectFloat* dirtIntensity; // 0x90
		::MoleMole::Config::ScreenEffectFloat* hqBloomTint3RTX; // 0x98
		::MoleMole::Config::ScreenEffectFloat* hqBloomSize2; // 0xA0
		::System::String* dirtTexturePath; // 0xA8
		::MoleMole::Config::ScreenEffectFloat* hqBloomTint2RTX; // 0xB0
		::MoleMole::Config::ScreenEffectFloat* hqUEBloomIntensity; // 0xB8
		::MoleMole::Config::ScreenEffectBool* useSourceLumaMask; // 0xC0
		::MoleMole::Config::ScreenEffectFloat* hqBloomTint3; // 0xC8
		::MoleMole::Config::ScreenEffectFloat* hqBloomTint6RTX; // 0xD0
		::MoleMole::Config::ScreenEffectFloat* hqBloomSize5; // 0xD8
		::MoleMole::Config::ScreenEffectFloat* hqUEBloomIntensityRTX; // 0xE0
		::MoleMole::Config::ScreenEffectFloat* hqBloomSize4; // 0xE8
		::MoleMole::Config::ScreenEffectFloat* hqBloomTint6; // 0xF0
		::MoleMole::Config::ScreenEffectFloat* hqBloomSize6RTX; // 0xF8
		::MoleMole::Config::ScreenEffectColor* hQBloomTint; // 0x100
		::MoleMole::Config::ScreenEffectFloat* hqBloomTint1; // 0x108
		::MoleMole::Config::ScreenEffectFloat* hqBloomSize1; // 0x110
		::MoleMole::Config::ScreenEffectFloat* hqUEBloomIntensityChar; // 0x118
		::MoleMole::Config::ScreenEffectFloat* hqBloomTint2; // 0x120
		::MoleMole::Config::ScreenEffectFloat* flareThreshold; // 0x128
		::UnityEngine::Texture2D* _dirtTexture; // 0x130
		::MoleMole::Config::ScreenEffectFloat* hqBloomTint5; // 0x138
		::MoleMole::Config::ScreenEffectFloat* hqBloomSize1RTX; // 0x140
		::MoleMole::Config::ScreenEffectFloat* saturate; // 0x148
		::MoleMole::Config::ScreenEffectFloat* hqBloomTint1RTX; // 0x150
		::MoleMole::Config::ScreenEffectFloat* hqUEBloomMaxThreshold; // 0x158
		::MoleMole::Config::ScreenEffectFloat* glareThreshold; // 0x160
		::MoleMole::Config::ScreenEffectFloat* intensityClamp; // 0x168
		::MoleMole::Config::ScreenEffectBool* HasExtraDownsample; // 0x170
		::MoleMole::Config::ScreenEffectFloat* secondaryBlurLevelBufferHeight; // 0x178
		::MoleMole::Config::ScreenEffectFloat* yBlurIntensity; // 0x180
		::MoleMole::Config::ScreenEffectFloat* hqUEBloomMaxThresholdRTX; // 0x188
		::MoleMole::Config::ScreenEffectFloat* iterationNum; // 0x190
		::MoleMole::Config::ScreenEffectBool* useRealDownSample; // 0x198
		::MoleMole::Config::ScreenEffectBool* enableSpriteFlare; // 0x1A0
		::MoleMole::Config::ScreenEffectFloat* hQBloomScatter; // 0x1A8
		::MoleMole::Config::ScreenEffectFloat* hqBloomSize4RTX; // 0x1B0
		::MoleMole::Config::ScreenEffectFloat* hqUEBloomThreshold; // 0x1B8
		::MoleMole::Config::ScreenEffectFloat* hqBloomTint5RTX; // 0x1C0
		::MoleMole::Config::ScreenEffectFloat* glareScaler; // 0x1C8
		::MoleMole::Config::ScreenEffectFloat* hqUEBloomIntensityCharFromScene; // 0x1D0
		::MoleMole::Config::ScreenEffectFloat* hqBloomSize3; // 0x1D8
		::MoleMole::Config::ScreenEffectFloat* secondaryGlareContrast; // 0x1E0
		::MoleMole::Config::ScreenEffectFloat* hqBloomSize6; // 0x1E8
		::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP* flareProfile; // 0x1F0
		::MoleMole::Config::ScreenEffectFloat* hQBloomThreshold; // 0x1F8
		::MoleMole::Config::ScreenEffectFloat* glareThresholdForHDR; // 0x200
		::MoleMole::Config::ScreenEffectFloat* hqUEBloomThresholdChar; // 0x208
		::MoleMole::Config::ScreenEffectFloat* hqUEBloomThresholdRTX; // 0x210
		::MoleMole::Config::ScreenEffectFloat* sizeClamp; // 0x218
		::MoleMole::Config::ScreenEffectFloat* hqBloomSize5RTX; // 0x220
		::MoleMole::Config::ScreenEffectVector4* blurLevelWeights; // 0x228
		::MoleMole::Config::ScreenEffectBool* doBloomAfterTAA; // 0x230
		::MoleMole::Config::ScreenEffectFloat* hqBloomSize2RTX; // 0x238
		::MoleMole::Config::ScreenEffectFloat* hqBloomTint4; // 0x240
		::MoleMole::Config::ScreenEffectFloat* areaThreshold; // 0x248
		::MoleMole::Config::ScreenEffectFloat* glareScalerForHDR; // 0x250
		::MoleMole::Config::ScreenEffectVector4* blurLevelBufferHeights; // 0x258
		::MoleMole::Config::ScreenEffectFloat* hqBloomSize3RTX; // 0x260
		::MoleMole::Config::ScreenEffectBool* hqUEBloomEnableRTXSingleControl; // 0x268
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomTint4RTXHandleType; // 0x270
		::UnityEngine::Rendering::Universal::HQBloomMode hqBloomMode; // 0x274
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomSize1HandleType; // 0x278
		::MoleMole::Config::ScreenEffectFieldHandleType enableSpriteFlareHandleType; // 0x27C
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomSize4RTXHandleType; // 0x280
		::MoleMole::Config::ScreenEffectFieldHandleType hQBloomIntensityHandleType; // 0x284
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomSize6HandleType; // 0x288
		::MoleMole::Config::ScreenEffectFieldHandleType glareScalerHandleType; // 0x28C
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomResolutionHandleType; // 0x290
		::MoleMole::Config::ScreenEffectFieldHandleType hqUEBloomThresholdHandleType; // 0x294
		::MoleMole::Config::ScreenEffectFieldHandleType doBloomAfterTAAHandleType; // 0x298
		::MoleMole::Config::ScreenEffectFieldHandleType glareIntensityHandleType; // 0x29C
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomTint1RTXHandleType; // 0x2A0
		::MoleMole::Config::ScreenEffectFieldHandleType useSourceLumaMaskHandleType; // 0x2A4
		::MoleMole::Config::ScreenEffectFieldHandleType hqUEBloomIntensityHandleType; // 0x2A8
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomSize3HandleType; // 0x2AC
		::MoleMole::Config::ScreenEffectFieldHandleType hqUEBloomIntensityRTXHandleType; // 0x2B0
		::MoleMole::Config::ScreenEffectFieldHandleType dirtIntensityHandleType; // 0x2B4
		::MoleMole::Config::ScreenEffectFieldHandleType flareThresholdHandleType; // 0x2B8
		::MoleMole::Config::ScreenEffectFieldHandleType hQBloomTintHandleType; // 0x2BC
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomTint5HandleType; // 0x2C0
		::MoleMole::Config::ScreenEffectFieldHandleType hqUEBloomEnableRTXSingleControlHandleType; // 0x2C4
		::MoleMole::Config::ScreenEffectFieldHandleType blurLevelBufferHeightsHandleType; // 0x2C8
		::MoleMole::Config::ScreenEffectFieldHandleType hqUEBloomMaxThresholdCharHandleType; // 0x2CC
		::MoleMole::Config::ScreenEffectFieldHandleType secondaryBlurRadiusHandleType; // 0x2D0
		::MoleMole::Config::ScreenEffectFieldHandleType glareThresholdHandleType; // 0x2D4
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomTint5RTXHandleType; // 0x2D8
		::MoleMole::Config::ScreenEffectFieldHandleType hqUEBloomIntensityCharFromSceneHandleType; // 0x2DC
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomSize3RTXHandleType; // 0x2E0
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomTint6HandleType; // 0x2E4
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomTint2HandleType; // 0x2E8
		::MoleMole::Config::ScreenEffectFieldHandleType xBlurIntensityHandleType; // 0x2EC
		::MoleMole::Config::ScreenEffectFieldHandleType hqUESampleQualityHandleType; // 0x2F0
		::MoleMole::Config::ScreenEffectFieldHandleType blurLevelWeightsHandleType; // 0x2F4
		::MoleMole::Config::ScreenEffectFieldHandleType secondaryGlareContrastHandleType; // 0x2F8
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomSize1RTXHandleType; // 0x2FC
		::MoleMole::Config::ScreenEffectFieldHandleType blurRadiusHandleType; // 0x300
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomSize4HandleType; // 0x304
		::MoleMole::Config::ScreenEffectFieldHandleType glareScalerForHDRHandleType; // 0x308
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomModeHandleType; // 0x30C
		::MoleMole::Config::ScreenEffectFieldHandleType hqUEBloomThresholdCharHandleType; // 0x310
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomSize5RTXHandleType; // 0x314
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomTint4HandleType; // 0x318
		::MoleMole::Config::ScreenEffectFieldHandleType secondaryGlareWeightHandleType; // 0x31C
		::MoleMole::Config::ScreenEffectFieldHandleType hqUEBloomIntensityCharHandleType; // 0x320
		::MoleMole::Config::ScreenEffectFieldHandleType hqUEBloomMaxThresholdRTXHandleType; // 0x324
		::UnityEngine::NAPRenderPipeline0::NapBloomQuality quality; // 0x328
		::UnityEngine::Rendering::Universal::BloomResolution hqBloomResolution; // 0x32C
		::MoleMole::Config::ScreenEffectFieldHandleType saturateHandleType; // 0x330
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomTint3HandleType; // 0x334
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomTint6RTXHandleType; // 0x338
		::MoleMole::Config::ScreenEffectFieldHandleType randomizeHandleType; // 0x33C
		::MoleMole::Config::ScreenEffectFieldHandleType hqUEBloomThresholdRTXHandleType; // 0x340
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomTint3RTXHandleType; // 0x344
		::MoleMole::Config::ScreenEffectFieldHandleType yBlurIntensityHandleType; // 0x348
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomSize6RTXHandleType; // 0x34C
		::MoleMole::Config::ScreenEffectFieldHandleType iterationNumHandleType; // 0x350
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomTint2RTXHandleType; // 0x354
		::MoleMole::Config::ScreenEffectFieldHandleType hQBloomScatterHandleType; // 0x358
		::MoleMole::Config::ScreenEffectFieldHandleType hQBloomThresholdHandleType; // 0x35C
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomTint1HandleType; // 0x360
		::MoleMole::Config::ScreenEffectFieldHandleType hqUEBloomMaxThresholdHandleType; // 0x364
		::MoleMole::Config::ScreenEffectFieldHandleType HasExtraDownsampleHandleType; // 0x368
		::MoleMole::Config::ScreenEffectFieldHandleType secondaryBlurLevelBufferHeightHandleType; // 0x36C
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomSize5HandleType; // 0x370
		::MoleMole::Config::ScreenEffectFieldHandleType qualityHandleType; // 0x374
		::MoleMole::Config::ScreenEffectFieldHandleType secondaryGlareThresholdHandleType; // 0x378
		::UnityEngine::Rendering::Universal::PP_Quality hqUESampleQuality; // 0x37C
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomSize2RTXHandleType; // 0x380
		::MoleMole::Config::ScreenEffectFieldHandleType flareProfileHandleType; // 0x384
		::MoleMole::Config::ScreenEffectFieldHandleType areaThresholdHandleType; // 0x388
		::MoleMole::Config::ScreenEffectFieldHandleType hqBloomSize2HandleType; // 0x38C
		::MoleMole::Config::ScreenEffectFieldHandleType dirtTextureHandleType; // 0x390
		::MoleMole::Config::ScreenEffectFieldHandleType glareThresholdForHDRHandleType; // 0x394
		::MoleMole::Config::ScreenEffectFieldHandleType sizeClampHandleType; // 0x398
		::MoleMole::Config::ScreenEffectFieldHandleType useRealDownSampleHandleType; // 0x39C
		::MoleMole::Config::ScreenEffectFieldHandleType intensityClampHandleType; // 0x3A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM__CTOR_OFFSET))(this);
		}

		::System::Single GetGlareScaler(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETGLARESCALER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlareThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETGLARETHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlareIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETGLAREINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetXBlurIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETXBLURINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetYBlurIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETYBLURINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::HQBloomMode GetHqBloomMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::HQBloomMode(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::PP_Quality GetHqUESampleQuality(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::PP_Quality(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUESAMPLEQUALITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqUEBloomThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMTHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqUEBloomThresholdChar(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMTHRESHOLDCHAR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqUEBloomMaxThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMMAXTHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqUEBloomMaxThresholdChar(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMMAXTHRESHOLDCHAR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqUEBloomIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqUEBloomIntensityChar(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMINTENSITYCHAR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomSize6(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE6_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomSize5(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE5_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomSize4(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE4_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomSize3(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE3_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomSize2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomSize1(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE1_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomTint6(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT6_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomTint5(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT5_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomTint4(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT4_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomTint3(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT3_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomTint2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomTint1(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT1_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetHqUEBloomEnableRTXSingleControl(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMENABLERTXSINGLECONTROL_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqUEBloomThresholdRTX(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMTHRESHOLDRTX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqUEBloomIntensityRTX(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMINTENSITYRTX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomSize6RTX(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE6RTX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomSize5RTX(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE5RTX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomSize4RTX(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE4RTX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomSize3RTX(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE3RTX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomSize2RTX(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE2RTX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomSize1RTX(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSIZE1RTX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqUEBloomMaxThresholdRTX(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMMAXTHRESHOLDRTX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomTint6RTX(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT6RTX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomTint5RTX(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT5RTX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomTint4RTX(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT4RTX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomTint3RTX(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT3RTX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomTint2RTX(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT2RTX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqBloomTint1RTX(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT1RTX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHQBloomIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHQBloomThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHQBloomScatter(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMSCATTER_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetHQBloomTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::BloomResolution GetHqBloomResolution(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::BloomResolution(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQBLOOMRESOLUTION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetUseRealDownSample(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETUSEREALDOWNSAMPLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBlurRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETBLURRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetDoBloomAfterTAA(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETDOBLOOMAFTERTAA_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetUseSourceLumaMask(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETUSESOURCELUMAMASK_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlareThresholdForHDR(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETGLARETHRESHOLDFORHDR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlareScalerForHDR(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETGLARESCALERFORHDR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetBlurLevelWeights(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETBLURLEVELWEIGHTS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSecondaryGlareThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETSECONDARYGLARETHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSecondaryGlareContrast(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETSECONDARYGLARECONTRAST_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSecondaryGlareWeight(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETSECONDARYGLAREWEIGHT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetSecondaryBlurRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETSECONDARYBLURRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::NapBloomQuality GetQuality(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::NapBloomQuality(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETQUALITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetBlurLevelBufferHeights(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETBLURLEVELBUFFERHEIGHTS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetSecondaryBlurLevelBufferHeight(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETSECONDARYBLURLEVELBUFFERHEIGHT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_dirtTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GET_DIRTTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* GetDirtTexture(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETDIRTTEXTURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDirtIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETDIRTINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetHasExtraDownsample(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHASEXTRADOWNSAMPLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetEnableSpriteFlare(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETENABLESPRITEFLARE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFlareThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETFLARETHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetAreaThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETAREATHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSaturate(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETSATURATE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRandomize(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETRANDOMIZE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSizeClamp(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETSIZECLAMP_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetIntensityClamp(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETINTENSITYCLAMP_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetIterationNum(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETITERATIONNUM_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP* GetFlareProfile(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETFLAREPROFILE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHqUEBloomIntensityCharFromScene(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETHQUEBLOOMINTENSITYCHARFROMSCENE_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
