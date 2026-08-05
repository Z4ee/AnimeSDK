#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C462DA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1C462CE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1C462D20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1C462F90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C463090)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1C4630D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_PostCustomEvent_TypeDefinitionIndex = 42127;

	class ConfigSoundAction_PostCustomEvent : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Int32 customSoundID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
