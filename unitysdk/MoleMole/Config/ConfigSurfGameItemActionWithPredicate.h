#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

class Class_0_16E4307DCC419505_207;
namespace MoleMole::Config { class ConfigSurfGameItemPredicate; }

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x159F7800)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x159F77B0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x159F78D0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE___BASE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x159F78E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemActionWithPredicate_TypeDefinitionIndex = 81653;

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

		::System::Void Execute_1(::Class_0_16E4307DCC419505_207* source)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_207*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE_EXECUTE_1_OFFSET))(this, source);
		}

		::System::Void __base_Execute(::Class_0_16E4307DCC419505_207* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_207*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE___BASE_EXECUTE_OFFSET))(this, P0);
		}
	};
}
