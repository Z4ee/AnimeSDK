#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_CONDITIONMET_OFFSET UNITYSDK_OFFSET(0x16C51A40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16C51C50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x16C51A00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x16C51AB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_ISMATCH_OFFSET UNITYSDK_OFFSET(0x16C51D70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_WALK_OFFSET UNITYSDK_OFFSET(0x16C51DF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C51ED0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x16C51F10)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x16C51F20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x16C51F30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Condition_TypeDefinitionIndex = 78212;

	class ConfigSoundAction_Condition : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x20
		::System::Single _currentCooldown; // 0x28
		::System::Single probability; // 0x2C
		::System::Single _currentRoll; // 0x30
		::System::Single cooldownRandomRange; // 0x34
		::System::Single _lastTriggerTime; // 0x38
		::System::Single cooldown; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean ConditionMet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_CONDITIONMET_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_WALK_OFFSET))(this, callback);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
