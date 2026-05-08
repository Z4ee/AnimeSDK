#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostLight_RenderLayerMask.h"

namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::Config { class ConfigEntityScreenSpacePlanarReflectionEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class ScreenSpacePlanarReflection; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x18A2EEC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x18A30570)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_2561DC986DD32699_1_OFFSET UNITYSDK_OFFSET(0x18A2E0D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_2561DC986DD32699_OFFSET UNITYSDK_OFFSET(0x18A2D2E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x18A30890)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_2A99139D13C42A50_OFFSET UNITYSDK_OFFSET(0x18A28F60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x18A306D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x18A307B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18A2F6F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x18A2F630)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_497833CF065C1894_1_OFFSET UNITYSDK_OFFSET(0x18A2FAC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x18A27690)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x18A2F920)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x18A2F850)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x18A2F7F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x18A30550)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x18A30610)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_594D45A47A873869_OFFSET UNITYSDK_OFFSET(0x18A2C020)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x18A27320)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x18A288C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x18A30880)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18A306E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_83DA8FE11BEA9751_OFFSET UNITYSDK_OFFSET(0x18A2F970)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x18A2F730)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x18A2F8B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x18A2F680)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x18A2F130)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x18A30630)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x18A2F7A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_A99450342763EB98_OFFSET UNITYSDK_OFFSET(0x18A27A00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x18A307A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x18A306C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x18A2F040)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x18A30780)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x18A2F510)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x18A30840)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18A30580)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18A27650)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x18A2F5E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x18A30620)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x18A306F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x18A30790)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x18A30560)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_EE2957687AFE92A5_OFFSET UNITYSDK_OFFSET(0x18A2FED0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18A30020)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessScreenSpacePlanarReflection_TypeDefinitionIndex = 56777;

	class ESPostProcessScreenSpacePlanarReflection : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*>
	{
	public:
		::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_mirrorReflectionOverride; // 0xB8
		::System::Single _VolDefault_planarReflectionBlurAmount; // 0xBC
		::System::Single _VolDefault_planarReflectionLodSteps; // 0xC0
		::System::Single _VolDefault_planarReflectionMinSmoothness; // 0xC4
		::System::Single _VolDefault_planarReflectionSmoothnessFadeStart; // 0xC8
		::UnityEngine::LayerMask _VolDefault_planarReflectionCameraDisabledLayerMask; // 0xCC
		::UnityEngine::LayerMask _VolDefault_planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice; // 0xD0
		::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask _VolDefault_planarReflectionCameraDisabledRenderLayerMask; // 0xD4
		::System::Boolean _VolDefault_Enabled; // 0xD8
		::System::Single _VolDefault_FadeDistance; // 0xDC
		::System::Single _VolDefault_StretchScale; // 0xE0
		::System::Single _VolDefault_ScreenStretchThreshold; // 0xE4
		::System::Boolean _VolPreVal_mirrorReflectionOverride_overrideState; // 0xE8
		::System::Boolean _VolPreVal_mirrorReflectionOverride; // 0xE9
		::System::Boolean _VolPreVal_planarReflectionBlurAmount_overrideState; // 0xEA
		::System::Single _VolPreVal_planarReflectionBlurAmount; // 0xEC
		::System::Boolean _VolPreVal_planarReflectionLodSteps_overrideState; // 0xF0
		::System::Single _VolPreVal_planarReflectionLodSteps; // 0xF4
		::System::Boolean _VolPreVal_planarReflectionMinSmoothness_overrideState; // 0xF8
		::System::Single _VolPreVal_planarReflectionMinSmoothness; // 0xFC
		::System::Boolean _VolPreVal_planarReflectionSmoothnessFadeStart_overrideState; // 0x100
		::System::Single _VolPreVal_planarReflectionSmoothnessFadeStart; // 0x104
		::System::Boolean _VolPreVal_planarReflectionCameraDisabledLayerMask_overrideState; // 0x108
		::UnityEngine::LayerMask _VolPreVal_planarReflectionCameraDisabledLayerMask; // 0x10C
		::System::Boolean _VolPreVal_planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice_overrideState; // 0x110
		::UnityEngine::LayerMask _VolPreVal_planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice; // 0x114
		::System::Boolean _VolPreVal_planarReflectionCameraDisabledRenderLayerMask_overrideState; // 0x118
		::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask _VolPreVal_planarReflectionCameraDisabledRenderLayerMask; // 0x11C
		::System::Boolean _VolPreVal_Enabled_overrideState; // 0x120
		::System::Boolean _VolPreVal_Enabled; // 0x121
		::System::Boolean _VolPreVal_FadeDistance_overrideState; // 0x122
		::System::Single _VolPreVal_FadeDistance; // 0x124
		::System::Boolean _VolPreVal_StretchScale_overrideState; // 0x128
		::System::Single _VolPreVal_StretchScale; // 0x12C
		::System::Boolean _VolPreVal_ScreenStretchThreshold_overrideState; // 0x130
		::System::Single _VolPreVal_ScreenStretchThreshold; // 0x134
		::System::Boolean _TimelineCurveFirstVal_mirrorReflectionOverride; // 0x138
		::System::Boolean _TimelineCurveLastVal_mirrorReflectionOverride; // 0x139
		::System::Single _TimelineCurveFirstVal_planarReflectionBlurAmount; // 0x13C
		::System::Single _TimelineCurveLastVal_planarReflectionBlurAmount; // 0x140
		::System::Single _TimelineCurveFirstVal_planarReflectionLodSteps; // 0x144
		::System::Single _TimelineCurveLastVal_planarReflectionLodSteps; // 0x148
		::System::Single _TimelineCurveFirstVal_planarReflectionMinSmoothness; // 0x14C
		::System::Single _TimelineCurveLastVal_planarReflectionMinSmoothness; // 0x150
		::System::Single _TimelineCurveFirstVal_planarReflectionSmoothnessFadeStart; // 0x154
		::System::Single _TimelineCurveLastVal_planarReflectionSmoothnessFadeStart; // 0x158
		::System::Boolean _TimelineCurveFirstVal_Enabled; // 0x15C
		::System::Boolean _TimelineCurveLastVal_Enabled; // 0x15D
		::System::Single _TimelineCurveFirstVal_FadeDistance; // 0x160
		::System::Single _TimelineCurveLastVal_FadeDistance; // 0x164
		::System::Single _TimelineCurveFirstVal_StretchScale; // 0x168
		::System::Single _TimelineCurveLastVal_StretchScale; // 0x16C
		::System::Single _TimelineCurveFirstVal_ScreenStretchThreshold; // 0x170
		::System::Single _TimelineCurveLastVal_ScreenStretchThreshold; // 0x174
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_mirrorReflectionOverride_FieldHandleType; // 0x178
		::System::Boolean ESPP_mirrorReflectionOverride_UseIt; // 0x17C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_mirrorReflectionOverride; // 0x180
		::System::Boolean ESPP_mirrorReflectionOverride_EnableFade; // 0x188
		::System::Boolean ESPP_mirrorReflectionOverride_EnableOverrideDefaultValue; // 0x189
		::System::Boolean ESPP_mirrorReflectionOverride_OverrideDefaultValue; // 0x18A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_planarReflectionBlurAmount_FieldHandleType; // 0x18C
		::System::Boolean ESPP_planarReflectionBlurAmount_UseIt; // 0x190
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_planarReflectionBlurAmount; // 0x198
		::System::Boolean ESPP_planarReflectionBlurAmount_EnableFade; // 0x1A0
		::System::Boolean ESPP_planarReflectionBlurAmount_EnableOverrideDefaultValue; // 0x1A1
		::System::Single ESPP_planarReflectionBlurAmount_OverrideDefaultValue; // 0x1A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_planarReflectionLodSteps_FieldHandleType; // 0x1A8
		::System::Boolean ESPP_planarReflectionLodSteps_UseIt; // 0x1AC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_planarReflectionLodSteps; // 0x1B0
		::System::Boolean ESPP_planarReflectionLodSteps_EnableFade; // 0x1B8
		::System::Boolean ESPP_planarReflectionLodSteps_EnableOverrideDefaultValue; // 0x1B9
		::System::Single ESPP_planarReflectionLodSteps_OverrideDefaultValue; // 0x1BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_planarReflectionMinSmoothness_FieldHandleType; // 0x1C0
		::System::Boolean ESPP_planarReflectionMinSmoothness_UseIt; // 0x1C4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_planarReflectionMinSmoothness; // 0x1C8
		::System::Boolean ESPP_planarReflectionMinSmoothness_EnableFade; // 0x1D0
		::System::Boolean ESPP_planarReflectionMinSmoothness_EnableOverrideDefaultValue; // 0x1D1
		::System::Single ESPP_planarReflectionMinSmoothness_OverrideDefaultValue; // 0x1D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_planarReflectionSmoothnessFadeStart_FieldHandleType; // 0x1D8
		::System::Boolean ESPP_planarReflectionSmoothnessFadeStart_UseIt; // 0x1DC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_planarReflectionSmoothnessFadeStart; // 0x1E0
		::System::Boolean ESPP_planarReflectionSmoothnessFadeStart_EnableFade; // 0x1E8
		::System::Boolean ESPP_planarReflectionSmoothnessFadeStart_EnableOverrideDefaultValue; // 0x1E9
		::System::Single ESPP_planarReflectionSmoothnessFadeStart_OverrideDefaultValue; // 0x1EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_planarReflectionCameraDisabledLayerMask_FieldHandleType; // 0x1F0
		::UnityEngine::LayerMask ESPP_planarReflectionCameraDisabledLayerMask; // 0x1F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice_FieldHandleType; // 0x1F8
		::UnityEngine::LayerMask ESPP_planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice; // 0x1FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_planarReflectionCameraDisabledRenderLayerMask_FieldHandleType; // 0x200
		::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask ESPP_planarReflectionCameraDisabledRenderLayerMask; // 0x204
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_Enabled_FieldHandleType; // 0x208
		::System::Boolean ESPP_Enabled_UseIt; // 0x20C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_Enabled; // 0x210
		::System::Boolean ESPP_Enabled_EnableFade; // 0x218
		::System::Boolean ESPP_Enabled_EnableOverrideDefaultValue; // 0x219
		::System::Boolean ESPP_Enabled_OverrideDefaultValue; // 0x21A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_FadeDistance_FieldHandleType; // 0x21C
		::System::Boolean ESPP_FadeDistance_UseIt; // 0x220
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_FadeDistance; // 0x228
		::System::Boolean ESPP_FadeDistance_EnableFade; // 0x230
		::System::Boolean ESPP_FadeDistance_EnableOverrideDefaultValue; // 0x231
		::System::Single ESPP_FadeDistance_OverrideDefaultValue; // 0x234
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_StretchScale_FieldHandleType; // 0x238
		::System::Boolean ESPP_StretchScale_UseIt; // 0x23C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_StretchScale; // 0x240
		::System::Boolean ESPP_StretchScale_EnableFade; // 0x248
		::System::Boolean ESPP_StretchScale_EnableOverrideDefaultValue; // 0x249
		::System::Single ESPP_StretchScale_OverrideDefaultValue; // 0x24C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ScreenStretchThreshold_FieldHandleType; // 0x250
		::System::Boolean ESPP_ScreenStretchThreshold_UseIt; // 0x254
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_ScreenStretchThreshold; // 0x258
		::System::Boolean ESPP_ScreenStretchThreshold_EnableFade; // 0x260
		::System::Boolean ESPP_ScreenStretchThreshold_EnableOverrideDefaultValue; // 0x261
		::System::Single ESPP_ScreenStretchThreshold_OverrideDefaultValue; // 0x264

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_A99450342763EB98()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_A99450342763EB98_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_2A99139D13C42A50_OFFSET))(this, a1);
		}

		::System::Void Method_5_594D45A47A873869(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_594D45A47A873869_OFFSET))(this, a1);
		}

		::System::Void Method_5_2561DC986DD32699(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_2561DC986DD32699_OFFSET))(this, a1);
		}

		::System::Void Method_5_2561DC986DD32699_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_2561DC986DD32699_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_092CD57850778EFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_092CD57850778EFC_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_83DA8FE11BEA9751(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_83DA8FE11BEA9751_OFFSET))(this, a1);
		}

		::System::Void Method_5_497833CF065C1894_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_497833CF065C1894_1_OFFSET))(this);
		}

		::System::Void Method_5_EE2957687AFE92A5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_EE2957687AFE92A5_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}
	};
}
