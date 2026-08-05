#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x162632F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x162631D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x16263210)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x16263480)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x16263510)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x16263550)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x16263560)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Post2DEvent_TypeDefinitionIndex = 56566;

	class ConfigSoundAction_Post2DEvent : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Int32 defaultSoundID; // 0x20
		::System::Int32 customSoundID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_ISMATCH_OFFSET))(this, pattern);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
