#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityFilter.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_CONFIGTARGETBUDDYTYPEFILTER_COMPAREBUDDYTYPE_OFFSET UNITYSDK_OFFSET(0x1A4B8A40)
#define MOLEMOLE_CONFIG_CONFIGTARGETBUDDYTYPEFILTER_VALUEPASS_OFFSET UNITYSDK_OFFSET(0x1A4B8930)
#define MOLEMOLE_CONFIG_CONFIGTARGETBUDDYTYPEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B8BA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTargetBuddyTypeFilter_TypeDefinitionIndex = 54140;

	class ConfigTargetBuddyTypeFilter : public ::MoleMole::Config::ConfigEntityFilter
	{
	public:
		::System::Int32 buddyType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTARGETBUDDYTYPEFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean ValuePass(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* target, ::MoleMole::Battle::Entity* abilityTargettingSelf, ::MoleMole::Battle::Entity* abilityTargettingTarget, ::MoleMole::Battle::Entity* abilityTargettingCaster, ::MoleMole::Battle::Entity* abilityTargettingOther)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTARGETBUDDYTYPEFILTER_VALUEPASS_OFFSET))(this, owner, target, abilityTargettingSelf, abilityTargettingTarget, abilityTargettingCaster, abilityTargettingOther);
		}

		::System::Boolean CompareBuddyType(::MoleMole::Battle::Entity* buddy)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTARGETBUDDYTYPEFILTER_COMPAREBUDDYTYPE_OFFSET))(this, buddy);
		}
	};
}
