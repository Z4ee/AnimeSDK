#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x135082C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x13507F20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x13507F60)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP_ISMATCH_OFFSET UNITYSDK_OFFSET(0x13508590)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x13508690)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x135086D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x135086E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_VoiceGroup_TypeDefinitionIndex = 79107;

	class ConfigSoundAction_VoiceGroup : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* controlTag; // 0x20
		::Il2CppArray<::System::String*>* voiceKeys; // 0x28
		::System::Single cooldownSec; // 0x30
		::System::Boolean random; // 0x34
		::System::Boolean enqueue; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP_ISMATCH_OFFSET))(this, pattern);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
