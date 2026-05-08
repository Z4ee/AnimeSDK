#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapBloomQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BloomResolution.h"
#include "unitysdk/UnityEngine/Rendering/Universal/HQBloomMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/PP_Quality.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::Config { class ConfigNapBlooms; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector4KeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class FlareProfile_NativeSRP; }
namespace UnityEngine::Rendering::Universal { class NapBloom; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x16E398C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16E39660)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x16E395A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x16E39510)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16E34250)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x16E34190)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x16AD4B60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x16E34480)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x16E343B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x16E34350)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x16E39700)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x16E39820)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x16AD3DD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_63D56313608AFE32_OFFSET UNITYSDK_OFFSET(0x16E329F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x16E34CB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x16E0B1E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_76ECC59BC7430042_1_OFFSET UNITYSDK_OFFSET(0x16E36890)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_76ECC59BC7430042_OFFSET UNITYSDK_OFFSET(0x16E344D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x16E39500)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_815B7108FC23FBC4_1_OFFSET UNITYSDK_OFFSET(0x16E2C920)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_815B7108FC23FBC4_OFFSET UNITYSDK_OFFSET(0x16E27140)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x16E397D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x16E34290)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x16E34410)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x16E341E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_8D6879CAA76F6588_OFFSET UNITYSDK_OFFSET(0x16E32100)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x16E395C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16E34300)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x16E39720)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x16E39710)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x16E32900)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x16E395B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x16E34070)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x16E397E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16E39830)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16AD4B20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_CEEC03EFD89445AA_OFFSET UNITYSDK_OFFSET(0x16E0E110)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x16E34140)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x16E06180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x16E39650)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x16E39740)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x16E39730)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x16E394F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_ECCE1872B868F9DC_OFFSET UNITYSDK_OFFSET(0x16E209B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x16E37070)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessNapBloom_TypeDefinitionIndex = 45817;

	class ESPostProcessNapBloom : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::NapBloom*>
	{
	public:
		::MoleMole::Config::ConfigNapBlooms* m_stAsset; // 0xB0
		::System::Single _DefaultGlareScaler; // 0xB8
		::System::Single _DefaultGlareThreshold; // 0xBC
		::System::Single _DefaultGlareIntensity; // 0xC0
		::System::Single _VolDefault_glareScaler; // 0xC4
		::System::Single _VolDefault_glareThreshold; // 0xC8
		::System::Single _VolDefault_glareIntensity; // 0xCC
		::System::Single _VolDefault_xBlurIntensity; // 0xD0
		::System::Single _VolDefault_yBlurIntensity; // 0xD4
		::UnityEngine::Rendering::Universal::HQBloomMode _VolDefault_hqBloomMode; // 0xD8
		::UnityEngine::Rendering::Universal::PP_Quality _VolDefault_hqUESampleQuality; // 0xDC
		::System::Single _VolDefault_hqUEBloomThreshold; // 0xE0
		::System::Single _VolDefault_hqUEBloomThresholdChar; // 0xE4
		::System::Single _VolDefault_hqUEBloomMaxThreshold; // 0xE8
		::System::Single _VolDefault_hqUEBloomMaxThresholdChar; // 0xEC
		::System::Single _VolDefault_hqUEBloomIntensity; // 0xF0
		::System::Single _VolDefault_hqUEBloomIntensityChar; // 0xF4
		::System::Single _VolDefault_hqBloomSize6; // 0xF8
		::System::Single _VolDefault_hqBloomSize5; // 0xFC
		::System::Single _VolDefault_hqBloomSize4; // 0x100
		::System::Single _VolDefault_hqBloomSize3; // 0x104
		::System::Single _VolDefault_hqBloomSize2; // 0x108
		::System::Single _VolDefault_hqBloomSize1; // 0x10C
		::System::Single _VolDefault_hqBloomTint6; // 0x110
		::System::Single _VolDefault_hqBloomTint5; // 0x114
		::System::Single _VolDefault_hqBloomTint4; // 0x118
		::System::Single _VolDefault_hqBloomTint3; // 0x11C
		::System::Single _VolDefault_hqBloomTint2; // 0x120
		::System::Single _VolDefault_hqBloomTint1; // 0x124
		::System::Boolean _VolDefault_hqUEBloomEnableRTXSingleControl; // 0x128
		::System::Single _VolDefault_hqUEBloomThresholdRTX; // 0x12C
		::System::Single _VolDefault_hqUEBloomIntensityRTX; // 0x130
		::System::Single _VolDefault_hqBloomSize6RTX; // 0x134
		::System::Single _VolDefault_hqBloomSize5RTX; // 0x138
		::System::Single _VolDefault_hqBloomSize4RTX; // 0x13C
		::System::Single _VolDefault_hqBloomSize3RTX; // 0x140
		::System::Single _VolDefault_hqBloomSize2RTX; // 0x144
		::System::Single _VolDefault_hqBloomSize1RTX; // 0x148
		::System::Single _VolDefault_hqUEBloomMaxThresholdRTX; // 0x14C
		::System::Single _VolDefault_hqBloomTint6RTX; // 0x150
		::System::Single _VolDefault_hqBloomTint5RTX; // 0x154
		::System::Single _VolDefault_hqBloomTint4RTX; // 0x158
		::System::Single _VolDefault_hqBloomTint3RTX; // 0x15C
		::System::Single _VolDefault_hqBloomTint2RTX; // 0x160
		::System::Single _VolDefault_hqBloomTint1RTX; // 0x164
		::System::Single _VolDefault_hQBloomIntensity; // 0x168
		::System::Single _VolDefault_hQBloomThreshold; // 0x16C
		::System::Single _VolDefault_hQBloomScatter; // 0x170
		::UnityEngine::Color _VolDefault_hQBloomTint; // 0x174
		::UnityEngine::Rendering::Universal::BloomResolution _VolDefault_hqBloomResolution; // 0x184
		::System::Boolean _VolDefault_useRealDownSample; // 0x188
		::System::Single _VolDefault_blurRadius; // 0x18C
		::System::Boolean _VolDefault_doBloomAfterTAA; // 0x190
		::System::Boolean _VolDefault_useSourceLumaMask; // 0x191
		::System::Single _VolDefault_glareThresholdForHDR; // 0x194
		::System::Single _VolDefault_glareScalerForHDR; // 0x198
		::UnityEngine::Vector4 _VolDefault_blurLevelWeights; // 0x19C
		::System::Single _VolDefault_secondaryGlareThreshold; // 0x1AC
		::System::Single _VolDefault_secondaryGlareContrast; // 0x1B0
		::System::Single _VolDefault_secondaryGlareWeight; // 0x1B4
		::System::Int32 _VolDefault_secondaryBlurRadius; // 0x1B8
		::UnityEngine::NAPRenderPipeline0::NapBloomQuality _VolDefault_quality; // 0x1BC
		::UnityEngine::Vector4 _VolDefault_blurLevelBufferHeights; // 0x1C0
		::System::Int32 _VolDefault_secondaryBlurLevelBufferHeight; // 0x1D0
		::UnityEngine::Texture* _VolDefault_dirtTexture; // 0x1D8
		::System::Single _VolDefault_dirtIntensity; // 0x1E0
		::System::Boolean _VolDefault_HasExtraDownsample; // 0x1E4
		::System::Boolean _VolDefault_enableSpriteFlare; // 0x1E5
		::System::Single _VolDefault_flareThreshold; // 0x1E8
		::System::Single _VolDefault_areaThreshold; // 0x1EC
		::System::Single _VolDefault_saturate; // 0x1F0
		::System::Single _VolDefault_randomize; // 0x1F4
		::System::Single _VolDefault_sizeClamp; // 0x1F8
		::System::Single _VolDefault_intensityClamp; // 0x1FC
		::System::Int32 _VolDefault_iterationNum; // 0x200
		::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP* _VolDefault_flareProfile; // 0x208
		::System::Boolean _VolPreVal_glareScaler_overrideState; // 0x210
		::System::Single _VolPreVal_glareScaler; // 0x214
		::System::Boolean _VolPreVal_glareThreshold_overrideState; // 0x218
		::System::Single _VolPreVal_glareThreshold; // 0x21C
		::System::Boolean _VolPreVal_glareIntensity_overrideState; // 0x220
		::System::Single _VolPreVal_glareIntensity; // 0x224
		::System::Boolean _VolPreVal_xBlurIntensity_overrideState; // 0x228
		::System::Single _VolPreVal_xBlurIntensity; // 0x22C
		::System::Boolean _VolPreVal_yBlurIntensity_overrideState; // 0x230
		::System::Single _VolPreVal_yBlurIntensity; // 0x234
		::System::Boolean _VolPreVal_hqBloomMode_overrideState; // 0x238
		::UnityEngine::Rendering::Universal::HQBloomMode _VolPreVal_hqBloomMode; // 0x23C
		::System::Boolean _VolPreVal_hqUESampleQuality_overrideState; // 0x240
		::UnityEngine::Rendering::Universal::PP_Quality _VolPreVal_hqUESampleQuality; // 0x244
		::System::Boolean _VolPreVal_hqUEBloomThreshold_overrideState; // 0x248
		::System::Single _VolPreVal_hqUEBloomThreshold; // 0x24C
		::System::Boolean _VolPreVal_hqUEBloomThresholdChar_overrideState; // 0x250
		::System::Single _VolPreVal_hqUEBloomThresholdChar; // 0x254
		::System::Boolean _VolPreVal_hqUEBloomMaxThreshold_overrideState; // 0x258
		::System::Single _VolPreVal_hqUEBloomMaxThreshold; // 0x25C
		::System::Boolean _VolPreVal_hqUEBloomMaxThresholdChar_overrideState; // 0x260
		::System::Single _VolPreVal_hqUEBloomMaxThresholdChar; // 0x264
		::System::Boolean _VolPreVal_hqUEBloomIntensity_overrideState; // 0x268
		::System::Single _VolPreVal_hqUEBloomIntensity; // 0x26C
		::System::Boolean _VolPreVal_hqUEBloomIntensityChar_overrideState; // 0x270
		::System::Single _VolPreVal_hqUEBloomIntensityChar; // 0x274
		::System::Boolean _VolPreVal_hqBloomSize6_overrideState; // 0x278
		::System::Single _VolPreVal_hqBloomSize6; // 0x27C
		::System::Boolean _VolPreVal_hqBloomSize5_overrideState; // 0x280
		::System::Single _VolPreVal_hqBloomSize5; // 0x284
		::System::Boolean _VolPreVal_hqBloomSize4_overrideState; // 0x288
		::System::Single _VolPreVal_hqBloomSize4; // 0x28C
		::System::Boolean _VolPreVal_hqBloomSize3_overrideState; // 0x290
		::System::Single _VolPreVal_hqBloomSize3; // 0x294
		::System::Boolean _VolPreVal_hqBloomSize2_overrideState; // 0x298
		::System::Single _VolPreVal_hqBloomSize2; // 0x29C
		::System::Boolean _VolPreVal_hqBloomSize1_overrideState; // 0x2A0
		::System::Single _VolPreVal_hqBloomSize1; // 0x2A4
		::System::Boolean _VolPreVal_hqBloomTint6_overrideState; // 0x2A8
		::System::Single _VolPreVal_hqBloomTint6; // 0x2AC
		::System::Boolean _VolPreVal_hqBloomTint5_overrideState; // 0x2B0
		::System::Single _VolPreVal_hqBloomTint5; // 0x2B4
		::System::Boolean _VolPreVal_hqBloomTint4_overrideState; // 0x2B8
		::System::Single _VolPreVal_hqBloomTint4; // 0x2BC
		::System::Boolean _VolPreVal_hqBloomTint3_overrideState; // 0x2C0
		::System::Single _VolPreVal_hqBloomTint3; // 0x2C4
		::System::Boolean _VolPreVal_hqBloomTint2_overrideState; // 0x2C8
		::System::Single _VolPreVal_hqBloomTint2; // 0x2CC
		::System::Boolean _VolPreVal_hqBloomTint1_overrideState; // 0x2D0
		::System::Single _VolPreVal_hqBloomTint1; // 0x2D4
		::System::Boolean _VolPreVal_hqUEBloomEnableRTXSingleControl_overrideState; // 0x2D8
		::System::Boolean _VolPreVal_hqUEBloomEnableRTXSingleControl; // 0x2D9
		::System::Boolean _VolPreVal_hqUEBloomThresholdRTX_overrideState; // 0x2DA
		::System::Single _VolPreVal_hqUEBloomThresholdRTX; // 0x2DC
		::System::Boolean _VolPreVal_hqUEBloomIntensityRTX_overrideState; // 0x2E0
		::System::Single _VolPreVal_hqUEBloomIntensityRTX; // 0x2E4
		::System::Boolean _VolPreVal_hqBloomSize6RTX_overrideState; // 0x2E8
		::System::Single _VolPreVal_hqBloomSize6RTX; // 0x2EC
		::System::Boolean _VolPreVal_hqBloomSize5RTX_overrideState; // 0x2F0
		::System::Single _VolPreVal_hqBloomSize5RTX; // 0x2F4
		::System::Boolean _VolPreVal_hqBloomSize4RTX_overrideState; // 0x2F8
		::System::Single _VolPreVal_hqBloomSize4RTX; // 0x2FC
		::System::Boolean _VolPreVal_hqBloomSize3RTX_overrideState; // 0x300
		::System::Single _VolPreVal_hqBloomSize3RTX; // 0x304
		::System::Boolean _VolPreVal_hqBloomSize2RTX_overrideState; // 0x308
		::System::Single _VolPreVal_hqBloomSize2RTX; // 0x30C
		::System::Boolean _VolPreVal_hqBloomSize1RTX_overrideState; // 0x310
		::System::Single _VolPreVal_hqBloomSize1RTX; // 0x314
		::System::Boolean _VolPreVal_hqUEBloomMaxThresholdRTX_overrideState; // 0x318
		::System::Single _VolPreVal_hqUEBloomMaxThresholdRTX; // 0x31C
		::System::Boolean _VolPreVal_hqBloomTint6RTX_overrideState; // 0x320
		::System::Single _VolPreVal_hqBloomTint6RTX; // 0x324
		::System::Boolean _VolPreVal_hqBloomTint5RTX_overrideState; // 0x328
		::System::Single _VolPreVal_hqBloomTint5RTX; // 0x32C
		::System::Boolean _VolPreVal_hqBloomTint4RTX_overrideState; // 0x330
		::System::Single _VolPreVal_hqBloomTint4RTX; // 0x334
		::System::Boolean _VolPreVal_hqBloomTint3RTX_overrideState; // 0x338
		::System::Single _VolPreVal_hqBloomTint3RTX; // 0x33C
		::System::Boolean _VolPreVal_hqBloomTint2RTX_overrideState; // 0x340
		::System::Single _VolPreVal_hqBloomTint2RTX; // 0x344
		::System::Boolean _VolPreVal_hqBloomTint1RTX_overrideState; // 0x348
		::System::Single _VolPreVal_hqBloomTint1RTX; // 0x34C
		::System::Boolean _VolPreVal_hQBloomIntensity_overrideState; // 0x350
		::System::Single _VolPreVal_hQBloomIntensity; // 0x354
		::System::Boolean _VolPreVal_hQBloomThreshold_overrideState; // 0x358
		::System::Single _VolPreVal_hQBloomThreshold; // 0x35C
		::System::Boolean _VolPreVal_hQBloomScatter_overrideState; // 0x360
		::System::Single _VolPreVal_hQBloomScatter; // 0x364
		::System::Boolean _VolPreVal_hQBloomTint_overrideState; // 0x368
		::UnityEngine::Color _VolPreVal_hQBloomTint; // 0x36C
		::System::Boolean _VolPreVal_hqBloomResolution_overrideState; // 0x37C
		::UnityEngine::Rendering::Universal::BloomResolution _VolPreVal_hqBloomResolution; // 0x380
		::System::Boolean _VolPreVal_useRealDownSample_overrideState; // 0x384
		::System::Boolean _VolPreVal_useRealDownSample; // 0x385
		::System::Boolean _VolPreVal_blurRadius_overrideState; // 0x386
		::System::Single _VolPreVal_blurRadius; // 0x388
		::System::Boolean _VolPreVal_doBloomAfterTAA_overrideState; // 0x38C
		::System::Boolean _VolPreVal_doBloomAfterTAA; // 0x38D
		::System::Boolean _VolPreVal_useSourceLumaMask_overrideState; // 0x38E
		::System::Boolean _VolPreVal_useSourceLumaMask; // 0x38F
		::System::Boolean _VolPreVal_glareThresholdForHDR_overrideState; // 0x390
		::System::Single _VolPreVal_glareThresholdForHDR; // 0x394
		::System::Boolean _VolPreVal_glareScalerForHDR_overrideState; // 0x398
		::System::Single _VolPreVal_glareScalerForHDR; // 0x39C
		::System::Boolean _VolPreVal_blurLevelWeights_overrideState; // 0x3A0
		::UnityEngine::Vector4 _VolPreVal_blurLevelWeights; // 0x3A4
		::System::Boolean _VolPreVal_secondaryGlareThreshold_overrideState; // 0x3B4
		::System::Single _VolPreVal_secondaryGlareThreshold; // 0x3B8
		::System::Boolean _VolPreVal_secondaryGlareContrast_overrideState; // 0x3BC
		::System::Single _VolPreVal_secondaryGlareContrast; // 0x3C0
		::System::Boolean _VolPreVal_secondaryGlareWeight_overrideState; // 0x3C4
		::System::Single _VolPreVal_secondaryGlareWeight; // 0x3C8
		::System::Boolean _VolPreVal_secondaryBlurRadius_overrideState; // 0x3CC
		::System::Int32 _VolPreVal_secondaryBlurRadius; // 0x3D0
		::System::Boolean _VolPreVal_quality_overrideState; // 0x3D4
		::UnityEngine::NAPRenderPipeline0::NapBloomQuality _VolPreVal_quality; // 0x3D8
		::System::Boolean _VolPreVal_blurLevelBufferHeights_overrideState; // 0x3DC
		::UnityEngine::Vector4 _VolPreVal_blurLevelBufferHeights; // 0x3E0
		::System::Boolean _VolPreVal_secondaryBlurLevelBufferHeight_overrideState; // 0x3F0
		::System::Int32 _VolPreVal_secondaryBlurLevelBufferHeight; // 0x3F4
		::System::Boolean _VolPreVal_dirtTexture_overrideState; // 0x3F8
		::UnityEngine::Texture* _VolPreVal_dirtTexture; // 0x400
		::System::Boolean _VolPreVal_dirtIntensity_overrideState; // 0x408
		::System::Single _VolPreVal_dirtIntensity; // 0x40C
		::System::Boolean _VolPreVal_HasExtraDownsample_overrideState; // 0x410
		::System::Boolean _VolPreVal_HasExtraDownsample; // 0x411
		::System::Boolean _VolPreVal_enableSpriteFlare_overrideState; // 0x412
		::System::Boolean _VolPreVal_enableSpriteFlare; // 0x413
		::System::Boolean _VolPreVal_flareThreshold_overrideState; // 0x414
		::System::Single _VolPreVal_flareThreshold; // 0x418
		::System::Boolean _VolPreVal_areaThreshold_overrideState; // 0x41C
		::System::Single _VolPreVal_areaThreshold; // 0x420
		::System::Boolean _VolPreVal_saturate_overrideState; // 0x424
		::System::Single _VolPreVal_saturate; // 0x428
		::System::Boolean _VolPreVal_randomize_overrideState; // 0x42C
		::System::Single _VolPreVal_randomize; // 0x430
		::System::Boolean _VolPreVal_sizeClamp_overrideState; // 0x434
		::System::Single _VolPreVal_sizeClamp; // 0x438
		::System::Boolean _VolPreVal_intensityClamp_overrideState; // 0x43C
		::System::Single _VolPreVal_intensityClamp; // 0x440
		::System::Boolean _VolPreVal_iterationNum_overrideState; // 0x444
		::System::Int32 _VolPreVal_iterationNum; // 0x448
		::System::Boolean _VolPreVal_flareProfile_overrideState; // 0x44C
		::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP* _VolPreVal_flareProfile; // 0x450
		::System::Single _TimelineCurveFirstVal_glareScaler; // 0x458
		::System::Single _TimelineCurveLastVal_glareScaler; // 0x45C
		::System::Single _TimelineCurveFirstVal_glareThreshold; // 0x460
		::System::Single _TimelineCurveLastVal_glareThreshold; // 0x464
		::System::Single _TimelineCurveFirstVal_glareIntensity; // 0x468
		::System::Single _TimelineCurveLastVal_glareIntensity; // 0x46C
		::System::Single _TimelineCurveFirstVal_xBlurIntensity; // 0x470
		::System::Single _TimelineCurveLastVal_xBlurIntensity; // 0x474
		::System::Single _TimelineCurveFirstVal_yBlurIntensity; // 0x478
		::System::Single _TimelineCurveLastVal_yBlurIntensity; // 0x47C
		::System::Single _TimelineCurveFirstVal_hqUEBloomThreshold; // 0x480
		::System::Single _TimelineCurveLastVal_hqUEBloomThreshold; // 0x484
		::System::Single _TimelineCurveFirstVal_hqUEBloomThresholdChar; // 0x488
		::System::Single _TimelineCurveLastVal_hqUEBloomThresholdChar; // 0x48C
		::System::Single _TimelineCurveFirstVal_hqUEBloomMaxThreshold; // 0x490
		::System::Single _TimelineCurveLastVal_hqUEBloomMaxThreshold; // 0x494
		::System::Single _TimelineCurveFirstVal_hqUEBloomMaxThresholdChar; // 0x498
		::System::Single _TimelineCurveLastVal_hqUEBloomMaxThresholdChar; // 0x49C
		::System::Single _TimelineCurveFirstVal_hqUEBloomIntensity; // 0x4A0
		::System::Single _TimelineCurveLastVal_hqUEBloomIntensity; // 0x4A4
		::System::Single _TimelineCurveFirstVal_hqUEBloomIntensityChar; // 0x4A8
		::System::Single _TimelineCurveLastVal_hqUEBloomIntensityChar; // 0x4AC
		::System::Single _TimelineCurveFirstVal_hqBloomSize6; // 0x4B0
		::System::Single _TimelineCurveLastVal_hqBloomSize6; // 0x4B4
		::System::Single _TimelineCurveFirstVal_hqBloomSize5; // 0x4B8
		::System::Single _TimelineCurveLastVal_hqBloomSize5; // 0x4BC
		::System::Single _TimelineCurveFirstVal_hqBloomSize4; // 0x4C0
		::System::Single _TimelineCurveLastVal_hqBloomSize4; // 0x4C4
		::System::Single _TimelineCurveFirstVal_hqBloomSize3; // 0x4C8
		::System::Single _TimelineCurveLastVal_hqBloomSize3; // 0x4CC
		::System::Single _TimelineCurveFirstVal_hqBloomSize2; // 0x4D0
		::System::Single _TimelineCurveLastVal_hqBloomSize2; // 0x4D4
		::System::Single _TimelineCurveFirstVal_hqBloomSize1; // 0x4D8
		::System::Single _TimelineCurveLastVal_hqBloomSize1; // 0x4DC
		::System::Single _TimelineCurveFirstVal_hqBloomTint6; // 0x4E0
		::System::Single _TimelineCurveLastVal_hqBloomTint6; // 0x4E4
		::System::Single _TimelineCurveFirstVal_hqBloomTint5; // 0x4E8
		::System::Single _TimelineCurveLastVal_hqBloomTint5; // 0x4EC
		::System::Single _TimelineCurveFirstVal_hqBloomTint4; // 0x4F0
		::System::Single _TimelineCurveLastVal_hqBloomTint4; // 0x4F4
		::System::Single _TimelineCurveFirstVal_hqBloomTint3; // 0x4F8
		::System::Single _TimelineCurveLastVal_hqBloomTint3; // 0x4FC
		::System::Single _TimelineCurveFirstVal_hqBloomTint2; // 0x500
		::System::Single _TimelineCurveLastVal_hqBloomTint2; // 0x504
		::System::Single _TimelineCurveFirstVal_hqBloomTint1; // 0x508
		::System::Single _TimelineCurveLastVal_hqBloomTint1; // 0x50C
		::System::Boolean _TimelineCurveFirstVal_hqUEBloomEnableRTXSingleControl; // 0x510
		::System::Boolean _TimelineCurveLastVal_hqUEBloomEnableRTXSingleControl; // 0x511
		::System::Single _TimelineCurveFirstVal_hqUEBloomThresholdRTX; // 0x514
		::System::Single _TimelineCurveLastVal_hqUEBloomThresholdRTX; // 0x518
		::System::Single _TimelineCurveFirstVal_hqUEBloomIntensityRTX; // 0x51C
		::System::Single _TimelineCurveLastVal_hqUEBloomIntensityRTX; // 0x520
		::System::Single _TimelineCurveFirstVal_hqBloomSize6RTX; // 0x524
		::System::Single _TimelineCurveLastVal_hqBloomSize6RTX; // 0x528
		::System::Single _TimelineCurveFirstVal_hqBloomSize5RTX; // 0x52C
		::System::Single _TimelineCurveLastVal_hqBloomSize5RTX; // 0x530
		::System::Single _TimelineCurveFirstVal_hqBloomSize4RTX; // 0x534
		::System::Single _TimelineCurveLastVal_hqBloomSize4RTX; // 0x538
		::System::Single _TimelineCurveFirstVal_hqBloomSize3RTX; // 0x53C
		::System::Single _TimelineCurveLastVal_hqBloomSize3RTX; // 0x540
		::System::Single _TimelineCurveFirstVal_hqBloomSize2RTX; // 0x544
		::System::Single _TimelineCurveLastVal_hqBloomSize2RTX; // 0x548
		::System::Single _TimelineCurveFirstVal_hqBloomSize1RTX; // 0x54C
		::System::Single _TimelineCurveLastVal_hqBloomSize1RTX; // 0x550
		::System::Single _TimelineCurveFirstVal_hqUEBloomMaxThresholdRTX; // 0x554
		::System::Single _TimelineCurveLastVal_hqUEBloomMaxThresholdRTX; // 0x558
		::System::Single _TimelineCurveFirstVal_hqBloomTint6RTX; // 0x55C
		::System::Single _TimelineCurveLastVal_hqBloomTint6RTX; // 0x560
		::System::Single _TimelineCurveFirstVal_hqBloomTint5RTX; // 0x564
		::System::Single _TimelineCurveLastVal_hqBloomTint5RTX; // 0x568
		::System::Single _TimelineCurveFirstVal_hqBloomTint4RTX; // 0x56C
		::System::Single _TimelineCurveLastVal_hqBloomTint4RTX; // 0x570
		::System::Single _TimelineCurveFirstVal_hqBloomTint3RTX; // 0x574
		::System::Single _TimelineCurveLastVal_hqBloomTint3RTX; // 0x578
		::System::Single _TimelineCurveFirstVal_hqBloomTint2RTX; // 0x57C
		::System::Single _TimelineCurveLastVal_hqBloomTint2RTX; // 0x580
		::System::Single _TimelineCurveFirstVal_hqBloomTint1RTX; // 0x584
		::System::Single _TimelineCurveLastVal_hqBloomTint1RTX; // 0x588
		::System::Single _TimelineCurveFirstVal_hQBloomIntensity; // 0x58C
		::System::Single _TimelineCurveLastVal_hQBloomIntensity; // 0x590
		::System::Single _TimelineCurveFirstVal_hQBloomThreshold; // 0x594
		::System::Single _TimelineCurveLastVal_hQBloomThreshold; // 0x598
		::System::Single _TimelineCurveFirstVal_hQBloomScatter; // 0x59C
		::System::Single _TimelineCurveLastVal_hQBloomScatter; // 0x5A0
		::UnityEngine::Color _TimelineCurveFirstVal_hQBloomTint; // 0x5A4
		::UnityEngine::Color _TimelineCurveLastVal_hQBloomTint; // 0x5B4
		::System::Boolean _TimelineCurveFirstVal_useRealDownSample; // 0x5C4
		::System::Boolean _TimelineCurveLastVal_useRealDownSample; // 0x5C5
		::System::Single _TimelineCurveFirstVal_blurRadius; // 0x5C8
		::System::Single _TimelineCurveLastVal_blurRadius; // 0x5CC
		::System::Boolean _TimelineCurveFirstVal_doBloomAfterTAA; // 0x5D0
		::System::Boolean _TimelineCurveLastVal_doBloomAfterTAA; // 0x5D1
		::System::Boolean _TimelineCurveFirstVal_useSourceLumaMask; // 0x5D2
		::System::Boolean _TimelineCurveLastVal_useSourceLumaMask; // 0x5D3
		::System::Single _TimelineCurveFirstVal_glareThresholdForHDR; // 0x5D4
		::System::Single _TimelineCurveLastVal_glareThresholdForHDR; // 0x5D8
		::System::Single _TimelineCurveFirstVal_glareScalerForHDR; // 0x5DC
		::System::Single _TimelineCurveLastVal_glareScalerForHDR; // 0x5E0
		::UnityEngine::Vector4 _TimelineCurveFirstVal_blurLevelWeights; // 0x5E4
		::UnityEngine::Vector4 _TimelineCurveLastVal_blurLevelWeights; // 0x5F4
		::System::Single _TimelineCurveFirstVal_secondaryGlareThreshold; // 0x604
		::System::Single _TimelineCurveLastVal_secondaryGlareThreshold; // 0x608
		::System::Single _TimelineCurveFirstVal_secondaryGlareContrast; // 0x60C
		::System::Single _TimelineCurveLastVal_secondaryGlareContrast; // 0x610
		::System::Single _TimelineCurveFirstVal_secondaryGlareWeight; // 0x614
		::System::Single _TimelineCurveLastVal_secondaryGlareWeight; // 0x618
		::System::Int32 _TimelineCurveFirstVal_secondaryBlurRadius; // 0x61C
		::System::Int32 _TimelineCurveLastVal_secondaryBlurRadius; // 0x620
		::UnityEngine::Vector4 _TimelineCurveFirstVal_blurLevelBufferHeights; // 0x624
		::UnityEngine::Vector4 _TimelineCurveLastVal_blurLevelBufferHeights; // 0x634
		::System::Int32 _TimelineCurveFirstVal_secondaryBlurLevelBufferHeight; // 0x644
		::System::Int32 _TimelineCurveLastVal_secondaryBlurLevelBufferHeight; // 0x648
		::System::Single _TimelineCurveFirstVal_dirtIntensity; // 0x64C
		::System::Single _TimelineCurveLastVal_dirtIntensity; // 0x650
		::System::Boolean _TimelineCurveFirstVal_HasExtraDownsample; // 0x654
		::System::Boolean _TimelineCurveLastVal_HasExtraDownsample; // 0x655
		::System::Boolean _TimelineCurveFirstVal_enableSpriteFlare; // 0x656
		::System::Boolean _TimelineCurveLastVal_enableSpriteFlare; // 0x657
		::System::Single _TimelineCurveFirstVal_flareThreshold; // 0x658
		::System::Single _TimelineCurveLastVal_flareThreshold; // 0x65C
		::System::Single _TimelineCurveFirstVal_areaThreshold; // 0x660
		::System::Single _TimelineCurveLastVal_areaThreshold; // 0x664
		::System::Single _TimelineCurveFirstVal_saturate; // 0x668
		::System::Single _TimelineCurveLastVal_saturate; // 0x66C
		::System::Single _TimelineCurveFirstVal_randomize; // 0x670
		::System::Single _TimelineCurveLastVal_randomize; // 0x674
		::System::Single _TimelineCurveFirstVal_sizeClamp; // 0x678
		::System::Single _TimelineCurveLastVal_sizeClamp; // 0x67C
		::System::Single _TimelineCurveFirstVal_intensityClamp; // 0x680
		::System::Single _TimelineCurveLastVal_intensityClamp; // 0x684
		::System::Int32 _TimelineCurveFirstVal_iterationNum; // 0x688
		::System::Int32 _TimelineCurveLastVal_iterationNum; // 0x68C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareScaler_FieldHandleType; // 0x690
		::System::Boolean ESPP_glareScaler_UseIt; // 0x694
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareScaler; // 0x698
		::System::Boolean ESPP_glareScaler_EnableFade; // 0x6A0
		::System::Boolean ESPP_glareScaler_EnableOverrideDefaultValue; // 0x6A1
		::System::Single ESPP_glareScaler_OverrideDefaultValue; // 0x6A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareThreshold_FieldHandleType; // 0x6A8
		::System::Boolean ESPP_glareThreshold_UseIt; // 0x6AC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareThreshold; // 0x6B0
		::System::Boolean ESPP_glareThreshold_EnableFade; // 0x6B8
		::System::Boolean ESPP_glareThreshold_EnableOverrideDefaultValue; // 0x6B9
		::System::Single ESPP_glareThreshold_OverrideDefaultValue; // 0x6BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareIntensity_FieldHandleType; // 0x6C0
		::System::Boolean ESPP_glareIntensity_UseIt; // 0x6C4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareIntensity; // 0x6C8
		::System::Boolean ESPP_glareIntensity_EnableFade; // 0x6D0
		::System::Boolean ESPP_glareIntensity_EnableOverrideDefaultValue; // 0x6D1
		::System::Single ESPP_glareIntensity_OverrideDefaultValue; // 0x6D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_xBlurIntensity_FieldHandleType; // 0x6D8
		::System::Boolean ESPP_xBlurIntensity_UseIt; // 0x6DC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_xBlurIntensity; // 0x6E0
		::System::Boolean ESPP_xBlurIntensity_EnableFade; // 0x6E8
		::System::Boolean ESPP_xBlurIntensity_EnableOverrideDefaultValue; // 0x6E9
		::System::Single ESPP_xBlurIntensity_OverrideDefaultValue; // 0x6EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_yBlurIntensity_FieldHandleType; // 0x6F0
		::System::Boolean ESPP_yBlurIntensity_UseIt; // 0x6F4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_yBlurIntensity; // 0x6F8
		::System::Boolean ESPP_yBlurIntensity_EnableFade; // 0x700
		::System::Boolean ESPP_yBlurIntensity_EnableOverrideDefaultValue; // 0x701
		::System::Single ESPP_yBlurIntensity_OverrideDefaultValue; // 0x704
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomMode_FieldHandleType; // 0x708
		::UnityEngine::Rendering::Universal::HQBloomMode ESPP_hqBloomMode; // 0x70C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqUESampleQuality_FieldHandleType; // 0x710
		::UnityEngine::Rendering::Universal::PP_Quality ESPP_hqUESampleQuality; // 0x714
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqUEBloomThreshold_FieldHandleType; // 0x718
		::System::Boolean ESPP_hqUEBloomThreshold_UseIt; // 0x71C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqUEBloomThreshold; // 0x720
		::System::Boolean ESPP_hqUEBloomThreshold_EnableFade; // 0x728
		::System::Boolean ESPP_hqUEBloomThreshold_EnableOverrideDefaultValue; // 0x729
		::System::Single ESPP_hqUEBloomThreshold_OverrideDefaultValue; // 0x72C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqUEBloomThresholdChar_FieldHandleType; // 0x730
		::System::Boolean ESPP_hqUEBloomThresholdChar_UseIt; // 0x734
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqUEBloomThresholdChar; // 0x738
		::System::Boolean ESPP_hqUEBloomThresholdChar_EnableFade; // 0x740
		::System::Boolean ESPP_hqUEBloomThresholdChar_EnableOverrideDefaultValue; // 0x741
		::System::Single ESPP_hqUEBloomThresholdChar_OverrideDefaultValue; // 0x744
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqUEBloomMaxThreshold_FieldHandleType; // 0x748
		::System::Boolean ESPP_hqUEBloomMaxThreshold_UseIt; // 0x74C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqUEBloomMaxThreshold; // 0x750
		::System::Boolean ESPP_hqUEBloomMaxThreshold_EnableFade; // 0x758
		::System::Boolean ESPP_hqUEBloomMaxThreshold_EnableOverrideDefaultValue; // 0x759
		::System::Single ESPP_hqUEBloomMaxThreshold_OverrideDefaultValue; // 0x75C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqUEBloomMaxThresholdChar_FieldHandleType; // 0x760
		::System::Boolean ESPP_hqUEBloomMaxThresholdChar_UseIt; // 0x764
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqUEBloomMaxThresholdChar; // 0x768
		::System::Boolean ESPP_hqUEBloomMaxThresholdChar_EnableFade; // 0x770
		::System::Boolean ESPP_hqUEBloomMaxThresholdChar_EnableOverrideDefaultValue; // 0x771
		::System::Single ESPP_hqUEBloomMaxThresholdChar_OverrideDefaultValue; // 0x774
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqUEBloomIntensity_FieldHandleType; // 0x778
		::System::Boolean ESPP_hqUEBloomIntensity_UseIt; // 0x77C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqUEBloomIntensity; // 0x780
		::System::Boolean ESPP_hqUEBloomIntensity_EnableFade; // 0x788
		::System::Boolean ESPP_hqUEBloomIntensity_EnableOverrideDefaultValue; // 0x789
		::System::Single ESPP_hqUEBloomIntensity_OverrideDefaultValue; // 0x78C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqUEBloomIntensityChar_FieldHandleType; // 0x790
		::System::Boolean ESPP_hqUEBloomIntensityChar_UseIt; // 0x794
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqUEBloomIntensityChar; // 0x798
		::System::Boolean ESPP_hqUEBloomIntensityChar_EnableFade; // 0x7A0
		::System::Boolean ESPP_hqUEBloomIntensityChar_EnableOverrideDefaultValue; // 0x7A1
		::System::Single ESPP_hqUEBloomIntensityChar_OverrideDefaultValue; // 0x7A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomSize6_FieldHandleType; // 0x7A8
		::System::Boolean ESPP_hqBloomSize6_UseIt; // 0x7AC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomSize6; // 0x7B0
		::System::Boolean ESPP_hqBloomSize6_EnableFade; // 0x7B8
		::System::Boolean ESPP_hqBloomSize6_EnableOverrideDefaultValue; // 0x7B9
		::System::Single ESPP_hqBloomSize6_OverrideDefaultValue; // 0x7BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomSize5_FieldHandleType; // 0x7C0
		::System::Boolean ESPP_hqBloomSize5_UseIt; // 0x7C4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomSize5; // 0x7C8
		::System::Boolean ESPP_hqBloomSize5_EnableFade; // 0x7D0
		::System::Boolean ESPP_hqBloomSize5_EnableOverrideDefaultValue; // 0x7D1
		::System::Single ESPP_hqBloomSize5_OverrideDefaultValue; // 0x7D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomSize4_FieldHandleType; // 0x7D8
		::System::Boolean ESPP_hqBloomSize4_UseIt; // 0x7DC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomSize4; // 0x7E0
		::System::Boolean ESPP_hqBloomSize4_EnableFade; // 0x7E8
		::System::Boolean ESPP_hqBloomSize4_EnableOverrideDefaultValue; // 0x7E9
		::System::Single ESPP_hqBloomSize4_OverrideDefaultValue; // 0x7EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomSize3_FieldHandleType; // 0x7F0
		::System::Boolean ESPP_hqBloomSize3_UseIt; // 0x7F4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomSize3; // 0x7F8
		::System::Boolean ESPP_hqBloomSize3_EnableFade; // 0x800
		::System::Boolean ESPP_hqBloomSize3_EnableOverrideDefaultValue; // 0x801
		::System::Single ESPP_hqBloomSize3_OverrideDefaultValue; // 0x804
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomSize2_FieldHandleType; // 0x808
		::System::Boolean ESPP_hqBloomSize2_UseIt; // 0x80C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomSize2; // 0x810
		::System::Boolean ESPP_hqBloomSize2_EnableFade; // 0x818
		::System::Boolean ESPP_hqBloomSize2_EnableOverrideDefaultValue; // 0x819
		::System::Single ESPP_hqBloomSize2_OverrideDefaultValue; // 0x81C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomSize1_FieldHandleType; // 0x820
		::System::Boolean ESPP_hqBloomSize1_UseIt; // 0x824
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomSize1; // 0x828
		::System::Boolean ESPP_hqBloomSize1_EnableFade; // 0x830
		::System::Boolean ESPP_hqBloomSize1_EnableOverrideDefaultValue; // 0x831
		::System::Single ESPP_hqBloomSize1_OverrideDefaultValue; // 0x834
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomTint6_FieldHandleType; // 0x838
		::System::Boolean ESPP_hqBloomTint6_UseIt; // 0x83C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomTint6; // 0x840
		::System::Boolean ESPP_hqBloomTint6_EnableFade; // 0x848
		::System::Boolean ESPP_hqBloomTint6_EnableOverrideDefaultValue; // 0x849
		::System::Single ESPP_hqBloomTint6_OverrideDefaultValue; // 0x84C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomTint5_FieldHandleType; // 0x850
		::System::Boolean ESPP_hqBloomTint5_UseIt; // 0x854
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomTint5; // 0x858
		::System::Boolean ESPP_hqBloomTint5_EnableFade; // 0x860
		::System::Boolean ESPP_hqBloomTint5_EnableOverrideDefaultValue; // 0x861
		::System::Single ESPP_hqBloomTint5_OverrideDefaultValue; // 0x864
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomTint4_FieldHandleType; // 0x868
		::System::Boolean ESPP_hqBloomTint4_UseIt; // 0x86C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomTint4; // 0x870
		::System::Boolean ESPP_hqBloomTint4_EnableFade; // 0x878
		::System::Boolean ESPP_hqBloomTint4_EnableOverrideDefaultValue; // 0x879
		::System::Single ESPP_hqBloomTint4_OverrideDefaultValue; // 0x87C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomTint3_FieldHandleType; // 0x880
		::System::Boolean ESPP_hqBloomTint3_UseIt; // 0x884
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomTint3; // 0x888
		::System::Boolean ESPP_hqBloomTint3_EnableFade; // 0x890
		::System::Boolean ESPP_hqBloomTint3_EnableOverrideDefaultValue; // 0x891
		::System::Single ESPP_hqBloomTint3_OverrideDefaultValue; // 0x894
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomTint2_FieldHandleType; // 0x898
		::System::Boolean ESPP_hqBloomTint2_UseIt; // 0x89C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomTint2; // 0x8A0
		::System::Boolean ESPP_hqBloomTint2_EnableFade; // 0x8A8
		::System::Boolean ESPP_hqBloomTint2_EnableOverrideDefaultValue; // 0x8A9
		::System::Single ESPP_hqBloomTint2_OverrideDefaultValue; // 0x8AC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomTint1_FieldHandleType; // 0x8B0
		::System::Boolean ESPP_hqBloomTint1_UseIt; // 0x8B4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomTint1; // 0x8B8
		::System::Boolean ESPP_hqBloomTint1_EnableFade; // 0x8C0
		::System::Boolean ESPP_hqBloomTint1_EnableOverrideDefaultValue; // 0x8C1
		::System::Single ESPP_hqBloomTint1_OverrideDefaultValue; // 0x8C4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqUEBloomEnableRTXSingleControl_FieldHandleType; // 0x8C8
		::System::Boolean ESPP_hqUEBloomEnableRTXSingleControl_UseIt; // 0x8CC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_hqUEBloomEnableRTXSingleControl; // 0x8D0
		::System::Boolean ESPP_hqUEBloomEnableRTXSingleControl_EnableFade; // 0x8D8
		::System::Boolean ESPP_hqUEBloomEnableRTXSingleControl_EnableOverrideDefaultValue; // 0x8D9
		::System::Boolean ESPP_hqUEBloomEnableRTXSingleControl_OverrideDefaultValue; // 0x8DA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqUEBloomThresholdRTX_FieldHandleType; // 0x8DC
		::System::Boolean ESPP_hqUEBloomThresholdRTX_UseIt; // 0x8E0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqUEBloomThresholdRTX; // 0x8E8
		::System::Boolean ESPP_hqUEBloomThresholdRTX_EnableFade; // 0x8F0
		::System::Boolean ESPP_hqUEBloomThresholdRTX_EnableOverrideDefaultValue; // 0x8F1
		::System::Single ESPP_hqUEBloomThresholdRTX_OverrideDefaultValue; // 0x8F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqUEBloomIntensityRTX_FieldHandleType; // 0x8F8
		::System::Boolean ESPP_hqUEBloomIntensityRTX_UseIt; // 0x8FC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqUEBloomIntensityRTX; // 0x900
		::System::Boolean ESPP_hqUEBloomIntensityRTX_EnableFade; // 0x908
		::System::Boolean ESPP_hqUEBloomIntensityRTX_EnableOverrideDefaultValue; // 0x909
		::System::Single ESPP_hqUEBloomIntensityRTX_OverrideDefaultValue; // 0x90C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomSize6RTX_FieldHandleType; // 0x910
		::System::Boolean ESPP_hqBloomSize6RTX_UseIt; // 0x914
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomSize6RTX; // 0x918
		::System::Boolean ESPP_hqBloomSize6RTX_EnableFade; // 0x920
		::System::Boolean ESPP_hqBloomSize6RTX_EnableOverrideDefaultValue; // 0x921
		::System::Single ESPP_hqBloomSize6RTX_OverrideDefaultValue; // 0x924
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomSize5RTX_FieldHandleType; // 0x928
		::System::Boolean ESPP_hqBloomSize5RTX_UseIt; // 0x92C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomSize5RTX; // 0x930
		::System::Boolean ESPP_hqBloomSize5RTX_EnableFade; // 0x938
		::System::Boolean ESPP_hqBloomSize5RTX_EnableOverrideDefaultValue; // 0x939
		::System::Single ESPP_hqBloomSize5RTX_OverrideDefaultValue; // 0x93C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomSize4RTX_FieldHandleType; // 0x940
		::System::Boolean ESPP_hqBloomSize4RTX_UseIt; // 0x944
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomSize4RTX; // 0x948
		::System::Boolean ESPP_hqBloomSize4RTX_EnableFade; // 0x950
		::System::Boolean ESPP_hqBloomSize4RTX_EnableOverrideDefaultValue; // 0x951
		::System::Single ESPP_hqBloomSize4RTX_OverrideDefaultValue; // 0x954
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomSize3RTX_FieldHandleType; // 0x958
		::System::Boolean ESPP_hqBloomSize3RTX_UseIt; // 0x95C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomSize3RTX; // 0x960
		::System::Boolean ESPP_hqBloomSize3RTX_EnableFade; // 0x968
		::System::Boolean ESPP_hqBloomSize3RTX_EnableOverrideDefaultValue; // 0x969
		::System::Single ESPP_hqBloomSize3RTX_OverrideDefaultValue; // 0x96C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomSize2RTX_FieldHandleType; // 0x970
		::System::Boolean ESPP_hqBloomSize2RTX_UseIt; // 0x974
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomSize2RTX; // 0x978
		::System::Boolean ESPP_hqBloomSize2RTX_EnableFade; // 0x980
		::System::Boolean ESPP_hqBloomSize2RTX_EnableOverrideDefaultValue; // 0x981
		::System::Single ESPP_hqBloomSize2RTX_OverrideDefaultValue; // 0x984
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomSize1RTX_FieldHandleType; // 0x988
		::System::Boolean ESPP_hqBloomSize1RTX_UseIt; // 0x98C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomSize1RTX; // 0x990
		::System::Boolean ESPP_hqBloomSize1RTX_EnableFade; // 0x998
		::System::Boolean ESPP_hqBloomSize1RTX_EnableOverrideDefaultValue; // 0x999
		::System::Single ESPP_hqBloomSize1RTX_OverrideDefaultValue; // 0x99C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqUEBloomMaxThresholdRTX_FieldHandleType; // 0x9A0
		::System::Boolean ESPP_hqUEBloomMaxThresholdRTX_UseIt; // 0x9A4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqUEBloomMaxThresholdRTX; // 0x9A8
		::System::Boolean ESPP_hqUEBloomMaxThresholdRTX_EnableFade; // 0x9B0
		::System::Boolean ESPP_hqUEBloomMaxThresholdRTX_EnableOverrideDefaultValue; // 0x9B1
		::System::Single ESPP_hqUEBloomMaxThresholdRTX_OverrideDefaultValue; // 0x9B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomTint6RTX_FieldHandleType; // 0x9B8
		::System::Boolean ESPP_hqBloomTint6RTX_UseIt; // 0x9BC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomTint6RTX; // 0x9C0
		::System::Boolean ESPP_hqBloomTint6RTX_EnableFade; // 0x9C8
		::System::Boolean ESPP_hqBloomTint6RTX_EnableOverrideDefaultValue; // 0x9C9
		::System::Single ESPP_hqBloomTint6RTX_OverrideDefaultValue; // 0x9CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomTint5RTX_FieldHandleType; // 0x9D0
		::System::Boolean ESPP_hqBloomTint5RTX_UseIt; // 0x9D4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomTint5RTX; // 0x9D8
		::System::Boolean ESPP_hqBloomTint5RTX_EnableFade; // 0x9E0
		::System::Boolean ESPP_hqBloomTint5RTX_EnableOverrideDefaultValue; // 0x9E1
		::System::Single ESPP_hqBloomTint5RTX_OverrideDefaultValue; // 0x9E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomTint4RTX_FieldHandleType; // 0x9E8
		::System::Boolean ESPP_hqBloomTint4RTX_UseIt; // 0x9EC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomTint4RTX; // 0x9F0
		::System::Boolean ESPP_hqBloomTint4RTX_EnableFade; // 0x9F8
		::System::Boolean ESPP_hqBloomTint4RTX_EnableOverrideDefaultValue; // 0x9F9
		::System::Single ESPP_hqBloomTint4RTX_OverrideDefaultValue; // 0x9FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomTint3RTX_FieldHandleType; // 0xA00
		::System::Boolean ESPP_hqBloomTint3RTX_UseIt; // 0xA04
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomTint3RTX; // 0xA08
		::System::Boolean ESPP_hqBloomTint3RTX_EnableFade; // 0xA10
		::System::Boolean ESPP_hqBloomTint3RTX_EnableOverrideDefaultValue; // 0xA11
		::System::Single ESPP_hqBloomTint3RTX_OverrideDefaultValue; // 0xA14
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomTint2RTX_FieldHandleType; // 0xA18
		::System::Boolean ESPP_hqBloomTint2RTX_UseIt; // 0xA1C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomTint2RTX; // 0xA20
		::System::Boolean ESPP_hqBloomTint2RTX_EnableFade; // 0xA28
		::System::Boolean ESPP_hqBloomTint2RTX_EnableOverrideDefaultValue; // 0xA29
		::System::Single ESPP_hqBloomTint2RTX_OverrideDefaultValue; // 0xA2C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomTint1RTX_FieldHandleType; // 0xA30
		::System::Boolean ESPP_hqBloomTint1RTX_UseIt; // 0xA34
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hqBloomTint1RTX; // 0xA38
		::System::Boolean ESPP_hqBloomTint1RTX_EnableFade; // 0xA40
		::System::Boolean ESPP_hqBloomTint1RTX_EnableOverrideDefaultValue; // 0xA41
		::System::Single ESPP_hqBloomTint1RTX_OverrideDefaultValue; // 0xA44
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hQBloomIntensity_FieldHandleType; // 0xA48
		::System::Boolean ESPP_hQBloomIntensity_UseIt; // 0xA4C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hQBloomIntensity; // 0xA50
		::System::Boolean ESPP_hQBloomIntensity_EnableFade; // 0xA58
		::System::Boolean ESPP_hQBloomIntensity_EnableOverrideDefaultValue; // 0xA59
		::System::Single ESPP_hQBloomIntensity_OverrideDefaultValue; // 0xA5C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hQBloomThreshold_FieldHandleType; // 0xA60
		::System::Boolean ESPP_hQBloomThreshold_UseIt; // 0xA64
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hQBloomThreshold; // 0xA68
		::System::Boolean ESPP_hQBloomThreshold_EnableFade; // 0xA70
		::System::Boolean ESPP_hQBloomThreshold_EnableOverrideDefaultValue; // 0xA71
		::System::Single ESPP_hQBloomThreshold_OverrideDefaultValue; // 0xA74
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hQBloomScatter_FieldHandleType; // 0xA78
		::System::Boolean ESPP_hQBloomScatter_UseIt; // 0xA7C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hQBloomScatter; // 0xA80
		::System::Boolean ESPP_hQBloomScatter_EnableFade; // 0xA88
		::System::Boolean ESPP_hQBloomScatter_EnableOverrideDefaultValue; // 0xA89
		::System::Single ESPP_hQBloomScatter_OverrideDefaultValue; // 0xA8C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hQBloomTint_FieldHandleType; // 0xA90
		::System::Boolean ESPP_hQBloomTint_UseIt; // 0xA94
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_hQBloomTint; // 0xA98
		::System::Boolean ESPP_hQBloomTint_EnableFade; // 0xAA0
		::System::Boolean ESPP_hQBloomTint_EnableOverrideDefaultValue; // 0xAA1
		::UnityEngine::Color ESPP_hQBloomTint_OverrideDefaultValue; // 0xAA4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hqBloomResolution_FieldHandleType; // 0xAB4
		::UnityEngine::Rendering::Universal::BloomResolution ESPP_hqBloomResolution; // 0xAB8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useRealDownSample_FieldHandleType; // 0xABC
		::System::Boolean ESPP_useRealDownSample_UseIt; // 0xAC0
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_useRealDownSample; // 0xAC8
		::System::Boolean ESPP_useRealDownSample_EnableFade; // 0xAD0
		::System::Boolean ESPP_useRealDownSample_EnableOverrideDefaultValue; // 0xAD1
		::System::Boolean ESPP_useRealDownSample_OverrideDefaultValue; // 0xAD2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blurRadius_FieldHandleType; // 0xAD4
		::System::Boolean ESPP_blurRadius_UseIt; // 0xAD8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_blurRadius; // 0xAE0
		::System::Boolean ESPP_blurRadius_EnableFade; // 0xAE8
		::System::Boolean ESPP_blurRadius_EnableOverrideDefaultValue; // 0xAE9
		::System::Single ESPP_blurRadius_OverrideDefaultValue; // 0xAEC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_doBloomAfterTAA_FieldHandleType; // 0xAF0
		::System::Boolean ESPP_doBloomAfterTAA_UseIt; // 0xAF4
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_doBloomAfterTAA; // 0xAF8
		::System::Boolean ESPP_doBloomAfterTAA_EnableFade; // 0xB00
		::System::Boolean ESPP_doBloomAfterTAA_EnableOverrideDefaultValue; // 0xB01
		::System::Boolean ESPP_doBloomAfterTAA_OverrideDefaultValue; // 0xB02
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useSourceLumaMask_FieldHandleType; // 0xB04
		::System::Boolean ESPP_useSourceLumaMask_UseIt; // 0xB08
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_useSourceLumaMask; // 0xB10
		::System::Boolean ESPP_useSourceLumaMask_EnableFade; // 0xB18
		::System::Boolean ESPP_useSourceLumaMask_EnableOverrideDefaultValue; // 0xB19
		::System::Boolean ESPP_useSourceLumaMask_OverrideDefaultValue; // 0xB1A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareThresholdForHDR_FieldHandleType; // 0xB1C
		::System::Boolean ESPP_glareThresholdForHDR_UseIt; // 0xB20
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareThresholdForHDR; // 0xB28
		::System::Boolean ESPP_glareThresholdForHDR_EnableFade; // 0xB30
		::System::Boolean ESPP_glareThresholdForHDR_EnableOverrideDefaultValue; // 0xB31
		::System::Single ESPP_glareThresholdForHDR_OverrideDefaultValue; // 0xB34
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareScalerForHDR_FieldHandleType; // 0xB38
		::System::Boolean ESPP_glareScalerForHDR_UseIt; // 0xB3C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareScalerForHDR; // 0xB40
		::System::Boolean ESPP_glareScalerForHDR_EnableFade; // 0xB48
		::System::Boolean ESPP_glareScalerForHDR_EnableOverrideDefaultValue; // 0xB49
		::System::Single ESPP_glareScalerForHDR_OverrideDefaultValue; // 0xB4C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blurLevelWeights_FieldHandleType; // 0xB50
		::System::Boolean ESPP_blurLevelWeights_UseIt; // 0xB54
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_blurLevelWeights; // 0xB58
		::System::Boolean ESPP_blurLevelWeights_EnableFade; // 0xB60
		::System::Boolean ESPP_blurLevelWeights_EnableOverrideDefaultValue; // 0xB61
		::UnityEngine::Vector4 ESPP_blurLevelWeights_OverrideDefaultValue; // 0xB64
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_secondaryGlareThreshold_FieldHandleType; // 0xB74
		::System::Boolean ESPP_secondaryGlareThreshold_UseIt; // 0xB78
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_secondaryGlareThreshold; // 0xB80
		::System::Boolean ESPP_secondaryGlareThreshold_EnableFade; // 0xB88
		::System::Boolean ESPP_secondaryGlareThreshold_EnableOverrideDefaultValue; // 0xB89
		::System::Single ESPP_secondaryGlareThreshold_OverrideDefaultValue; // 0xB8C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_secondaryGlareContrast_FieldHandleType; // 0xB90
		::System::Boolean ESPP_secondaryGlareContrast_UseIt; // 0xB94
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_secondaryGlareContrast; // 0xB98
		::System::Boolean ESPP_secondaryGlareContrast_EnableFade; // 0xBA0
		::System::Boolean ESPP_secondaryGlareContrast_EnableOverrideDefaultValue; // 0xBA1
		::System::Single ESPP_secondaryGlareContrast_OverrideDefaultValue; // 0xBA4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_secondaryGlareWeight_FieldHandleType; // 0xBA8
		::System::Boolean ESPP_secondaryGlareWeight_UseIt; // 0xBAC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_secondaryGlareWeight; // 0xBB0
		::System::Boolean ESPP_secondaryGlareWeight_EnableFade; // 0xBB8
		::System::Boolean ESPP_secondaryGlareWeight_EnableOverrideDefaultValue; // 0xBB9
		::System::Single ESPP_secondaryGlareWeight_OverrideDefaultValue; // 0xBBC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_secondaryBlurRadius_FieldHandleType; // 0xBC0
		::System::Boolean ESPP_secondaryBlurRadius_UseIt; // 0xBC4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_secondaryBlurRadius; // 0xBC8
		::System::Boolean ESPP_secondaryBlurRadius_EnableFade; // 0xBD0
		::System::Boolean ESPP_secondaryBlurRadius_EnableOverrideDefaultValue; // 0xBD1
		::System::Int32 ESPP_secondaryBlurRadius_OverrideDefaultValue; // 0xBD4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_quality_FieldHandleType; // 0xBD8
		::UnityEngine::NAPRenderPipeline0::NapBloomQuality ESPP_quality; // 0xBDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blurLevelBufferHeights_FieldHandleType; // 0xBE0
		::System::Boolean ESPP_blurLevelBufferHeights_UseIt; // 0xBE4
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_blurLevelBufferHeights; // 0xBE8
		::System::Boolean ESPP_blurLevelBufferHeights_EnableFade; // 0xBF0
		::System::Boolean ESPP_blurLevelBufferHeights_EnableOverrideDefaultValue; // 0xBF1
		::UnityEngine::Vector4 ESPP_blurLevelBufferHeights_OverrideDefaultValue; // 0xBF4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_secondaryBlurLevelBufferHeight_FieldHandleType; // 0xC04
		::System::Boolean ESPP_secondaryBlurLevelBufferHeight_UseIt; // 0xC08
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_secondaryBlurLevelBufferHeight; // 0xC10
		::System::Boolean ESPP_secondaryBlurLevelBufferHeight_EnableFade; // 0xC18
		::System::Boolean ESPP_secondaryBlurLevelBufferHeight_EnableOverrideDefaultValue; // 0xC19
		::System::Int32 ESPP_secondaryBlurLevelBufferHeight_OverrideDefaultValue; // 0xC1C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dirtTexture_FieldHandleType; // 0xC20
		::UnityEngine::Texture* ESPP_dirtTexture; // 0xC28
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dirtIntensity_FieldHandleType; // 0xC30
		::System::Boolean ESPP_dirtIntensity_UseIt; // 0xC34
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_dirtIntensity; // 0xC38
		::System::Boolean ESPP_dirtIntensity_EnableFade; // 0xC40
		::System::Boolean ESPP_dirtIntensity_EnableOverrideDefaultValue; // 0xC41
		::System::Single ESPP_dirtIntensity_OverrideDefaultValue; // 0xC44
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_HasExtraDownsample_FieldHandleType; // 0xC48
		::System::Boolean ESPP_HasExtraDownsample_UseIt; // 0xC4C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_HasExtraDownsample; // 0xC50
		::System::Boolean ESPP_HasExtraDownsample_EnableFade; // 0xC58
		::System::Boolean ESPP_HasExtraDownsample_EnableOverrideDefaultValue; // 0xC59
		::System::Boolean ESPP_HasExtraDownsample_OverrideDefaultValue; // 0xC5A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableSpriteFlare_FieldHandleType; // 0xC5C
		::System::Boolean ESPP_enableSpriteFlare_UseIt; // 0xC60
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enableSpriteFlare; // 0xC68
		::System::Boolean ESPP_enableSpriteFlare_EnableFade; // 0xC70
		::System::Boolean ESPP_enableSpriteFlare_EnableOverrideDefaultValue; // 0xC71
		::System::Boolean ESPP_enableSpriteFlare_OverrideDefaultValue; // 0xC72
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_flareThreshold_FieldHandleType; // 0xC74
		::System::Boolean ESPP_flareThreshold_UseIt; // 0xC78
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_flareThreshold; // 0xC80
		::System::Boolean ESPP_flareThreshold_EnableFade; // 0xC88
		::System::Boolean ESPP_flareThreshold_EnableOverrideDefaultValue; // 0xC89
		::System::Single ESPP_flareThreshold_OverrideDefaultValue; // 0xC8C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_areaThreshold_FieldHandleType; // 0xC90
		::System::Boolean ESPP_areaThreshold_UseIt; // 0xC94
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_areaThreshold; // 0xC98
		::System::Boolean ESPP_areaThreshold_EnableFade; // 0xCA0
		::System::Boolean ESPP_areaThreshold_EnableOverrideDefaultValue; // 0xCA1
		::System::Single ESPP_areaThreshold_OverrideDefaultValue; // 0xCA4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_saturate_FieldHandleType; // 0xCA8
		::System::Boolean ESPP_saturate_UseIt; // 0xCAC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_saturate; // 0xCB0
		::System::Boolean ESPP_saturate_EnableFade; // 0xCB8
		::System::Boolean ESPP_saturate_EnableOverrideDefaultValue; // 0xCB9
		::System::Single ESPP_saturate_OverrideDefaultValue; // 0xCBC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_randomize_FieldHandleType; // 0xCC0
		::System::Boolean ESPP_randomize_UseIt; // 0xCC4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_randomize; // 0xCC8
		::System::Boolean ESPP_randomize_EnableFade; // 0xCD0
		::System::Boolean ESPP_randomize_EnableOverrideDefaultValue; // 0xCD1
		::System::Single ESPP_randomize_OverrideDefaultValue; // 0xCD4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sizeClamp_FieldHandleType; // 0xCD8
		::System::Boolean ESPP_sizeClamp_UseIt; // 0xCDC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sizeClamp; // 0xCE0
		::System::Boolean ESPP_sizeClamp_EnableFade; // 0xCE8
		::System::Boolean ESPP_sizeClamp_EnableOverrideDefaultValue; // 0xCE9
		::System::Single ESPP_sizeClamp_OverrideDefaultValue; // 0xCEC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensityClamp_FieldHandleType; // 0xCF0
		::System::Boolean ESPP_intensityClamp_UseIt; // 0xCF4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensityClamp; // 0xCF8
		::System::Boolean ESPP_intensityClamp_EnableFade; // 0xD00
		::System::Boolean ESPP_intensityClamp_EnableOverrideDefaultValue; // 0xD01
		::System::Single ESPP_intensityClamp_OverrideDefaultValue; // 0xD04
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_iterationNum_FieldHandleType; // 0xD08
		::System::Boolean ESPP_iterationNum_UseIt; // 0xD0C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_iterationNum; // 0xD10
		::System::Boolean ESPP_iterationNum_EnableFade; // 0xD18
		::System::Boolean ESPP_iterationNum_EnableOverrideDefaultValue; // 0xD19
		::System::Int32 ESPP_iterationNum_OverrideDefaultValue; // 0xD1C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_flareProfile_FieldHandleType; // 0xD20
		::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP* ESPP_flareProfile; // 0xD28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_CEEC03EFD89445AA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_CEEC03EFD89445AA_OFFSET))(this, a1);
		}

		::System::Void Method_5_ECCE1872B868F9DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_ECCE1872B868F9DC_OFFSET))(this, a1);
		}

		::System::Void Method_5_815B7108FC23FBC4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_815B7108FC23FBC4_OFFSET))(this, a1);
		}

		::System::Void Method_5_815B7108FC23FBC4_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_815B7108FC23FBC4_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_8D6879CAA76F6588()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_8D6879CAA76F6588_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_63D56313608AFE32(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_63D56313608AFE32_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_76ECC59BC7430042(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_76ECC59BC7430042_OFFSET))(this, a1);
		}

		::System::Void Method_5_6BA7BB45F0BA72F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_6BA7BB45F0BA72F4_OFFSET))(this);
		}

		::System::Void Method_5_76ECC59BC7430042_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_76ECC59BC7430042_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}
	};
}
