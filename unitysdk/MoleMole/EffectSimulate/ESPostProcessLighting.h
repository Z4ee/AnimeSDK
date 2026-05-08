#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OtherLightShadowResolution.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SimulatingPlatform.h"

namespace MoleMole::Config { class ConfigEntityLightingEffects; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class Lighting; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x18A26FF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_2561DC986DD32699_1_OFFSET UNITYSDK_OFFSET(0x18A20B30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_2561DC986DD32699_OFFSET UNITYSDK_OFFSET(0x18A1DE60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x18A271A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_3021F634E77C58A0_OFFSET UNITYSDK_OFFSET(0x18A1A9A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x18A27260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x18A270F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18A248C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x18A24800)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x18A0CD70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x18A24AF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x18A24A20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x18A249C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_521267F2AEE4A422_OFFSET UNITYSDK_OFFSET(0x18A11360)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x18A27310)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x18A27180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x18A0C670)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x18A24EF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x18A0FF00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_76ECC59BC7430042_1_OFFSET UNITYSDK_OFFSET(0x18A25BA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_76ECC59BC7430042_OFFSET UNITYSDK_OFFSET(0x18A24B40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x18A27250)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18A27240)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x18A24900)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x18A24A80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x18A24850)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_8D6879CAA76F6588_OFFSET UNITYSDK_OFFSET(0x18A23800)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x18A23CC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x18A26F40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x18A24970)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_A99450342763EB98_OFFSET UNITYSDK_OFFSET(0x18A0D410)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x18A27040)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x18A26FE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x18A23BD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x18A27190)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x18A246E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x18A27000)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18A27270)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18A0CD30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x18A247B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x18A26FD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x18A27050)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x18A27300)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x18A270E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING__CTOR_OFFSET UNITYSDK_OFFSET(0x18A25F50)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessLighting_TypeDefinitionIndex = 76518;

	class ESPostProcessLighting : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::Lighting*>
	{
	public:
		::MoleMole::Config::ConfigEntityLightingEffects* m_stAsset; // 0xB0
		::System::Single _VolDefault_shadowBlurRadius; // 0xB8
		::System::Boolean _VolDefault_disableMainLightShadow; // 0xBC
		::System::Single _VolDefault_cascade0ToNextBlendIntensity; // 0xC0
		::System::Single _VolDefault_cascade1ToNextBlendIntensity; // 0xC4
		::System::Single _VolDefault_cascade2ToNextBlendIntensity; // 0xC8
		::System::Single _VolDefault_cascade3ToNextBlendIntensity; // 0xCC
		::System::Single _VolDefault_maxShadowDistance; // 0xD0
		::System::Single _VolDefault_outOfRangeLightStrength; // 0xD4
		::System::Boolean _VolDefault_lockMaxShadowDistance; // 0xD8
		::System::Boolean _VolDefault_disableShadowMapCache; // 0xD9
		::System::Boolean _VolDefault_disableShadowCasterHiz; // 0xDA
		::System::Boolean _VolDefault_lockSplitByMetric; // 0xDB
		::System::Int32 _VolDefault_cascadeShadowSplitCount; // 0xDC
		::System::Single _VolDefault_cascadeShadowSplit0; // 0xE0
		::System::Single _VolDefault_cascadeShadowSplit1; // 0xE4
		::System::Single _VolDefault_cascadeShadowSplit2; // 0xE8
		::System::Boolean _VolDefault_isContactShadowOn; // 0xEC
		::System::Boolean _VolDefault_overridePunctualLightShadowResolutionConfig; // 0xED
		::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution _VolDefault_otherLightShadowResolution; // 0xF0
		::System::Single _VolDefault_punctualLightShadowStrength; // 0xF4
		::System::Boolean _VolDefault_enableCustomMaxLightCount; // 0xF8
		::System::Int32 _VolDefault_maxLocalLightCount; // 0xFC
		::System::Boolean _VolDefault_overrideAdditionalLightsDiffuseOnlyDistThreshold; // 0x100
		::System::Single _VolDefault_additionalLightsDiffuseOnlyDistThreshold; // 0x104
		::System::Single _VolDefault_localLightLodBiasMultiply; // 0x108
		::System::Boolean _VolDefault_disableLocalLightShadowMapCached; // 0x10C
		::UnityEngine::Rendering::Universal::SimulatingPlatform _VolDefault_disableLocalLightShadowOnPlatform; // 0x110
		::System::Boolean _VolDefault_useConstantLodBiasValue; // 0x114
		::System::Boolean _VolDefault_enableLocalLightGroundDiscard; // 0x115
		::System::Single _VolDefault_localLightDiscardGround1Position; // 0x118
		::System::Single _VolDefault_microShadowIntensity; // 0x11C
		::System::Boolean _VolPreVal_shadowBlurRadius_overrideState; // 0x120
		::System::Single _VolPreVal_shadowBlurRadius; // 0x124
		::System::Boolean _VolPreVal_disableMainLightShadow_overrideState; // 0x128
		::System::Boolean _VolPreVal_disableMainLightShadow; // 0x129
		::System::Boolean _VolPreVal_cascade0ToNextBlendIntensity_overrideState; // 0x12A
		::System::Single _VolPreVal_cascade0ToNextBlendIntensity; // 0x12C
		::System::Boolean _VolPreVal_cascade1ToNextBlendIntensity_overrideState; // 0x130
		::System::Single _VolPreVal_cascade1ToNextBlendIntensity; // 0x134
		::System::Boolean _VolPreVal_cascade2ToNextBlendIntensity_overrideState; // 0x138
		::System::Single _VolPreVal_cascade2ToNextBlendIntensity; // 0x13C
		::System::Boolean _VolPreVal_cascade3ToNextBlendIntensity_overrideState; // 0x140
		::System::Single _VolPreVal_cascade3ToNextBlendIntensity; // 0x144
		::System::Boolean _VolPreVal_maxShadowDistance_overrideState; // 0x148
		::System::Single _VolPreVal_maxShadowDistance; // 0x14C
		::System::Boolean _VolPreVal_outOfRangeLightStrength_overrideState; // 0x150
		::System::Single _VolPreVal_outOfRangeLightStrength; // 0x154
		::System::Boolean _VolPreVal_lockMaxShadowDistance_overrideState; // 0x158
		::System::Boolean _VolPreVal_lockMaxShadowDistance; // 0x159
		::System::Boolean _VolPreVal_disableShadowMapCache_overrideState; // 0x15A
		::System::Boolean _VolPreVal_disableShadowMapCache; // 0x15B
		::System::Boolean _VolPreVal_disableShadowCasterHiz_overrideState; // 0x15C
		::System::Boolean _VolPreVal_disableShadowCasterHiz; // 0x15D
		::System::Boolean _VolPreVal_lockSplitByMetric_overrideState; // 0x15E
		::System::Boolean _VolPreVal_lockSplitByMetric; // 0x15F
		::System::Boolean _VolPreVal_cascadeShadowSplitCount_overrideState; // 0x160
		::System::Int32 _VolPreVal_cascadeShadowSplitCount; // 0x164
		::System::Boolean _VolPreVal_cascadeShadowSplit0_overrideState; // 0x168
		::System::Single _VolPreVal_cascadeShadowSplit0; // 0x16C
		::System::Boolean _VolPreVal_cascadeShadowSplit1_overrideState; // 0x170
		::System::Single _VolPreVal_cascadeShadowSplit1; // 0x174
		::System::Boolean _VolPreVal_cascadeShadowSplit2_overrideState; // 0x178
		::System::Single _VolPreVal_cascadeShadowSplit2; // 0x17C
		::System::Boolean _VolPreVal_isContactShadowOn_overrideState; // 0x180
		::System::Boolean _VolPreVal_isContactShadowOn; // 0x181
		::System::Boolean _VolPreVal_overridePunctualLightShadowResolutionConfig_overrideState; // 0x182
		::System::Boolean _VolPreVal_overridePunctualLightShadowResolutionConfig; // 0x183
		::System::Boolean _VolPreVal_otherLightShadowResolution_overrideState; // 0x184
		::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution _VolPreVal_otherLightShadowResolution; // 0x188
		::System::Boolean _VolPreVal_punctualLightShadowStrength_overrideState; // 0x18C
		::System::Single _VolPreVal_punctualLightShadowStrength; // 0x190
		::System::Boolean _VolPreVal_enableCustomMaxLightCount_overrideState; // 0x194
		::System::Boolean _VolPreVal_enableCustomMaxLightCount; // 0x195
		::System::Boolean _VolPreVal_maxLocalLightCount_overrideState; // 0x196
		::System::Int32 _VolPreVal_maxLocalLightCount; // 0x198
		::System::Boolean _VolPreVal_overrideAdditionalLightsDiffuseOnlyDistThreshold_overrideState; // 0x19C
		::System::Boolean _VolPreVal_overrideAdditionalLightsDiffuseOnlyDistThreshold; // 0x19D
		::System::Boolean _VolPreVal_additionalLightsDiffuseOnlyDistThreshold_overrideState; // 0x19E
		::System::Single _VolPreVal_additionalLightsDiffuseOnlyDistThreshold; // 0x1A0
		::System::Boolean _VolPreVal_localLightLodBiasMultiply_overrideState; // 0x1A4
		::System::Single _VolPreVal_localLightLodBiasMultiply; // 0x1A8
		::System::Boolean _VolPreVal_disableLocalLightShadowMapCached_overrideState; // 0x1AC
		::System::Boolean _VolPreVal_disableLocalLightShadowMapCached; // 0x1AD
		::System::Boolean _VolPreVal_disableLocalLightShadowOnPlatform_overrideState; // 0x1AE
		::UnityEngine::Rendering::Universal::SimulatingPlatform _VolPreVal_disableLocalLightShadowOnPlatform; // 0x1B0
		::System::Boolean _VolPreVal_useConstantLodBiasValue_overrideState; // 0x1B4
		::System::Boolean _VolPreVal_useConstantLodBiasValue; // 0x1B5
		::System::Boolean _VolPreVal_enableLocalLightGroundDiscard_overrideState; // 0x1B6
		::System::Boolean _VolPreVal_enableLocalLightGroundDiscard; // 0x1B7
		::System::Boolean _VolPreVal_localLightDiscardGround1Position_overrideState; // 0x1B8
		::System::Single _VolPreVal_localLightDiscardGround1Position; // 0x1BC
		::System::Boolean _VolPreVal_microShadowIntensity_overrideState; // 0x1C0
		::System::Single _VolPreVal_microShadowIntensity; // 0x1C4
		::System::Single _TimelineCurveFirstVal_shadowBlurRadius; // 0x1C8
		::System::Single _TimelineCurveLastVal_shadowBlurRadius; // 0x1CC
		::System::Boolean _TimelineCurveFirstVal_disableMainLightShadow; // 0x1D0
		::System::Boolean _TimelineCurveLastVal_disableMainLightShadow; // 0x1D1
		::System::Single _TimelineCurveFirstVal_cascade0ToNextBlendIntensity; // 0x1D4
		::System::Single _TimelineCurveLastVal_cascade0ToNextBlendIntensity; // 0x1D8
		::System::Single _TimelineCurveFirstVal_cascade1ToNextBlendIntensity; // 0x1DC
		::System::Single _TimelineCurveLastVal_cascade1ToNextBlendIntensity; // 0x1E0
		::System::Single _TimelineCurveFirstVal_cascade2ToNextBlendIntensity; // 0x1E4
		::System::Single _TimelineCurveLastVal_cascade2ToNextBlendIntensity; // 0x1E8
		::System::Single _TimelineCurveFirstVal_cascade3ToNextBlendIntensity; // 0x1EC
		::System::Single _TimelineCurveLastVal_cascade3ToNextBlendIntensity; // 0x1F0
		::System::Single _TimelineCurveFirstVal_maxShadowDistance; // 0x1F4
		::System::Single _TimelineCurveLastVal_maxShadowDistance; // 0x1F8
		::System::Single _TimelineCurveFirstVal_outOfRangeLightStrength; // 0x1FC
		::System::Single _TimelineCurveLastVal_outOfRangeLightStrength; // 0x200
		::System::Boolean _TimelineCurveFirstVal_lockMaxShadowDistance; // 0x204
		::System::Boolean _TimelineCurveLastVal_lockMaxShadowDistance; // 0x205
		::System::Boolean _TimelineCurveFirstVal_disableShadowMapCache; // 0x206
		::System::Boolean _TimelineCurveLastVal_disableShadowMapCache; // 0x207
		::System::Boolean _TimelineCurveFirstVal_disableShadowCasterHiz; // 0x208
		::System::Boolean _TimelineCurveLastVal_disableShadowCasterHiz; // 0x209
		::System::Boolean _TimelineCurveFirstVal_lockSplitByMetric; // 0x20A
		::System::Boolean _TimelineCurveLastVal_lockSplitByMetric; // 0x20B
		::System::Int32 _TimelineCurveFirstVal_cascadeShadowSplitCount; // 0x20C
		::System::Int32 _TimelineCurveLastVal_cascadeShadowSplitCount; // 0x210
		::System::Single _TimelineCurveFirstVal_cascadeShadowSplit0; // 0x214
		::System::Single _TimelineCurveLastVal_cascadeShadowSplit0; // 0x218
		::System::Single _TimelineCurveFirstVal_cascadeShadowSplit1; // 0x21C
		::System::Single _TimelineCurveLastVal_cascadeShadowSplit1; // 0x220
		::System::Single _TimelineCurveFirstVal_cascadeShadowSplit2; // 0x224
		::System::Single _TimelineCurveLastVal_cascadeShadowSplit2; // 0x228
		::System::Boolean _TimelineCurveFirstVal_isContactShadowOn; // 0x22C
		::System::Boolean _TimelineCurveLastVal_isContactShadowOn; // 0x22D
		::System::Boolean _TimelineCurveFirstVal_overridePunctualLightShadowResolutionConfig; // 0x22E
		::System::Boolean _TimelineCurveLastVal_overridePunctualLightShadowResolutionConfig; // 0x22F
		::System::Single _TimelineCurveFirstVal_punctualLightShadowStrength; // 0x230
		::System::Single _TimelineCurveLastVal_punctualLightShadowStrength; // 0x234
		::System::Boolean _TimelineCurveFirstVal_enableCustomMaxLightCount; // 0x238
		::System::Boolean _TimelineCurveLastVal_enableCustomMaxLightCount; // 0x239
		::System::Int32 _TimelineCurveFirstVal_maxLocalLightCount; // 0x23C
		::System::Int32 _TimelineCurveLastVal_maxLocalLightCount; // 0x240
		::System::Boolean _TimelineCurveFirstVal_overrideAdditionalLightsDiffuseOnlyDistThreshold; // 0x244
		::System::Boolean _TimelineCurveLastVal_overrideAdditionalLightsDiffuseOnlyDistThreshold; // 0x245
		::System::Single _TimelineCurveFirstVal_additionalLightsDiffuseOnlyDistThreshold; // 0x248
		::System::Single _TimelineCurveLastVal_additionalLightsDiffuseOnlyDistThreshold; // 0x24C
		::System::Single _TimelineCurveFirstVal_localLightLodBiasMultiply; // 0x250
		::System::Single _TimelineCurveLastVal_localLightLodBiasMultiply; // 0x254
		::System::Boolean _TimelineCurveFirstVal_disableLocalLightShadowMapCached; // 0x258
		::System::Boolean _TimelineCurveLastVal_disableLocalLightShadowMapCached; // 0x259
		::System::Boolean _TimelineCurveFirstVal_useConstantLodBiasValue; // 0x25A
		::System::Boolean _TimelineCurveLastVal_useConstantLodBiasValue; // 0x25B
		::System::Boolean _TimelineCurveFirstVal_enableLocalLightGroundDiscard; // 0x25C
		::System::Boolean _TimelineCurveLastVal_enableLocalLightGroundDiscard; // 0x25D
		::System::Single _TimelineCurveFirstVal_localLightDiscardGround1Position; // 0x260
		::System::Single _TimelineCurveLastVal_localLightDiscardGround1Position; // 0x264
		::System::Single _TimelineCurveFirstVal_microShadowIntensity; // 0x268
		::System::Single _TimelineCurveLastVal_microShadowIntensity; // 0x26C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shadowBlurRadius_FieldHandleType; // 0x270
		::System::Boolean ESPP_shadowBlurRadius_UseIt; // 0x274
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shadowBlurRadius; // 0x278
		::System::Boolean ESPP_shadowBlurRadius_EnableFade; // 0x280
		::System::Boolean ESPP_shadowBlurRadius_EnableOverrideDefaultValue; // 0x281
		::System::Single ESPP_shadowBlurRadius_OverrideDefaultValue; // 0x284
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_disableMainLightShadow_FieldHandleType; // 0x288
		::System::Boolean ESPP_disableMainLightShadow_UseIt; // 0x28C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_disableMainLightShadow; // 0x290
		::System::Boolean ESPP_disableMainLightShadow_EnableFade; // 0x298
		::System::Boolean ESPP_disableMainLightShadow_EnableOverrideDefaultValue; // 0x299
		::System::Boolean ESPP_disableMainLightShadow_OverrideDefaultValue; // 0x29A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cascade0ToNextBlendIntensity_FieldHandleType; // 0x29C
		::System::Boolean ESPP_cascade0ToNextBlendIntensity_UseIt; // 0x2A0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cascade0ToNextBlendIntensity; // 0x2A8
		::System::Boolean ESPP_cascade0ToNextBlendIntensity_EnableFade; // 0x2B0
		::System::Boolean ESPP_cascade0ToNextBlendIntensity_EnableOverrideDefaultValue; // 0x2B1
		::System::Single ESPP_cascade0ToNextBlendIntensity_OverrideDefaultValue; // 0x2B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cascade1ToNextBlendIntensity_FieldHandleType; // 0x2B8
		::System::Boolean ESPP_cascade1ToNextBlendIntensity_UseIt; // 0x2BC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cascade1ToNextBlendIntensity; // 0x2C0
		::System::Boolean ESPP_cascade1ToNextBlendIntensity_EnableFade; // 0x2C8
		::System::Boolean ESPP_cascade1ToNextBlendIntensity_EnableOverrideDefaultValue; // 0x2C9
		::System::Single ESPP_cascade1ToNextBlendIntensity_OverrideDefaultValue; // 0x2CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cascade2ToNextBlendIntensity_FieldHandleType; // 0x2D0
		::System::Boolean ESPP_cascade2ToNextBlendIntensity_UseIt; // 0x2D4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cascade2ToNextBlendIntensity; // 0x2D8
		::System::Boolean ESPP_cascade2ToNextBlendIntensity_EnableFade; // 0x2E0
		::System::Boolean ESPP_cascade2ToNextBlendIntensity_EnableOverrideDefaultValue; // 0x2E1
		::System::Single ESPP_cascade2ToNextBlendIntensity_OverrideDefaultValue; // 0x2E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cascade3ToNextBlendIntensity_FieldHandleType; // 0x2E8
		::System::Boolean ESPP_cascade3ToNextBlendIntensity_UseIt; // 0x2EC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cascade3ToNextBlendIntensity; // 0x2F0
		::System::Boolean ESPP_cascade3ToNextBlendIntensity_EnableFade; // 0x2F8
		::System::Boolean ESPP_cascade3ToNextBlendIntensity_EnableOverrideDefaultValue; // 0x2F9
		::System::Single ESPP_cascade3ToNextBlendIntensity_OverrideDefaultValue; // 0x2FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_maxShadowDistance_FieldHandleType; // 0x300
		::System::Boolean ESPP_maxShadowDistance_UseIt; // 0x304
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_maxShadowDistance; // 0x308
		::System::Boolean ESPP_maxShadowDistance_EnableFade; // 0x310
		::System::Boolean ESPP_maxShadowDistance_EnableOverrideDefaultValue; // 0x311
		::System::Single ESPP_maxShadowDistance_OverrideDefaultValue; // 0x314
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outOfRangeLightStrength_FieldHandleType; // 0x318
		::System::Boolean ESPP_outOfRangeLightStrength_UseIt; // 0x31C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_outOfRangeLightStrength; // 0x320
		::System::Boolean ESPP_outOfRangeLightStrength_EnableFade; // 0x328
		::System::Boolean ESPP_outOfRangeLightStrength_EnableOverrideDefaultValue; // 0x329
		::System::Single ESPP_outOfRangeLightStrength_OverrideDefaultValue; // 0x32C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lockMaxShadowDistance_FieldHandleType; // 0x330
		::System::Boolean ESPP_lockMaxShadowDistance_UseIt; // 0x334
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lockMaxShadowDistance; // 0x338
		::System::Boolean ESPP_lockMaxShadowDistance_EnableFade; // 0x340
		::System::Boolean ESPP_lockMaxShadowDistance_EnableOverrideDefaultValue; // 0x341
		::System::Boolean ESPP_lockMaxShadowDistance_OverrideDefaultValue; // 0x342
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_disableShadowMapCache_FieldHandleType; // 0x344
		::System::Boolean ESPP_disableShadowMapCache_UseIt; // 0x348
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_disableShadowMapCache; // 0x350
		::System::Boolean ESPP_disableShadowMapCache_EnableFade; // 0x358
		::System::Boolean ESPP_disableShadowMapCache_EnableOverrideDefaultValue; // 0x359
		::System::Boolean ESPP_disableShadowMapCache_OverrideDefaultValue; // 0x35A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_disableShadowCasterHiz_FieldHandleType; // 0x35C
		::System::Boolean ESPP_disableShadowCasterHiz_UseIt; // 0x360
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_disableShadowCasterHiz; // 0x368
		::System::Boolean ESPP_disableShadowCasterHiz_EnableFade; // 0x370
		::System::Boolean ESPP_disableShadowCasterHiz_EnableOverrideDefaultValue; // 0x371
		::System::Boolean ESPP_disableShadowCasterHiz_OverrideDefaultValue; // 0x372
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lockSplitByMetric_FieldHandleType; // 0x374
		::System::Boolean ESPP_lockSplitByMetric_UseIt; // 0x378
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lockSplitByMetric; // 0x380
		::System::Boolean ESPP_lockSplitByMetric_EnableFade; // 0x388
		::System::Boolean ESPP_lockSplitByMetric_EnableOverrideDefaultValue; // 0x389
		::System::Boolean ESPP_lockSplitByMetric_OverrideDefaultValue; // 0x38A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cascadeShadowSplitCount_FieldHandleType; // 0x38C
		::System::Boolean ESPP_cascadeShadowSplitCount_UseIt; // 0x390
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cascadeShadowSplitCount; // 0x398
		::System::Boolean ESPP_cascadeShadowSplitCount_EnableFade; // 0x3A0
		::System::Boolean ESPP_cascadeShadowSplitCount_EnableOverrideDefaultValue; // 0x3A1
		::System::Int32 ESPP_cascadeShadowSplitCount_OverrideDefaultValue; // 0x3A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cascadeShadowSplit0_FieldHandleType; // 0x3A8
		::System::Boolean ESPP_cascadeShadowSplit0_UseIt; // 0x3AC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cascadeShadowSplit0; // 0x3B0
		::System::Boolean ESPP_cascadeShadowSplit0_EnableFade; // 0x3B8
		::System::Boolean ESPP_cascadeShadowSplit0_EnableOverrideDefaultValue; // 0x3B9
		::System::Single ESPP_cascadeShadowSplit0_OverrideDefaultValue; // 0x3BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cascadeShadowSplit1_FieldHandleType; // 0x3C0
		::System::Boolean ESPP_cascadeShadowSplit1_UseIt; // 0x3C4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cascadeShadowSplit1; // 0x3C8
		::System::Boolean ESPP_cascadeShadowSplit1_EnableFade; // 0x3D0
		::System::Boolean ESPP_cascadeShadowSplit1_EnableOverrideDefaultValue; // 0x3D1
		::System::Single ESPP_cascadeShadowSplit1_OverrideDefaultValue; // 0x3D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cascadeShadowSplit2_FieldHandleType; // 0x3D8
		::System::Boolean ESPP_cascadeShadowSplit2_UseIt; // 0x3DC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cascadeShadowSplit2; // 0x3E0
		::System::Boolean ESPP_cascadeShadowSplit2_EnableFade; // 0x3E8
		::System::Boolean ESPP_cascadeShadowSplit2_EnableOverrideDefaultValue; // 0x3E9
		::System::Single ESPP_cascadeShadowSplit2_OverrideDefaultValue; // 0x3EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_isContactShadowOn_FieldHandleType; // 0x3F0
		::System::Boolean ESPP_isContactShadowOn_UseIt; // 0x3F4
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_isContactShadowOn; // 0x3F8
		::System::Boolean ESPP_isContactShadowOn_EnableFade; // 0x400
		::System::Boolean ESPP_isContactShadowOn_EnableOverrideDefaultValue; // 0x401
		::System::Boolean ESPP_isContactShadowOn_OverrideDefaultValue; // 0x402
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_overridePunctualLightShadowResolutionConfig_FieldHandleType; // 0x404
		::System::Boolean ESPP_overridePunctualLightShadowResolutionConfig_UseIt; // 0x408
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_overridePunctualLightShadowResolutionConfig; // 0x410
		::System::Boolean ESPP_overridePunctualLightShadowResolutionConfig_EnableFade; // 0x418
		::System::Boolean ESPP_overridePunctualLightShadowResolutionConfig_EnableOverrideDefaultValue; // 0x419
		::System::Boolean ESPP_overridePunctualLightShadowResolutionConfig_OverrideDefaultValue; // 0x41A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_otherLightShadowResolution_FieldHandleType; // 0x41C
		::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution ESPP_otherLightShadowResolution; // 0x420
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_punctualLightShadowStrength_FieldHandleType; // 0x424
		::System::Boolean ESPP_punctualLightShadowStrength_UseIt; // 0x428
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_punctualLightShadowStrength; // 0x430
		::System::Boolean ESPP_punctualLightShadowStrength_EnableFade; // 0x438
		::System::Boolean ESPP_punctualLightShadowStrength_EnableOverrideDefaultValue; // 0x439
		::System::Single ESPP_punctualLightShadowStrength_OverrideDefaultValue; // 0x43C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableCustomMaxLightCount_FieldHandleType; // 0x440
		::System::Boolean ESPP_enableCustomMaxLightCount_UseIt; // 0x444
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enableCustomMaxLightCount; // 0x448
		::System::Boolean ESPP_enableCustomMaxLightCount_EnableFade; // 0x450
		::System::Boolean ESPP_enableCustomMaxLightCount_EnableOverrideDefaultValue; // 0x451
		::System::Boolean ESPP_enableCustomMaxLightCount_OverrideDefaultValue; // 0x452
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_maxLocalLightCount_FieldHandleType; // 0x454
		::System::Boolean ESPP_maxLocalLightCount_UseIt; // 0x458
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_maxLocalLightCount; // 0x460
		::System::Boolean ESPP_maxLocalLightCount_EnableFade; // 0x468
		::System::Boolean ESPP_maxLocalLightCount_EnableOverrideDefaultValue; // 0x469
		::System::Int32 ESPP_maxLocalLightCount_OverrideDefaultValue; // 0x46C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_overrideAdditionalLightsDiffuseOnlyDistThreshold_FieldHandleType; // 0x470
		::System::Boolean ESPP_overrideAdditionalLightsDiffuseOnlyDistThreshold_UseIt; // 0x474
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_overrideAdditionalLightsDiffuseOnlyDistThreshold; // 0x478
		::System::Boolean ESPP_overrideAdditionalLightsDiffuseOnlyDistThreshold_EnableFade; // 0x480
		::System::Boolean ESPP_overrideAdditionalLightsDiffuseOnlyDistThreshold_EnableOverrideDefaultValue; // 0x481
		::System::Boolean ESPP_overrideAdditionalLightsDiffuseOnlyDistThreshold_OverrideDefaultValue; // 0x482
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_additionalLightsDiffuseOnlyDistThreshold_FieldHandleType; // 0x484
		::System::Boolean ESPP_additionalLightsDiffuseOnlyDistThreshold_UseIt; // 0x488
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_additionalLightsDiffuseOnlyDistThreshold; // 0x490
		::System::Boolean ESPP_additionalLightsDiffuseOnlyDistThreshold_EnableFade; // 0x498
		::System::Boolean ESPP_additionalLightsDiffuseOnlyDistThreshold_EnableOverrideDefaultValue; // 0x499
		::System::Single ESPP_additionalLightsDiffuseOnlyDistThreshold_OverrideDefaultValue; // 0x49C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_localLightLodBiasMultiply_FieldHandleType; // 0x4A0
		::System::Boolean ESPP_localLightLodBiasMultiply_UseIt; // 0x4A4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_localLightLodBiasMultiply; // 0x4A8
		::System::Boolean ESPP_localLightLodBiasMultiply_EnableFade; // 0x4B0
		::System::Boolean ESPP_localLightLodBiasMultiply_EnableOverrideDefaultValue; // 0x4B1
		::System::Single ESPP_localLightLodBiasMultiply_OverrideDefaultValue; // 0x4B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_disableLocalLightShadowMapCached_FieldHandleType; // 0x4B8
		::System::Boolean ESPP_disableLocalLightShadowMapCached_UseIt; // 0x4BC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_disableLocalLightShadowMapCached; // 0x4C0
		::System::Boolean ESPP_disableLocalLightShadowMapCached_EnableFade; // 0x4C8
		::System::Boolean ESPP_disableLocalLightShadowMapCached_EnableOverrideDefaultValue; // 0x4C9
		::System::Boolean ESPP_disableLocalLightShadowMapCached_OverrideDefaultValue; // 0x4CA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_disableLocalLightShadowOnPlatform_FieldHandleType; // 0x4CC
		::UnityEngine::Rendering::Universal::SimulatingPlatform ESPP_disableLocalLightShadowOnPlatform; // 0x4D0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useConstantLodBiasValue_FieldHandleType; // 0x4D4
		::System::Boolean ESPP_useConstantLodBiasValue_UseIt; // 0x4D8
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_useConstantLodBiasValue; // 0x4E0
		::System::Boolean ESPP_useConstantLodBiasValue_EnableFade; // 0x4E8
		::System::Boolean ESPP_useConstantLodBiasValue_EnableOverrideDefaultValue; // 0x4E9
		::System::Boolean ESPP_useConstantLodBiasValue_OverrideDefaultValue; // 0x4EA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableLocalLightGroundDiscard_FieldHandleType; // 0x4EC
		::System::Boolean ESPP_enableLocalLightGroundDiscard_UseIt; // 0x4F0
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enableLocalLightGroundDiscard; // 0x4F8
		::System::Boolean ESPP_enableLocalLightGroundDiscard_EnableFade; // 0x500
		::System::Boolean ESPP_enableLocalLightGroundDiscard_EnableOverrideDefaultValue; // 0x501
		::System::Boolean ESPP_enableLocalLightGroundDiscard_OverrideDefaultValue; // 0x502
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_localLightDiscardGround1Position_FieldHandleType; // 0x504
		::System::Boolean ESPP_localLightDiscardGround1Position_UseIt; // 0x508
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_localLightDiscardGround1Position; // 0x510
		::System::Boolean ESPP_localLightDiscardGround1Position_EnableFade; // 0x518
		::System::Boolean ESPP_localLightDiscardGround1Position_EnableOverrideDefaultValue; // 0x519
		::System::Single ESPP_localLightDiscardGround1Position_OverrideDefaultValue; // 0x51C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_microShadowIntensity_FieldHandleType; // 0x520
		::System::Boolean ESPP_microShadowIntensity_UseIt; // 0x524
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_microShadowIntensity; // 0x528
		::System::Boolean ESPP_microShadowIntensity_EnableFade; // 0x530
		::System::Boolean ESPP_microShadowIntensity_EnableOverrideDefaultValue; // 0x531
		::System::Single ESPP_microShadowIntensity_OverrideDefaultValue; // 0x534

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_A99450342763EB98()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_A99450342763EB98_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_521267F2AEE4A422(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_521267F2AEE4A422_OFFSET))(this, a1);
		}

		::System::Void Method_5_3021F634E77C58A0(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_3021F634E77C58A0_OFFSET))(this, a1);
		}

		::System::Void Method_5_2561DC986DD32699(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_2561DC986DD32699_OFFSET))(this, a1);
		}

		::System::Void Method_5_2561DC986DD32699_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_2561DC986DD32699_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_8D6879CAA76F6588()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_8D6879CAA76F6588_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_76ECC59BC7430042(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_76ECC59BC7430042_OFFSET))(this, a1);
		}

		::System::Void Method_5_6BA7BB45F0BA72F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_6BA7BB45F0BA72F4_OFFSET))(this);
		}

		::System::Void Method_5_76ECC59BC7430042_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_76ECC59BC7430042_1_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIGHTING_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}
	};
}
