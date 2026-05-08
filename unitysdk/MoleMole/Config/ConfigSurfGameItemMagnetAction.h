#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMMAGNETACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x123176C0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMMAGNETACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12317840)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemMagnetAction_TypeDefinitionIndex = 68386;

	class ConfigSurfGameItemMagnetAction : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::System::Single MagnetRangeZ; // 0x10
		::System::Single Duration; // 0x14
		::System::Single MagnetRangeX; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMMAGNETACTION__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMMAGNETACTION_EXECUTE_OFFSET))(this);
		}
	};
}
