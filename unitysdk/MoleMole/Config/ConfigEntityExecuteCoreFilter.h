#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityFilter.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_CONFIGENTITYEXECUTECOREFILTER_VALUEPASS_OFFSET UNITYSDK_OFFSET(0x17D22EF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYEXECUTECOREFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D22F70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityExecuteCoreFilter_TypeDefinitionIndex = 57432;

	class ConfigEntityExecuteCoreFilter : public ::MoleMole::Config::ConfigEntityFilter
	{
	public:
		::System::Boolean IsBeingExecuted; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYEXECUTECOREFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean ValuePass(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* target, ::MoleMole::Battle::Entity* abilityTargettingSelf, ::MoleMole::Battle::Entity* abilityTargettingTarget, ::MoleMole::Battle::Entity* abilityTargettingCaster, ::MoleMole::Battle::Entity* abilityTargettingOther)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYEXECUTECOREFILTER_VALUEPASS_OFFSET))(this, owner, target, abilityTargettingSelf, abilityTargettingTarget, abilityTargettingCaster, abilityTargettingOther);
		}
	};
}
