#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"

namespace MoleMole::Config { class ConfigEntityWhiteBalanceEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class WhiteBalance; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x19AE1880)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_METHOD_5_1C409C2CC83887DC_1_OFFSET UNITYSDK_OFFSET(0x19AE31D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_METHOD_5_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0x19AE2D50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_METHOD_5_46737F85CDB5E497_OFFSET UNITYSDK_OFFSET(0x19AE2070)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_METHOD_5_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0x19AE1EF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_METHOD_5_71170E420FCC0F61_OFFSET UNITYSDK_OFFSET(0x19AE2870)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19AE1A40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_METHOD_5_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x19AE1BD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_METHOD_5_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x19AE1A50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE3650)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessWhiteBalance_TypeDefinitionIndex = 66299;

	class ESPostProcessWhiteBalance : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::WhiteBalance*>
	{
	public:
		::MoleMole::Config::ConfigEntityWhiteBalanceEffects* m_stAsset; // 0xB0
		::System::Single _VolDefault_temperature; // 0xB8
		::System::Single _VolDefault_tint; // 0xBC
		::System::Boolean _VolPreVal_temperature_overrideState; // 0xC0
		::System::Single _VolPreVal_temperature; // 0xC4
		::System::Boolean _VolPreVal_tint_overrideState; // 0xC8
		::System::Single _VolPreVal_tint; // 0xCC
		::System::Single _TimelineCurveFirstVal_temperature; // 0xD0
		::System::Single _TimelineCurveLastVal_temperature; // 0xD4
		::System::Single _TimelineCurveFirstVal_tint; // 0xD8
		::System::Single _TimelineCurveLastVal_tint; // 0xDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_temperature_FieldHandleType; // 0xE0
		::System::Boolean ESPP_temperature_UseIt; // 0xE4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_temperature; // 0xE8
		::System::Boolean ESPP_temperature_EnableFade; // 0xF0
		::System::Boolean ESPP_temperature_EnableOverrideDefaultValue; // 0xF1
		::System::Single ESPP_temperature_OverrideDefaultValue; // 0xF4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_tint_FieldHandleType; // 0xF8
		::System::Boolean ESPP_tint_UseIt; // 0xFC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_tint; // 0x100
		::System::Boolean ESPP_tint_EnableFade; // 0x108
		::System::Boolean ESPP_tint_EnableOverrideDefaultValue; // 0x109
		::System::Single ESPP_tint_OverrideDefaultValue; // 0x10C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_METHOD_5_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_5_8DF47EF45ABD2A6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_METHOD_5_8DF47EF45ABD2A6C_OFFSET))(this);
		}

		::System::Void Method_5_46DF29ACE60986D7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_METHOD_5_46DF29ACE60986D7_OFFSET))(this, a1);
		}

		::System::Void Method_5_46737F85CDB5E497(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_METHOD_5_46737F85CDB5E497_OFFSET))(this, a1);
		}

		::System::Void Method_5_71170E420FCC0F61(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_METHOD_5_71170E420FCC0F61_OFFSET))(this, a1);
		}

		::System::Void Method_5_1C409C2CC83887DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_METHOD_5_1C409C2CC83887DC_OFFSET))(this, a1);
		}

		::System::Void Method_5_1C409C2CC83887DC_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_METHOD_5_1C409C2CC83887DC_1_OFFSET))(this, a1);
		}
	};
}
