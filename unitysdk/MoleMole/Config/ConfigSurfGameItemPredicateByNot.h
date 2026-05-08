#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemPredicate.h"

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYNOT_PREDICATE_OFFSET UNITYSDK_OFFSET(0xFB0BD50)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYNOT__CTOR_OFFSET UNITYSDK_OFFSET(0xFB0BDB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemPredicateByNot_TypeDefinitionIndex = 59288;

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
