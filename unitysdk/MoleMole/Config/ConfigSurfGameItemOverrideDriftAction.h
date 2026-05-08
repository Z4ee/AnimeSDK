#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMOVERRIDEDRIFTACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1102FE60)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMOVERRIDEDRIFTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1102FF20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemOverrideDriftAction_TypeDefinitionIndex = 71073;

	class ConfigSurfGameItemOverrideDriftAction : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::System::Int32 OverrideId; // 0x10
		::System::Boolean EnableOverride; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMOVERRIDEDRIFTACTION__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMOVERRIDEDRIFTACTION_EXECUTE_OFFSET))(this);
		}
	};
}
