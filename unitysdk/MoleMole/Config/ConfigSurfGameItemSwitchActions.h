#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

class Class_0_16E4307DCC419505_443;
namespace MoleMole::Config { class ConfigSurfGameItemPredicate; }

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x19AC9790)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19AC96F0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS_INTERNALEXECUTE_OFFSET UNITYSDK_OFFSET(0x19AC9810)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC98C0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS___BASE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19AC98D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemSwitchActions_TypeDefinitionIndex = 49573;

	class ConfigSurfGameItemSwitchActions : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemAction*>* FalseActions; // 0x10
		::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemAction*>* TrueActions; // 0x18
		::MoleMole::Config::ConfigSurfGameItemPredicate* Predicate; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS_EXECUTE_OFFSET))(this);
		}

		::System::Void Execute_1(::Class_0_16E4307DCC419505_443* source)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_443*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS_EXECUTE_1_OFFSET))(this, source);
		}

		::System::Void InternalExecute(::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemAction*>* actions, ::Class_0_16E4307DCC419505_443* source)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemAction*>*, ::Class_0_16E4307DCC419505_443*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS_INTERNALEXECUTE_OFFSET))(this, actions, source);
		}

		::System::Void __base_Execute(::Class_0_16E4307DCC419505_443* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_443*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS___BASE_EXECUTE_OFFSET))(this, P0);
		}
	};
}
