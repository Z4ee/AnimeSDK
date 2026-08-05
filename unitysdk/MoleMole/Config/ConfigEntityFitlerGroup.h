#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityFilter; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGENTITYFITLERGROUP_PASS_OFFSET UNITYSDK_OFFSET(0x16C3EBA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFITLERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x16C3ED00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityFitlerGroup_TypeDefinitionIndex = 67227;

	class ConfigEntityFitlerGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityFilter*>* filterList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFITLERGROUP__CTOR_OFFSET))(this);
		}

		::System::Boolean Pass(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* candicate, ::MoleMole::Battle::Entity* abilityTargettingSelf, ::MoleMole::Battle::Entity* abilityTargettingTarget, ::MoleMole::Battle::Entity* abilityTargettingCaster, ::MoleMole::Battle::Entity* abilityTargettingOther)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFITLERGROUP_PASS_OFFSET))(this, owner, candicate, abilityTargettingSelf, abilityTargettingTarget, abilityTargettingCaster, abilityTargettingOther);
		}
	};
}
