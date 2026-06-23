#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEHITTRAPANIMATIONACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17D631C0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEHITTRAPANIMATIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17D63280)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameHitTrapAnimationAction_TypeDefinitionIndex = 55186;

	class ConfigSurfGameHitTrapAnimationAction : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEHITTRAPANIMATIONACTION__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEHITTRAPANIMATIONACTION_EXECUTE_OFFSET))(this);
		}
	};
}
