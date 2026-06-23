#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityFilter.h"
#include "unitysdk/MoleMole/Config/ConfigEntitySummonTagFilter___c__DisplayClass4_0.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER_MATCHSUMMONTAG_OFFSET UNITYSDK_OFFSET(0x17047AA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER_VALUEPASS_OFFSET UNITYSDK_OFFSET(0x170479F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17047F50)
#define MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER__MATCHSUMMONTAG_G__CHECKISSAMESUMMONER_4_1_OFFSET UNITYSDK_OFFSET(0x17047F90)
#define MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER__MATCHSUMMONTAG_G__CHECKISSELFSUMMONER_4_2_OFFSET UNITYSDK_OFFSET(0x17047F60)
#define MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER__MATCHSUMMONTAG_G__CHECKSUMMONER_4_0_OFFSET UNITYSDK_OFFSET(0x17047ED0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntitySummonTagFilter_TypeDefinitionIndex = 79104;

	class ConfigEntitySummonTagFilter : public ::MoleMole::Config::ConfigEntityFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* SummonTag; // 0x18
		::System::Boolean IsSelfSummoner; // 0x20
		::System::Boolean IsSameSummoner; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean ValuePass(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* target, ::MoleMole::Battle::Entity* abilityTargettingSelf, ::MoleMole::Battle::Entity* abilityTargettingTarget, ::MoleMole::Battle::Entity* abilityTargettingCaster, ::MoleMole::Battle::Entity* abilityTargettingOther)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER_VALUEPASS_OFFSET))(this, owner, target, abilityTargettingSelf, abilityTargettingTarget, abilityTargettingCaster, abilityTargettingOther);
		}

		::System::Boolean MatchSummonTag(::MoleMole::Battle::Entity* entity, ::MoleMole::Battle::Entity* owner)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER_MATCHSUMMONTAG_OFFSET))(this, entity, owner);
		}

		::System::Boolean _MatchSummonTag_g__CheckSummoner_4_0(::MoleMole::Config::ConfigEntitySummonTagFilter___c__DisplayClass4_0& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntitySummonTagFilter___c__DisplayClass4_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER__MATCHSUMMONTAG_G__CHECKSUMMONER_4_0_OFFSET))(this, a1);
		}

		::System::Boolean _MatchSummonTag_g__CheckIsSameSummoner_4_1(::MoleMole::Config::ConfigEntitySummonTagFilter___c__DisplayClass4_0& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntitySummonTagFilter___c__DisplayClass4_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER__MATCHSUMMONTAG_G__CHECKISSAMESUMMONER_4_1_OFFSET))(this, a1);
		}

		::System::Boolean _MatchSummonTag_g__CheckIsSelfSummoner_4_2(::MoleMole::Config::ConfigEntitySummonTagFilter___c__DisplayClass4_0& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntitySummonTagFilter___c__DisplayClass4_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER__MATCHSUMMONTAG_G__CHECKISSELFSUMMONER_4_2_OFFSET))(this, a1);
		}
	};
}
