#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

class Class_0_16E4307DCC419505_443;
namespace MoleMole::Config { class ConfigSurfGameItemPredicate; }

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x135088F0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x135088A0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x135089C0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE___BASE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x135089D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemActionWithPredicate_TypeDefinitionIndex = 79993;

	class ConfigSurfGameItemActionWithPredicate : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemAction*>* Actions; // 0x10
		::MoleMole::Config::ConfigSurfGameItemPredicate* Predicate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE_EXECUTE_OFFSET))(this);
		}

		::System::Void Execute_1(::Class_0_16E4307DCC419505_443* source)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_443*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE_EXECUTE_1_OFFSET))(this, source);
		}

		::System::Void __base_Execute(::Class_0_16E4307DCC419505_443* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_443*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE___BASE_EXECUTE_OFFSET))(this, P0);
		}
	};
}
