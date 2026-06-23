#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

class Class_0_16E4307DCC419505_586;
namespace MoleMole::Config { class ConfigSurfGameItemPredicate; }

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x12721690)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12721640)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x12721760)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE___BASE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12721770)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemActionWithPredicate_TypeDefinitionIndex = 81598;

	class ConfigSurfGameItemActionWithPredicate : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::MoleMole::Config::ConfigSurfGameItemPredicate* Predicate; // 0x10
		::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemAction*>* Actions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE_EXECUTE_OFFSET))(this);
		}

		::System::Void Execute_1(::Class_0_16E4307DCC419505_586* source)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_586*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE_EXECUTE_1_OFFSET))(this, source);
		}

		::System::Void __base_Execute(::Class_0_16E4307DCC419505_586* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_586*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE___BASE_EXECUTE_OFFSET))(this, P0);
		}
	};
}
