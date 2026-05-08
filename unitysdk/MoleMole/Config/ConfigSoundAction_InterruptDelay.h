#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_147;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY_EXECUTE_OFFSET UNITYSDK_OFFSET(0x181D4DB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x181D4CD0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x181D4D10)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY_ISMATCH_OFFSET UNITYSDK_OFFSET(0x181D5180)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY__CTOR_OFFSET UNITYSDK_OFFSET(0x181D5210)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x181D5250)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x181D5260)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_InterruptDelay_TypeDefinitionIndex = 39224;

	class ConfigSoundAction_InterruptDelay : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* interruptKey; // 0x20
		::System::String* result; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_147* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_147*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY_ISMATCH_OFFSET))(this, pattern);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_INTERRUPTDELAY___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
