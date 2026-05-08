#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_147;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET_EXECUTE_OFFSET UNITYSDK_OFFSET(0xFB0B840)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0xFB0B780)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xFB0B7C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xFB0BBD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetBGMFollowTarget_TypeDefinitionIndex = 49973;

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

		::System::Void Execute(::Class_0_16E4307DCC419505_147* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_147*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET_EXECUTE_OFFSET))(this, context);
		}
	};
}
