#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B4DA4D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1B4DA420)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1B4DA460)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B4DA620)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DA6B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B4DA6F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_ClearScope_TypeDefinitionIndex = 55348;

	class ConfigSoundAction_ClearScope : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* scopeName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
