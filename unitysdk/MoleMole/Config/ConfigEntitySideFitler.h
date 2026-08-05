#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityFilter.h"
#include "unitysdk/MoleMole/Config/TeamRelationship.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSIDEFITLER_VALUEPASS_OFFSET UNITYSDK_OFFSET(0x11704110)
#define MOLEMOLE_CONFIG_CONFIGENTITYSIDEFITLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11704550)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntitySideFitler_TypeDefinitionIndex = 74651;

	class ConfigEntitySideFitler : public ::MoleMole::Config::ConfigEntityFilter
	{
	public:
		::MoleMole::Config::TeamRelationship sideType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSIDEFITLER__CTOR_OFFSET))(this);
		}

		::System::Boolean ValuePass(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* target, ::MoleMole::Battle::Entity* abilityTargettingSelf, ::MoleMole::Battle::Entity* abilityTargettingTarget, ::MoleMole::Battle::Entity* abilityTargettingCaster, ::MoleMole::Battle::Entity* abilityTargettingOther)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSIDEFITLER_VALUEPASS_OFFSET))(this, owner, target, abilityTargettingSelf, abilityTargettingTarget, abilityTargettingCaster, abilityTargettingOther);
		}
	};
}
