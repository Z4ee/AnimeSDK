#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A4B68C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1A4B67D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1A4B68B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_ISEVENTNAMEHAVESPACE_OFFSET UNITYSDK_OFFSET(0x1A4B6810)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1A4B6EE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B6F70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1A4B6FB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_PostEvent_TypeDefinitionIndex = 47544;

	class ConfigSoundAction_PostEvent : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* eventName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean IsEventNameHaveSpace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_ISEVENTNAMEHAVESPACE_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
