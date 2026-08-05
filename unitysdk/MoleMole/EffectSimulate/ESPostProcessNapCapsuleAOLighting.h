#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"

namespace MoleMole::Config { class ConfigEntityNapCapsuleAOLightingEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class NapCapsuleAOLighting; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1B5064F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1B506740)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_2561DC986DD32699_OFFSET UNITYSDK_OFFSET(0x1B5073A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x1B507010)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_2A99139D13C42A50_1_OFFSET UNITYSDK_OFFSET(0x1B509B00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_2A99139D13C42A50_OFFSET UNITYSDK_OFFSET(0x1B509290)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1B506730)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_9D8EF9AD3B13BD0E_OFFSET UNITYSDK_OFFSET(0x1B508920)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x1B506940)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B50A370)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessNapCapsuleAOLighting_TypeDefinitionIndex = 82121;

	class ESPostProcessNapCapsuleAOLighting : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::NapCapsuleAOLighting*>
	{
	public:
		::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_enableCapsuleAO; // 0xB8
		::System::Single _VolDefault_ambientIntensity; // 0xBC
		::System::Single _VolDefault_shadowIntensity; // 0xC0
		::System::Single _VolDefault_shadowSharpness; // 0xC4
		::System::Single _VolDefault_luminanceBlend; // 0xC8
		::System::Boolean _VolPreVal_enableCapsuleAO_overrideState; // 0xCC
		::System::Boolean _VolPreVal_enableCapsuleAO; // 0xCD
		::System::Boolean _VolPreVal_ambientIntensity_overrideState; // 0xCE
		::System::Single _VolPreVal_ambientIntensity; // 0xD0
		::System::Boolean _VolPreVal_shadowIntensity_overrideState; // 0xD4
		::System::Single _VolPreVal_shadowIntensity; // 0xD8
		::System::Boolean _VolPreVal_shadowSharpness_overrideState; // 0xDC
		::System::Single _VolPreVal_shadowSharpness; // 0xE0
		::System::Boolean _VolPreVal_luminanceBlend_overrideState; // 0xE4
		::System::Single _VolPreVal_luminanceBlend; // 0xE8
		::System::Boolean _TimelineCurveFirstVal_enableCapsuleAO; // 0xEC
		::System::Boolean _TimelineCurveLastVal_enableCapsuleAO; // 0xED
		::System::Single _TimelineCurveFirstVal_ambientIntensity; // 0xF0
		::System::Single _TimelineCurveLastVal_ambientIntensity; // 0xF4
		::System::Single _TimelineCurveFirstVal_shadowIntensity; // 0xF8
		::System::Single _TimelineCurveLastVal_shadowIntensity; // 0xFC
		::System::Single _TimelineCurveFirstVal_shadowSharpness; // 0x100
		::System::Single _TimelineCurveLastVal_shadowSharpness; // 0x104
		::System::Single _TimelineCurveFirstVal_luminanceBlend; // 0x108
		::System::Single _TimelineCurveLastVal_luminanceBlend; // 0x10C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableCapsuleAO_FieldHandleType; // 0x110
		::System::Boolean ESPP_enableCapsuleAO_UseIt; // 0x114
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enableCapsuleAO; // 0x118
		::System::Boolean ESPP_enableCapsuleAO_EnableFade; // 0x120
		::System::Boolean ESPP_enableCapsuleAO_EnableOverrideDefaultValue; // 0x121
		::System::Boolean ESPP_enableCapsuleAO_OverrideDefaultValue; // 0x122
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ambientIntensity_FieldHandleType; // 0x124
		::System::Boolean ESPP_ambientIntensity_UseIt; // 0x128
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_ambientIntensity; // 0x130
		::System::Boolean ESPP_ambientIntensity_EnableFade; // 0x138
		::System::Boolean ESPP_ambientIntensity_EnableOverrideDefaultValue; // 0x139
		::System::Single ESPP_ambientIntensity_OverrideDefaultValue; // 0x13C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shadowIntensity_FieldHandleType; // 0x140
		::System::Boolean ESPP_shadowIntensity_UseIt; // 0x144
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shadowIntensity; // 0x148
		::System::Boolean ESPP_shadowIntensity_EnableFade; // 0x150
		::System::Boolean ESPP_shadowIntensity_EnableOverrideDefaultValue; // 0x151
		::System::Single ESPP_shadowIntensity_OverrideDefaultValue; // 0x154
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shadowSharpness_FieldHandleType; // 0x158
		::System::Boolean ESPP_shadowSharpness_UseIt; // 0x15C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shadowSharpness; // 0x160
		::System::Boolean ESPP_shadowSharpness_EnableFade; // 0x168
		::System::Boolean ESPP_shadowSharpness_EnableOverrideDefaultValue; // 0x169
		::System::Single ESPP_shadowSharpness_OverrideDefaultValue; // 0x16C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_luminanceBlend_FieldHandleType; // 0x170
		::System::Boolean ESPP_luminanceBlend_UseIt; // 0x174
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_luminanceBlend; // 0x178
		::System::Boolean ESPP_luminanceBlend_EnableFade; // 0x180
		::System::Boolean ESPP_luminanceBlend_EnableOverrideDefaultValue; // 0x181
		::System::Single ESPP_luminanceBlend_OverrideDefaultValue; // 0x184

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_0FD0EC313FAAB75A_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_2561DC986DD32699(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_2561DC986DD32699_OFFSET))(this, a1);
		}

		::System::Void Method_5_9D8EF9AD3B13BD0E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_9D8EF9AD3B13BD0E_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_2A99139D13C42A50_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_METHOD_5_2A99139D13C42A50_1_OFFSET))(this, a1);
		}
	};
}
