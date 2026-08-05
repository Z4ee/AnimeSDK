#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B4DB5E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1B4DB490)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1B4DB4D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B4DB870)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DBA40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1B4DBA80)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B4DBA90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Prepare_TypeDefinitionIndex = 54413;

	class ConfigSoundAction_Prepare : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* events; // 0x20
		::System::String* tag; // 0x28
		::System::Boolean useEventsList; // 0x30
		::System::Boolean unprepare; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_ISMATCH_OFFSET))(this, pattern);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
