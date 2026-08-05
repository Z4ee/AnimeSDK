#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_EXECUTE_OFFSET UNITYSDK_OFFSET(0x172B0630)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x172B05F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_ISMATCH_OFFSET UNITYSDK_OFFSET(0x172B0B10)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_WALK_OFFSET UNITYSDK_OFFSET(0x172B0BC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY__CTOR_OFFSET UNITYSDK_OFFSET(0x172B0CA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x172B0CE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x172B0CF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Delay_TypeDefinitionIndex = 75356;

	class ConfigSoundAction_Delay : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x20
		::System::String* interruptKey; // 0x28
		::System::Single delayTime; // 0x30
		::System::Boolean canInterrupt; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
