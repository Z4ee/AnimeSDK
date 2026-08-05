#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityFilter.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGENTITYTYPEFILTER_VALUEPASS_OFFSET UNITYSDK_OFFSET(0xF13A940)
#define MOLEMOLE_CONFIG_CONFIGENTITYTYPEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xF13AAE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityTypeFilter_TypeDefinitionIndex = 54617;

	class ConfigEntityTypeFilter : public ::MoleMole::Config::ConfigEntityFilter
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::EntityType>* entityTypes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTYPEFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean ValuePass(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* target, ::MoleMole::Battle::Entity* abilityTargettingSelf, ::MoleMole::Battle::Entity* abilityTargettingTarget, ::MoleMole::Battle::Entity* abilityTargettingCaster, ::MoleMole::Battle::Entity* abilityTargettingOther)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTYPEFILTER_VALUEPASS_OFFSET))(this, owner, target, abilityTargettingSelf, abilityTargettingTarget, abilityTargettingCaster, abilityTargettingOther);
		}
	};
}
