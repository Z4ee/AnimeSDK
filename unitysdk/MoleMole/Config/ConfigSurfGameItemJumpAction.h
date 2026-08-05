#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

class Class_0_16E4307DCC419505_443;

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMJUMPACTION_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x1BD63270)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMJUMPACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1BD63220)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMJUMPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD635C0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMJUMPACTION___BASE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1BD635D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemJumpAction_TypeDefinitionIndex = 80995;

	class ConfigSurfGameItemJumpAction : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::System::Single VerticalSpeed; // 0x10
		::System::Single HorizontalSpeed; // 0x14
		::System::Boolean SyncHorizonRotation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMJUMPACTION__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMJUMPACTION_EXECUTE_OFFSET))(this);
		}

		::System::Void Execute_1(::Class_0_16E4307DCC419505_443* source)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_443*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMJUMPACTION_EXECUTE_1_OFFSET))(this, source);
		}

		::System::Void __base_Execute(::Class_0_16E4307DCC419505_443* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_443*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMJUMPACTION___BASE_EXECUTE_OFFSET))(this, P0);
		}
	};
}
