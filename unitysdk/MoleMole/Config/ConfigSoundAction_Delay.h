#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17D5F9F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x17D5F9B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_ISMATCH_OFFSET UNITYSDK_OFFSET(0x17D5FEE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_WALK_OFFSET UNITYSDK_OFFSET(0x17D5FF90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY__CTOR_OFFSET UNITYSDK_OFFSET(0x17D60070)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x17D600B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x17D600C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Delay_TypeDefinitionIndex = 66331;

	class ConfigSoundAction_Delay : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* interruptKey; // 0x20
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x28
		::System::Boolean canInterrupt; // 0x30
		::System::Single delayTime; // 0x34

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
