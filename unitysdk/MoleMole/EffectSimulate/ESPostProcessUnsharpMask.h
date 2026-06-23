#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"

namespace MoleMole::Config { class ConfigEntityUnsharpMaskEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class UnsharpMask; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x157F81D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x157F8F70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_59791C706EFFC2BA_1_OFFSET UNITYSDK_OFFSET(0x157FC3D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_59791C706EFFC2BA_OFFSET UNITYSDK_OFFSET(0x157FBA80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_5BD973238595BF89_OFFSET UNITYSDK_OFFSET(0x157FAEA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x157F8410)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_ABD8624DE9A02803_OFFSET UNITYSDK_OFFSET(0x157F9310)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x157F8640)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x157F8420)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x157FCD20)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessUnsharpMask_TypeDefinitionIndex = 56874;

	class ESPostProcessUnsharpMask : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::UnsharpMask*>
	{
	public:
		::MoleMole::Config::ConfigEntityUnsharpMaskEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_enable; // 0xB8
		::System::Single _VolDefault_radius; // 0xBC
		::System::Single _VolDefault_amount; // 0xC0
		::System::Int32 _VolDefault_sampleCount; // 0xC4
		::System::Single _VolDefault_threshold; // 0xC8
		::System::Boolean _VolDefault_debugMode; // 0xCC
		::System::Boolean _VolPreVal_enable_overrideState; // 0xCD
		::System::Boolean _VolPreVal_enable; // 0xCE
		::System::Boolean _VolPreVal_radius_overrideState; // 0xCF
		::System::Single _VolPreVal_radius; // 0xD0
		::System::Boolean _VolPreVal_amount_overrideState; // 0xD4
		::System::Single _VolPreVal_amount; // 0xD8
		::System::Boolean _VolPreVal_sampleCount_overrideState; // 0xDC
		::System::Int32 _VolPreVal_sampleCount; // 0xE0
		::System::Boolean _VolPreVal_threshold_overrideState; // 0xE4
		::System::Single _VolPreVal_threshold; // 0xE8
		::System::Boolean _VolPreVal_debugMode_overrideState; // 0xEC
		::System::Boolean _VolPreVal_debugMode; // 0xED
		::System::Single _TimelineCurveFirstVal_radius; // 0xF0
		::System::Single _TimelineCurveLastVal_radius; // 0xF4
		::System::Single _TimelineCurveFirstVal_amount; // 0xF8
		::System::Single _TimelineCurveLastVal_amount; // 0xFC
		::System::Int32 _TimelineCurveFirstVal_sampleCount; // 0x100
		::System::Int32 _TimelineCurveLastVal_sampleCount; // 0x104
		::System::Single _TimelineCurveFirstVal_threshold; // 0x108
		::System::Single _TimelineCurveLastVal_threshold; // 0x10C
		::System::Boolean _TimelineCurveFirstVal_debugMode; // 0x110
		::System::Boolean _TimelineCurveLastVal_debugMode; // 0x111
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enable_FieldHandleType; // 0x114
		::System::Boolean ESPP_enable; // 0x118
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_radius_FieldHandleType; // 0x11C
		::System::Boolean ESPP_radius_UseIt; // 0x120
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_radius; // 0x128
		::System::Boolean ESPP_radius_EnableFade; // 0x130
		::System::Boolean ESPP_radius_EnableOverrideDefaultValue; // 0x131
		::System::Single ESPP_radius_OverrideDefaultValue; // 0x134
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_amount_FieldHandleType; // 0x138
		::System::Boolean ESPP_amount_UseIt; // 0x13C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_amount; // 0x140
		::System::Boolean ESPP_amount_EnableFade; // 0x148
		::System::Boolean ESPP_amount_EnableOverrideDefaultValue; // 0x149
		::System::Single ESPP_amount_OverrideDefaultValue; // 0x14C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sampleCount_FieldHandleType; // 0x150
		::System::Boolean ESPP_sampleCount_UseIt; // 0x154
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sampleCount; // 0x158
		::System::Boolean ESPP_sampleCount_EnableFade; // 0x160
		::System::Boolean ESPP_sampleCount_EnableOverrideDefaultValue; // 0x161
		::System::Int32 ESPP_sampleCount_OverrideDefaultValue; // 0x164
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_threshold_FieldHandleType; // 0x168
		::System::Boolean ESPP_threshold_UseIt; // 0x16C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_threshold; // 0x170
		::System::Boolean ESPP_threshold_EnableFade; // 0x178
		::System::Boolean ESPP_threshold_EnableOverrideDefaultValue; // 0x179
		::System::Single ESPP_threshold_OverrideDefaultValue; // 0x17C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_debugMode_FieldHandleType; // 0x180
		::System::Boolean ESPP_debugMode_UseIt; // 0x184
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_debugMode; // 0x188
		::System::Boolean ESPP_debugMode_EnableFade; // 0x190
		::System::Boolean ESPP_debugMode_EnableOverrideDefaultValue; // 0x191
		::System::Boolean ESPP_debugMode_OverrideDefaultValue; // 0x192

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_D7852DE078ACC1F1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_D7852DE078ACC1F1_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_ABD8624DE9A02803(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_ABD8624DE9A02803_OFFSET))(this, a1);
		}

		::System::Void Method_5_5BD973238595BF89(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_5BD973238595BF89_OFFSET))(this, a1);
		}

		::System::Void Method_5_59791C706EFFC2BA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_59791C706EFFC2BA_OFFSET))(this, a1);
		}

		::System::Void Method_5_59791C706EFFC2BA_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_METHOD_5_59791C706EFFC2BA_1_OFFSET))(this, a1);
		}
	};
}
