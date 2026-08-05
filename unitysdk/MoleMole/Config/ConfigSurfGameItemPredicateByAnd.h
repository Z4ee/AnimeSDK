#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemPredicate.h"

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYAND_PREDICATE_OFFSET UNITYSDK_OFFSET(0x1B560C50)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYAND__CTOR_OFFSET UNITYSDK_OFFSET(0x1B560D00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemPredicateByAnd_TypeDefinitionIndex = 60578;

	class ConfigSurfGameItemPredicateByAnd : public ::MoleMole::Config::ConfigSurfGameItemPredicate
	{
	public:
		::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemPredicate*>* Predicates; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYAND__CTOR_OFFSET))(this);
		}

		::System::Boolean Predicate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYAND_PREDICATE_OFFSET))(this);
		}
	};
}
