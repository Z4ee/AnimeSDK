#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SsrQuality.h"

namespace MoleMole::Config { class ConfigEntityScreenSpaceReflectionEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class ScreenSpaceReflection; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1B516E60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_2561DC986DD32699_OFFSET UNITYSDK_OFFSET(0x1B518100)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x1B517CB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_2A99139D13C42A50_1_OFFSET UNITYSDK_OFFSET(0x1B51B610)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_2A99139D13C42A50_OFFSET UNITYSDK_OFFSET(0x1B51ABF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1B5170D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x1B5170E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_9D8EF9AD3B13BD0E_OFFSET UNITYSDK_OFFSET(0x1B519F90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x1B517330)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B51C030)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessScreenSpaceReflection_TypeDefinitionIndex = 57082;

	class ESPostProcessScreenSpaceReflection : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::ScreenSpaceReflection*>
	{
	public:
		::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_enabled; // 0xB8
		::System::Single _VolDefault_intensity; // 0xBC
		::System::Single _VolDefault_depthBufferThickness; // 0xC0
		::System::Single _VolDefault_screenFadeDistance; // 0xC4
		::UnityEngine::NAPRenderPipeline0::SsrQuality _VolDefault_quality; // 0xC8
		::System::Boolean _VolDefault_overrideGlobalPlanarReflectionConfig; // 0xCC
		::System::Single _VolDefault_planarReflectionBlurAmount; // 0xD0
		::System::Boolean _VolPreVal_enabled_overrideState; // 0xD4
		::System::Boolean _VolPreVal_enabled; // 0xD5
		::System::Boolean _VolPreVal_intensity_overrideState; // 0xD6
		::System::Single _VolPreVal_intensity; // 0xD8
		::System::Boolean _VolPreVal_depthBufferThickness_overrideState; // 0xDC
		::System::Single _VolPreVal_depthBufferThickness; // 0xE0
		::System::Boolean _VolPreVal_screenFadeDistance_overrideState; // 0xE4
		::System::Single _VolPreVal_screenFadeDistance; // 0xE8
		::System::Boolean _VolPreVal_quality_overrideState; // 0xEC
		::UnityEngine::NAPRenderPipeline0::SsrQuality _VolPreVal_quality; // 0xF0
		::System::Boolean _VolPreVal_overrideGlobalPlanarReflectionConfig_overrideState; // 0xF4
		::System::Boolean _VolPreVal_overrideGlobalPlanarReflectionConfig; // 0xF5
		::System::Boolean _VolPreVal_planarReflectionBlurAmount_overrideState; // 0xF6
		::System::Single _VolPreVal_planarReflectionBlurAmount; // 0xF8
		::System::Boolean _TimelineCurveFirstVal_enabled; // 0xFC
		::System::Boolean _TimelineCurveLastVal_enabled; // 0xFD
		::System::Single _TimelineCurveFirstVal_intensity; // 0x100
		::System::Single _TimelineCurveLastVal_intensity; // 0x104
		::System::Single _TimelineCurveFirstVal_depthBufferThickness; // 0x108
		::System::Single _TimelineCurveLastVal_depthBufferThickness; // 0x10C
		::System::Single _TimelineCurveFirstVal_screenFadeDistance; // 0x110
		::System::Single _TimelineCurveLastVal_screenFadeDistance; // 0x114
		::System::Boolean _TimelineCurveFirstVal_overrideGlobalPlanarReflectionConfig; // 0x118
		::System::Boolean _TimelineCurveLastVal_overrideGlobalPlanarReflectionConfig; // 0x119
		::System::Single _TimelineCurveFirstVal_planarReflectionBlurAmount; // 0x11C
		::System::Single _TimelineCurveLastVal_planarReflectionBlurAmount; // 0x120
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enabled_FieldHandleType; // 0x124
		::System::Boolean ESPP_enabled_UseIt; // 0x128
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enabled; // 0x130
		::System::Boolean ESPP_enabled_EnableFade; // 0x138
		::System::Boolean ESPP_enabled_EnableOverrideDefaultValue; // 0x139
		::System::Boolean ESPP_enabled_OverrideDefaultValue; // 0x13A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x13C
		::System::Boolean ESPP_intensity_UseIt; // 0x140
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x148
		::System::Boolean ESPP_intensity_EnableFade; // 0x150
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x151
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x154
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_depthBufferThickness_FieldHandleType; // 0x158
		::System::Boolean ESPP_depthBufferThickness_UseIt; // 0x15C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_depthBufferThickness; // 0x160
		::System::Boolean ESPP_depthBufferThickness_EnableFade; // 0x168
		::System::Boolean ESPP_depthBufferThickness_EnableOverrideDefaultValue; // 0x169
		::System::Single ESPP_depthBufferThickness_OverrideDefaultValue; // 0x16C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_screenFadeDistance_FieldHandleType; // 0x170
		::System::Boolean ESPP_screenFadeDistance_UseIt; // 0x174
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_screenFadeDistance; // 0x178
		::System::Boolean ESPP_screenFadeDistance_EnableFade; // 0x180
		::System::Boolean ESPP_screenFadeDistance_EnableOverrideDefaultValue; // 0x181
		::System::Single ESPP_screenFadeDistance_OverrideDefaultValue; // 0x184
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_quality_FieldHandleType; // 0x188
		::UnityEngine::NAPRenderPipeline0::SsrQuality ESPP_quality; // 0x18C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_overrideGlobalPlanarReflectionConfig_FieldHandleType; // 0x190
		::System::Boolean ESPP_overrideGlobalPlanarReflectionConfig_UseIt; // 0x194
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_overrideGlobalPlanarReflectionConfig; // 0x198
		::System::Boolean ESPP_overrideGlobalPlanarReflectionConfig_EnableFade; // 0x1A0
		::System::Boolean ESPP_overrideGlobalPlanarReflectionConfig_EnableOverrideDefaultValue; // 0x1A1
		::System::Boolean ESPP_overrideGlobalPlanarReflectionConfig_OverrideDefaultValue; // 0x1A2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_planarReflectionBlurAmount_FieldHandleType; // 0x1A4
		::System::Boolean ESPP_planarReflectionBlurAmount_UseIt; // 0x1A8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_planarReflectionBlurAmount; // 0x1B0
		::System::Boolean ESPP_planarReflectionBlurAmount_EnableFade; // 0x1B8
		::System::Boolean ESPP_planarReflectionBlurAmount_EnableOverrideDefaultValue; // 0x1B9
		::System::Single ESPP_planarReflectionBlurAmount_OverrideDefaultValue; // 0x1BC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_84B92802FDAFF6C8_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_2561DC986DD32699(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_2561DC986DD32699_OFFSET))(this, a1);
		}

		::System::Void Method_5_9D8EF9AD3B13BD0E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_9D8EF9AD3B13BD0E_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_2A99139D13C42A50_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_METHOD_5_2A99139D13C42A50_1_OFFSET))(this, a1);
		}
	};
}
