#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemPredicate.h"

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYNOT_PREDICATE_OFFSET UNITYSDK_OFFSET(0xE97A050)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYNOT__CTOR_OFFSET UNITYSDK_OFFSET(0xE97A0B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemPredicateByNot_TypeDefinitionIndex = 56437;

	class ConfigSurfGameItemPredicateByNot : public ::MoleMole::Config::ConfigSurfGameItemPredicate
	{
	public:
		::MoleMole::Config::ConfigSurfGameItemPredicate* Predicates; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYNOT__CTOR_OFFSET))(this);
		}

		::System::Boolean Predicate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYNOT_PREDICATE_OFFSET))(this);
		}
	};
}
