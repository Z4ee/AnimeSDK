#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityFilter.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_CONFIGTARGETBUDDYCONFIGIDFILTER_COMPAREBUDDY_OFFSET UNITYSDK_OFFSET(0x17456560)
#define MOLEMOLE_CONFIG_CONFIGTARGETBUDDYCONFIGIDFILTER_VALUEPASS_OFFSET UNITYSDK_OFFSET(0x17456420)
#define MOLEMOLE_CONFIG_CONFIGTARGETBUDDYCONFIGIDFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x174566C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTargetBuddyConfigIdFilter_TypeDefinitionIndex = 79187;

	class ConfigTargetBuddyConfigIdFilter : public ::MoleMole::Config::ConfigEntityFilter
	{
	public:
		::System::Int32 buddyConfigId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTARGETBUDDYCONFIGIDFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean ValuePass(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* target, ::MoleMole::Battle::Entity* abilityTargettingSelf, ::MoleMole::Battle::Entity* abilityTargettingTarget, ::MoleMole::Battle::Entity* abilityTargettingCaster, ::MoleMole::Battle::Entity* abilityTargettingOther)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTARGETBUDDYCONFIGIDFILTER_VALUEPASS_OFFSET))(this, owner, target, abilityTargettingSelf, abilityTargettingTarget, abilityTargettingCaster, abilityTargettingOther);
		}

		::System::Boolean CompareBuddy(::MoleMole::Battle::Entity* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTARGETBUDDYCONFIGIDFILTER_COMPAREBUDDY_OFFSET))(this, target);
		}
	};
}
