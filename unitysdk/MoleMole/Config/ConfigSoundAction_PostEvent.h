#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_147;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x186BDC70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x186BDB80)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x186BDC60)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_ISEVENTNAMEHAVESPACE_OFFSET UNITYSDK_OFFSET(0x186BDBC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x186BE3E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x186BE470)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x186BE4B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_PostEvent_TypeDefinitionIndex = 39075;

	class ConfigSoundAction_PostEvent : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* eventName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean IsEventNameHaveSpace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_ISEVENTNAMEHAVESPACE_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_147* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_147*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
