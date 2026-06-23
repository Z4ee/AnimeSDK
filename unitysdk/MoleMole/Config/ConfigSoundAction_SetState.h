#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A355900)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1A355780)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1A3557C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1A355A50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_ISNOTGAMEPLAYMIX_OFFSET UNITYSDK_OFFSET(0x1A355860)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A355B90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1A355C00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1A355C10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetState_TypeDefinitionIndex = 46322;

	class ConfigSoundAction_SetState : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* stateValue; // 0x20
		::System::String* stateGroup; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean IsNotGameplayMix(::System::String* stateGroup)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_ISNOTGAMEPLAYMIX_OFFSET))(this, stateGroup);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_ISMATCH_OFFSET))(this, pattern);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
