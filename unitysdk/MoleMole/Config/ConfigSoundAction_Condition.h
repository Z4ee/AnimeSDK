#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_147;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_CONDITIONMET_OFFSET UNITYSDK_OFFSET(0x16B408F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16B40B00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x16B408B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x16B40960)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_ISMATCH_OFFSET UNITYSDK_OFFSET(0x16B40C20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_WALK_OFFSET UNITYSDK_OFFSET(0x16B40CA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x16B40D80)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x16B40DC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x16B40DD0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x16B40DE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Condition_TypeDefinitionIndex = 42332;

	class ConfigSoundAction_Condition : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x20
		::System::Single cooldown; // 0x28
		::System::Single _currentCooldown; // 0x2C
		::System::Single _currentRoll; // 0x30
		::System::Single probability; // 0x34
		::System::Single _lastTriggerTime; // 0x38
		::System::Single cooldownRandomRange; // 0x3C

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

		::System::Void Execute(::Class_0_16E4307DCC419505_147* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_147*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_EXECUTE_OFFSET))(this, context);
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
