#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMEXITNITROBOOSTACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19AC9550)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMEXITNITROBOOSTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC9670)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemExitNitroBoostAction_TypeDefinitionIndex = 75921;

	class ConfigSurfGameItemExitNitroBoostAction : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMEXITNITROBOOSTACTION__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMEXITNITROBOOSTACTION_EXECUTE_OFFSET))(this);
		}
	};
}
