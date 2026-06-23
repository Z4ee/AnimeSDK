#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A355DF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1A355C20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1A355C60)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1A356230)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A356300)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1A356340)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1A356350)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Voice_TypeDefinitionIndex = 57606;

	class ConfigSoundAction_Voice : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* voiceFemale; // 0x20
		::System::String* voiceMale; // 0x28
		::System::String* voiceKey; // 0x30
		::System::Boolean queuePlay; // 0x38
		::System::Boolean gender; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE_ISMATCH_OFFSET))(this, pattern);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
