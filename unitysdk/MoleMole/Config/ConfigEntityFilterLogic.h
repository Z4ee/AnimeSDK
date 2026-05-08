#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityFilter.h"
#include "unitysdk/MoleMole/Config/ConfigEntityFilterLogic_EntityFilterLogic.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGENTITYFILTERLOGIC_VALUEPASS_OFFSET UNITYSDK_OFFSET(0xF97CA70)
#define MOLEMOLE_CONFIG_CONFIGENTITYFILTERLOGIC__CTOR_OFFSET UNITYSDK_OFFSET(0xF97CC60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityFilterLogic_TypeDefinitionIndex = 41052;

	class ConfigEntityFilterLogic : public ::MoleMole::Config::ConfigEntityFilter
	{
	public:
		::MoleMole::Config::ConfigEntityFilterLogic_EntityFilterLogic logic; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityFilter*>* filterList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFILTERLOGIC__CTOR_OFFSET))(this);
		}

		::System::Boolean ValuePass(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* target, ::MoleMole::Battle::Entity* abilityTargettingSelf, ::MoleMole::Battle::Entity* abilityTargettingTarget, ::MoleMole::Battle::Entity* abilityTargettingCaster, ::MoleMole::Battle::Entity* abilityTargettingOther)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFILTERLOGIC_VALUEPASS_OFFSET))(this, owner, target, abilityTargettingSelf, abilityTargettingTarget, abilityTargettingCaster, abilityTargettingOther);
		}
	};
}
