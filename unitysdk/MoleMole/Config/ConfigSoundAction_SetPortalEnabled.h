#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A06FF20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1A06FE20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1A06FE60)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1A070070)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A070100)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1A070140)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1A070150)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetPortalEnabled_TypeDefinitionIndex = 68837;

	class ConfigSoundAction_SetPortalEnabled : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* portalKey; // 0x20
		::System::Boolean enabled; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED_ISMATCH_OFFSET))(this, pattern);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
