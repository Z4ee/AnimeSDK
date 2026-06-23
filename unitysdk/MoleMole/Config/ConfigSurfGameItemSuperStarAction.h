#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSUPERSTARACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18AD8BA0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSUPERSTARACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD8CE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemSuperStarAction_TypeDefinitionIndex = 48883;

	class ConfigSurfGameItemSuperStarAction : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::System::Single Duration; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSUPERSTARACTION__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSUPERSTARACTION_EXECUTE_OFFSET))(this);
		}
	};
}
