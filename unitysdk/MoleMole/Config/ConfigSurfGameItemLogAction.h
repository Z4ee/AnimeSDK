#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMLOGACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x159F7980)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMLOGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x159F79C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemLogAction_TypeDefinitionIndex = 70827;

	class ConfigSurfGameItemLogAction : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::System::String* LogStr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMLOGACTION__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMLOGACTION_EXECUTE_OFFSET))(this);
		}
	};
}
