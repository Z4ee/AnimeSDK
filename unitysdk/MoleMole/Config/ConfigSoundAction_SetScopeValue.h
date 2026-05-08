#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_147;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12315960)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x12315880)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x123158C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x12315B80)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x12315CC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x12315D00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x12315D10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetScopeValue_TypeDefinitionIndex = 78923;

	class ConfigSoundAction_SetScopeValue : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* scopeValue; // 0x20
		::System::String* scopeName; // 0x28
		::System::Boolean setValueOnGameObject; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_147* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_147*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_ISMATCH_OFFSET))(this, pattern);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
