#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }

#define MOLEMOLE_CONFIG_CONFIGSURFGAMETRIGGERSOUNDACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16A9E040)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMETRIGGERSOUNDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9E110)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameTriggerSoundAction_TypeDefinitionIndex = 49341;

	class ConfigSurfGameTriggerSoundAction : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMETRIGGERSOUNDACTION__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMETRIGGERSOUNDACTION_EXECUTE_OFFSET))(this);
		}
	};
}
