#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemPredicate.h"

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYSUPERSTAR_PREDICATE_OFFSET UNITYSDK_OFFSET(0x158B7190)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYSUPERSTAR__CTOR_OFFSET UNITYSDK_OFFSET(0x158B7260)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemPredicateBySuperStar_TypeDefinitionIndex = 55869;

	class ConfigSurfGameItemPredicateBySuperStar : public ::MoleMole::Config::ConfigSurfGameItemPredicate
	{
	public:
		::System::Boolean IsActive; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYSUPERSTAR__CTOR_OFFSET))(this);
		}

		::System::Boolean Predicate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYSUPERSTAR_PREDICATE_OFFSET))(this);
		}
	};
}
