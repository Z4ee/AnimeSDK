#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemPredicate.h"
#include "unitysdk/MoleMole/Config/SurfVehicleExtraEffectFlags.h"

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYFLAGS_PREDICATE_OFFSET UNITYSDK_OFFSET(0x19FF23D0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYFLAGS__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF24B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemPredicateByFlags_TypeDefinitionIndex = 64536;

	class ConfigSurfGameItemPredicateByFlags : public ::MoleMole::Config::ConfigSurfGameItemPredicate
	{
	public:
		::MoleMole::Config::SurfVehicleExtraEffectFlags TargetFlags; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYFLAGS__CTOR_OFFSET))(this);
		}

		::System::Boolean Predicate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYFLAGS_PREDICATE_OFFSET))(this);
		}
	};
}
