#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"

namespace MoleMole::Config { class ConfigEntityPartialBlurEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class PartialBlur; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1B14B270)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_METHOD_5_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1B14B4C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x1B14BEF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_METHOD_5_63E3E26A3D57F57D_1_OFFSET UNITYSDK_OFFSET(0x1B14E600)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_METHOD_5_63E3E26A3D57F57D_2_OFFSET UNITYSDK_OFFSET(0x1B14F000)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_METHOD_5_63E3E26A3D57F57D_OFFSET UNITYSDK_OFFSET(0x1B14DB30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_METHOD_5_7A5EE891DA69F667_OFFSET UNITYSDK_OFFSET(0x1B14C290)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1B14B4B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_METHOD_5_D68547FF19A170E2_OFFSET UNITYSDK_OFFSET(0x1B14B6B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B14FA00)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessPartialBlur_TypeDefinitionIndex = 62989;

	class ESPostProcessPartialBlur : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::PartialBlur*>
	{
	public:
		::MoleMole::Config::ConfigEntityPartialBlurEffects* m_stAsset; // 0xB0
		::System::Int32 _VolDefault_downScaleFactor; // 0xB8
		::System::Single _VolDefault_radius; // 0xBC
		::System::Int32 _VolDefault_sampleCountMain; // 0xC0
		::System::Single _VolDefault_standardDeviation; // 0xC4
		::System::Boolean _VolDefault_canBeDisabledByGlobalConfig; // 0xC8
		::System::Boolean _VolPreVal_downScaleFactor_overrideState; // 0xC9
		::System::Int32 _VolPreVal_downScaleFactor; // 0xCC
		::System::Boolean _VolPreVal_radius_overrideState; // 0xD0
		::System::Single _VolPreVal_radius; // 0xD4
		::System::Boolean _VolPreVal_sampleCountMain_overrideState; // 0xD8
		::System::Int32 _VolPreVal_sampleCountMain; // 0xDC
		::System::Boolean _VolPreVal_standardDeviation_overrideState; // 0xE0
		::System::Single _VolPreVal_standardDeviation; // 0xE4
		::System::Boolean _VolPreVal_canBeDisabledByGlobalConfig_overrideState; // 0xE8
		::System::Boolean _VolPreVal_canBeDisabledByGlobalConfig; // 0xE9
		::System::Int32 _TimelineCurveFirstVal_downScaleFactor; // 0xEC
		::System::Int32 _TimelineCurveLastVal_downScaleFactor; // 0xF0
		::System::Single _TimelineCurveFirstVal_radius; // 0xF4
		::System::Single _TimelineCurveLastVal_radius; // 0xF8
		::System::Int32 _TimelineCurveFirstVal_sampleCountMain; // 0xFC
		::System::Int32 _TimelineCurveLastVal_sampleCountMain; // 0x100
		::System::Single _TimelineCurveFirstVal_standardDeviation; // 0x104
		::System::Single _TimelineCurveLastVal_standardDeviation; // 0x108
		::System::Boolean _TimelineCurveFirstVal_canBeDisabledByGlobalConfig; // 0x10C
		::System::Boolean _TimelineCurveLastVal_canBeDisabledByGlobalConfig; // 0x10D
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_downScaleFactor_FieldHandleType; // 0x110
		::System::Boolean ESPP_downScaleFactor_UseIt; // 0x114
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_downScaleFactor; // 0x118
		::System::Boolean ESPP_downScaleFactor_EnableFade; // 0x120
		::System::Boolean ESPP_downScaleFactor_EnableOverrideDefaultValue; // 0x121
		::System::Int32 ESPP_downScaleFactor_OverrideDefaultValue; // 0x124
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_radius_FieldHandleType; // 0x128
		::System::Boolean ESPP_radius_UseIt; // 0x12C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_radius; // 0x130
		::System::Boolean ESPP_radius_EnableFade; // 0x138
		::System::Boolean ESPP_radius_EnableOverrideDefaultValue; // 0x139
		::System::Single ESPP_radius_OverrideDefaultValue; // 0x13C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sampleCountMain_FieldHandleType; // 0x140
		::System::Boolean ESPP_sampleCountMain_UseIt; // 0x144
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sampleCountMain; // 0x148
		::System::Boolean ESPP_sampleCountMain_EnableFade; // 0x150
		::System::Boolean ESPP_sampleCountMain_EnableOverrideDefaultValue; // 0x151
		::System::Int32 ESPP_sampleCountMain_OverrideDefaultValue; // 0x154
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_standardDeviation_FieldHandleType; // 0x158
		::System::Boolean ESPP_standardDeviation_UseIt; // 0x15C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_standardDeviation; // 0x160
		::System::Boolean ESPP_standardDeviation_EnableFade; // 0x168
		::System::Boolean ESPP_standardDeviation_EnableOverrideDefaultValue; // 0x169
		::System::Single ESPP_standardDeviation_OverrideDefaultValue; // 0x16C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_canBeDisabledByGlobalConfig_FieldHandleType; // 0x170
		::System::Boolean ESPP_canBeDisabledByGlobalConfig_UseIt; // 0x174
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_canBeDisabledByGlobalConfig; // 0x178
		::System::Boolean ESPP_canBeDisabledByGlobalConfig_EnableFade; // 0x180
		::System::Boolean ESPP_canBeDisabledByGlobalConfig_EnableOverrideDefaultValue; // 0x181
		::System::Boolean ESPP_canBeDisabledByGlobalConfig_OverrideDefaultValue; // 0x182

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_METHOD_5_0FD0EC313FAAB75A_OFFSET))(this);
		}

		::System::Void Method_5_D68547FF19A170E2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_METHOD_5_D68547FF19A170E2_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_7A5EE891DA69F667(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_METHOD_5_7A5EE891DA69F667_OFFSET))(this, a1);
		}

		::System::Void Method_5_63E3E26A3D57F57D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_METHOD_5_63E3E26A3D57F57D_OFFSET))(this, a1);
		}

		::System::Void Method_5_63E3E26A3D57F57D_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_METHOD_5_63E3E26A3D57F57D_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_63E3E26A3D57F57D_2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_METHOD_5_63E3E26A3D57F57D_2_OFFSET))(this, a1);
		}
	};
}
