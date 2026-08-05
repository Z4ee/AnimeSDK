#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED_EXECUTE_OFFSET UNITYSDK_OFFSET(0x177E2BE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x177E2AE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x177E2B20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED_ISMATCH_OFFSET UNITYSDK_OFFSET(0x177E2D30)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED__CTOR_OFFSET UNITYSDK_OFFSET(0x177E2DC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x177E2E00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETPORTALENABLED___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x177E2E10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetPortalEnabled_TypeDefinitionIndex = 69613;

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
