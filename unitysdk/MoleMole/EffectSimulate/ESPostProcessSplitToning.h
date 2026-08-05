#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigEntitySplitToningEffects; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class SplitToning; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1B1885A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_METHOD_5_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0x1B188D70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_METHOD_5_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0x1B189D50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_METHOD_5_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0x1B188940)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1B188790)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_METHOD_5_EC86032BD7B258D7_OFFSET UNITYSDK_OFFSET(0x1B189040)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1B1887A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_METHOD_5_EE2957687AFE92A5_1_OFFSET UNITYSDK_OFFSET(0x1B18A9B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_METHOD_5_EE2957687AFE92A5_OFFSET UNITYSDK_OFFSET(0x1B18A3E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B18AF80)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessSplitToning_TypeDefinitionIndex = 83937;

	class ESPostProcessSplitToning : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::SplitToning*>
	{
	public:
		::MoleMole::Config::ConfigEntitySplitToningEffects* m_stAsset; // 0xB0
		::UnityEngine::Color _VolDefault_shadows; // 0xB8
		::UnityEngine::Color _VolDefault_highlights; // 0xC8
		::System::Single _VolDefault_balance; // 0xD8
		::System::Boolean _VolPreVal_shadows_overrideState; // 0xDC
		::UnityEngine::Color _VolPreVal_shadows; // 0xE0
		::System::Boolean _VolPreVal_highlights_overrideState; // 0xF0
		::UnityEngine::Color _VolPreVal_highlights; // 0xF4
		::System::Boolean _VolPreVal_balance_overrideState; // 0x104
		::System::Single _VolPreVal_balance; // 0x108
		::UnityEngine::Color _TimelineCurveFirstVal_shadows; // 0x10C
		::UnityEngine::Color _TimelineCurveLastVal_shadows; // 0x11C
		::UnityEngine::Color _TimelineCurveFirstVal_highlights; // 0x12C
		::UnityEngine::Color _TimelineCurveLastVal_highlights; // 0x13C
		::System::Single _TimelineCurveFirstVal_balance; // 0x14C
		::System::Single _TimelineCurveLastVal_balance; // 0x150
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shadows_FieldHandleType; // 0x154
		::System::Boolean ESPP_shadows_UseIt; // 0x158
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_shadows; // 0x160
		::System::Boolean ESPP_shadows_EnableFade; // 0x168
		::System::Boolean ESPP_shadows_EnableOverrideDefaultValue; // 0x169
		::UnityEngine::Color ESPP_shadows_OverrideDefaultValue; // 0x16C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_highlights_FieldHandleType; // 0x17C
		::System::Boolean ESPP_highlights_UseIt; // 0x180
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_highlights; // 0x188
		::System::Boolean ESPP_highlights_EnableFade; // 0x190
		::System::Boolean ESPP_highlights_EnableOverrideDefaultValue; // 0x191
		::UnityEngine::Color ESPP_highlights_OverrideDefaultValue; // 0x194
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_balance_FieldHandleType; // 0x1A4
		::System::Boolean ESPP_balance_UseIt; // 0x1A8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_balance; // 0x1B0
		::System::Boolean ESPP_balance_EnableFade; // 0x1B8
		::System::Boolean ESPP_balance_EnableOverrideDefaultValue; // 0x1B9
		::System::Single ESPP_balance_OverrideDefaultValue; // 0x1BC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_METHOD_5_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_5_57F015DFC718ABA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_METHOD_5_57F015DFC718ABA3_OFFSET))(this);
		}

		::System::Void Method_5_46DF29ACE60986D7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_METHOD_5_46DF29ACE60986D7_OFFSET))(this, a1);
		}

		::System::Void Method_5_EC86032BD7B258D7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_METHOD_5_EC86032BD7B258D7_OFFSET))(this, a1);
		}

		::System::Void Method_5_4E608ED8CF3CBCB8(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_METHOD_5_4E608ED8CF3CBCB8_OFFSET))(this, a1);
		}

		::System::Void Method_5_EE2957687AFE92A5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_METHOD_5_EE2957687AFE92A5_OFFSET))(this, a1);
		}

		::System::Void Method_5_EE2957687AFE92A5_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_METHOD_5_EE2957687AFE92A5_1_OFFSET))(this, a1);
		}
	};
}
