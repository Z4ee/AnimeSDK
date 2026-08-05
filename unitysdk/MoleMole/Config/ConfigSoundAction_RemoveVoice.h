#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x143811B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x14381100)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x14381140)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x14381440)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE__CTOR_OFFSET UNITYSDK_OFFSET(0x143814D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x14381510)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_RemoveVoice_TypeDefinitionIndex = 55818;

	class ConfigSoundAction_RemoveVoice : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* controlTag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
