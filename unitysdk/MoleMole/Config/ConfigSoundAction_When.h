#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace MoleMole::Config { class ISoundActionTriggerCondition; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18F3A710)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x18F3A650)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x18F3A690)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_ISMATCH_OFFSET UNITYSDK_OFFSET(0x18F3A850)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_WALK_OFFSET UNITYSDK_OFFSET(0x18F3A8D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN__CTOR_OFFSET UNITYSDK_OFFSET(0x18F3A9B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x18F3A9F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x18F3AA00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x18F3AA10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_When_TypeDefinitionIndex = 83772;

	class ConfigSoundAction_When : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x20
		::MoleMole::Config::ISoundActionTriggerCondition* condition; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_WALK_OFFSET))(this, callback);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
