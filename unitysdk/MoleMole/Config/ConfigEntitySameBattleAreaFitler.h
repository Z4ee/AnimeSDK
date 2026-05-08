#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityFilter.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSAMEBATTLEAREAFITLER_VALUEPASS_OFFSET UNITYSDK_OFFSET(0xF97CC70)
#define MOLEMOLE_CONFIG_CONFIGENTITYSAMEBATTLEAREAFITLER__CTOR_OFFSET UNITYSDK_OFFSET(0xF97CD60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntitySameBattleAreaFitler_TypeDefinitionIndex = 73388;

	class ConfigEntitySameBattleAreaFitler : public ::MoleMole::Config::ConfigEntityFilter
	{
	public:
		::System::String* areaTag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSAMEBATTLEAREAFITLER__CTOR_OFFSET))(this);
		}

		::System::Boolean ValuePass(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* target, ::MoleMole::Battle::Entity* abilityTargettingSelf, ::MoleMole::Battle::Entity* abilityTargettingTarget, ::MoleMole::Battle::Entity* abilityTargettingCaster, ::MoleMole::Battle::Entity* abilityTargettingOther)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSAMEBATTLEAREAFITLER_VALUEPASS_OFFSET))(this, owner, target, abilityTargettingSelf, abilityTargettingTarget, abilityTargettingCaster, abilityTargettingOther);
		}
	};
}
