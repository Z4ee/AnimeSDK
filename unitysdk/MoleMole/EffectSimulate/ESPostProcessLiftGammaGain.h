#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigEntityLiftGammaGainEffects; }
namespace MoleMole::EffectSimulate { class Vector4KeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class LiftGammaGain; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1B5920A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_METHOD_5_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0x1B592880)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_METHOD_5_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0x1B593980)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_METHOD_5_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x1B592440)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1B592290)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_METHOD_5_EC86032BD7B258D7_OFFSET UNITYSDK_OFFSET(0x1B592BB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1B5922A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_METHOD_5_EE2957687AFE92A5_1_OFFSET UNITYSDK_OFFSET(0x1B594620)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_METHOD_5_EE2957687AFE92A5_OFFSET UNITYSDK_OFFSET(0x1B594050)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B594BF0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessLiftGammaGain_TypeDefinitionIndex = 54114;

	class ESPostProcessLiftGammaGain : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::LiftGammaGain*>
	{
	public:
		::MoleMole::Config::ConfigEntityLiftGammaGainEffects* m_stAsset; // 0xB0
		::UnityEngine::Vector4 _VolDefault_lift; // 0xB8
		::UnityEngine::Vector4 _VolDefault_gamma; // 0xC8
		::UnityEngine::Vector4 _VolDefault_gain; // 0xD8
		::System::Boolean _VolPreVal_lift_overrideState; // 0xE8
		::UnityEngine::Vector4 _VolPreVal_lift; // 0xEC
		::System::Boolean _VolPreVal_gamma_overrideState; // 0xFC
		::UnityEngine::Vector4 _VolPreVal_gamma; // 0x100
		::System::Boolean _VolPreVal_gain_overrideState; // 0x110
		::UnityEngine::Vector4 _VolPreVal_gain; // 0x114
		::UnityEngine::Vector4 _TimelineCurveFirstVal_lift; // 0x124
		::UnityEngine::Vector4 _TimelineCurveLastVal_lift; // 0x134
		::UnityEngine::Vector4 _TimelineCurveFirstVal_gamma; // 0x144
		::UnityEngine::Vector4 _TimelineCurveLastVal_gamma; // 0x154
		::UnityEngine::Vector4 _TimelineCurveFirstVal_gain; // 0x164
		::UnityEngine::Vector4 _TimelineCurveLastVal_gain; // 0x174
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lift_FieldHandleType; // 0x184
		::System::Boolean ESPP_lift_UseIt; // 0x188
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_lift; // 0x190
		::System::Boolean ESPP_lift_EnableFade; // 0x198
		::System::Boolean ESPP_lift_EnableOverrideDefaultValue; // 0x199
		::UnityEngine::Vector4 ESPP_lift_OverrideDefaultValue; // 0x19C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gamma_FieldHandleType; // 0x1AC
		::System::Boolean ESPP_gamma_UseIt; // 0x1B0
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_gamma; // 0x1B8
		::System::Boolean ESPP_gamma_EnableFade; // 0x1C0
		::System::Boolean ESPP_gamma_EnableOverrideDefaultValue; // 0x1C1
		::UnityEngine::Vector4 ESPP_gamma_OverrideDefaultValue; // 0x1C4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gain_FieldHandleType; // 0x1D4
		::System::Boolean ESPP_gain_UseIt; // 0x1D8
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_gain; // 0x1E0
		::System::Boolean ESPP_gain_EnableFade; // 0x1E8
		::System::Boolean ESPP_gain_EnableOverrideDefaultValue; // 0x1E9
		::UnityEngine::Vector4 ESPP_gain_OverrideDefaultValue; // 0x1EC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_METHOD_5_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_5_7EAA8879197594BA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_METHOD_5_7EAA8879197594BA_OFFSET))(this);
		}

		::System::Void Method_5_46DF29ACE60986D7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_METHOD_5_46DF29ACE60986D7_OFFSET))(this, a1);
		}

		::System::Void Method_5_EC86032BD7B258D7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_METHOD_5_EC86032BD7B258D7_OFFSET))(this, a1);
		}

		::System::Void Method_5_4E608ED8CF3CBCB8(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_METHOD_5_4E608ED8CF3CBCB8_OFFSET))(this, a1);
		}

		::System::Void Method_5_EE2957687AFE92A5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_METHOD_5_EE2957687AFE92A5_OFFSET))(this, a1);
		}

		::System::Void Method_5_EE2957687AFE92A5_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_METHOD_5_EE2957687AFE92A5_1_OFFSET))(this, a1);
		}
	};
}
