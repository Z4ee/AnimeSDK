#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"

namespace MoleMole::Config { class ConfigEntityPaniniProjectionEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine::Rendering::Universal { class PaniniProjection; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x182A8420)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_METHOD_5_1C409C2CC83887DC_1_OFFSET UNITYSDK_OFFSET(0x182A9D70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_METHOD_5_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0x182A98F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_METHOD_5_46737F85CDB5E497_OFFSET UNITYSDK_OFFSET(0x182A8C10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_METHOD_5_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0x182A8A90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_METHOD_5_71170E420FCC0F61_OFFSET UNITYSDK_OFFSET(0x182A9410)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x182A85E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_METHOD_5_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x182A8770)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_METHOD_5_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x182A85F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x182AA1F0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessPaniniProjection_TypeDefinitionIndex = 41593;

	class ESPostProcessPaniniProjection : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::PaniniProjection*>
	{
	public:
		::MoleMole::Config::ConfigEntityPaniniProjectionEffects* m_stAsset; // 0xB0
		::System::Single _VolDefault_distance; // 0xB8
		::System::Single _VolDefault_cropToFit; // 0xBC
		::System::Boolean _VolPreVal_distance_overrideState; // 0xC0
		::System::Single _VolPreVal_distance; // 0xC4
		::System::Boolean _VolPreVal_cropToFit_overrideState; // 0xC8
		::System::Single _VolPreVal_cropToFit; // 0xCC
		::System::Single _TimelineCurveFirstVal_distance; // 0xD0
		::System::Single _TimelineCurveLastVal_distance; // 0xD4
		::System::Single _TimelineCurveFirstVal_cropToFit; // 0xD8
		::System::Single _TimelineCurveLastVal_cropToFit; // 0xDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distance_FieldHandleType; // 0xE0
		::System::Boolean ESPP_distance_UseIt; // 0xE4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distance; // 0xE8
		::System::Boolean ESPP_distance_EnableFade; // 0xF0
		::System::Boolean ESPP_distance_EnableOverrideDefaultValue; // 0xF1
		::System::Single ESPP_distance_OverrideDefaultValue; // 0xF4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cropToFit_FieldHandleType; // 0xF8
		::System::Boolean ESPP_cropToFit_UseIt; // 0xFC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cropToFit; // 0x100
		::System::Boolean ESPP_cropToFit_EnableFade; // 0x108
		::System::Boolean ESPP_cropToFit_EnableOverrideDefaultValue; // 0x109
		::System::Single ESPP_cropToFit_OverrideDefaultValue; // 0x10C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_METHOD_5_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_5_8DF47EF45ABD2A6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_METHOD_5_8DF47EF45ABD2A6C_OFFSET))(this);
		}

		::System::Void Method_5_46DF29ACE60986D7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_METHOD_5_46DF29ACE60986D7_OFFSET))(this, a1);
		}

		::System::Void Method_5_46737F85CDB5E497(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_METHOD_5_46737F85CDB5E497_OFFSET))(this, a1);
		}

		::System::Void Method_5_71170E420FCC0F61(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_METHOD_5_71170E420FCC0F61_OFFSET))(this, a1);
		}

		::System::Void Method_5_1C409C2CC83887DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_METHOD_5_1C409C2CC83887DC_OFFSET))(this, a1);
		}

		::System::Void Method_5_1C409C2CC83887DC_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_METHOD_5_1C409C2CC83887DC_1_OFFSET))(this, a1);
		}
	};
}
