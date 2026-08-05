#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemPredicate.h"

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYOR_PREDICATE_OFFSET UNITYSDK_OFFSET(0x13508E40)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYOR__CTOR_OFFSET UNITYSDK_OFFSET(0x13508EF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemPredicateByOr_TypeDefinitionIndex = 54607;

	class ConfigSurfGameItemPredicateByOr : public ::MoleMole::Config::ConfigSurfGameItemPredicate
	{
	public:
		::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemPredicate*>* Predicates; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYOR__CTOR_OFFSET))(this);
		}

		::System::Boolean Predicate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYOR_PREDICATE_OFFSET))(this);
		}
	};
}
