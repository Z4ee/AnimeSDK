#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19AC8E00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x19AC8D40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x19AC8D80)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC9190)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetBGMFollowTarget_TypeDefinitionIndex = 67519;

	class ConfigSoundAction_SetBGMFollowTarget : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Boolean setFollowTarget; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET_EXECUTE_OFFSET))(this, context);
		}
	};
}
