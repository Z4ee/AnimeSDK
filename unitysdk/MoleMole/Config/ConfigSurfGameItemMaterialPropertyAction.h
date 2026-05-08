#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMMATERIALPROPERTYACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x186BEC90)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMMATERIALPROPERTYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x186BEFB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemMaterialPropertyAction_TypeDefinitionIndex = 56786;

	class ConfigSurfGameItemMaterialPropertyAction : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::System::String* MaterialPropertyKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMMATERIALPROPERTYACTION__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMMATERIALPROPERTYACTION_EXECUTE_OFFSET))(this);
		}
	};
}
