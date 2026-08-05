#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostLight_RenderLayerMask.h"

namespace MoleMole::Config { class ConfigEntityScreenSpacePlanarReflectionEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class ScreenSpacePlanarReflection; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1C4BF820)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x1C4C0CD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_2A99139D13C42A50_1_OFFSET UNITYSDK_OFFSET(0x1C4C5610)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_2A99139D13C42A50_2_OFFSET UNITYSDK_OFFSET(0x1C4C63C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_2A99139D13C42A50_OFFSET UNITYSDK_OFFSET(0x1C4C1330)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x1C4BFB20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1C4BFB10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_9D8EF9AD3B13BD0E_OFFSET UNITYSDK_OFFSET(0x1C4C43B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_A99450342763EB98_OFFSET UNITYSDK_OFFSET(0x1C4BFE50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x13A785A0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessScreenSpacePlanarReflection_TypeDefinitionIndex = 41498;

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

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_A99450342763EB98()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_A99450342763EB98_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_2A99139D13C42A50_OFFSET))(this, a1);
		}

		::System::Void Method_5_9D8EF9AD3B13BD0E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_9D8EF9AD3B13BD0E_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_2A99139D13C42A50_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50_2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_METHOD_5_2A99139D13C42A50_2_OFFSET))(this, a1);
		}
	};
}
