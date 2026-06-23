#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x158B6460)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x158B6420)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC_ISMATCH_OFFSET UNITYSDK_OFFSET(0x158B67C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC__CTOR_OFFSET UNITYSDK_OFFSET(0x158B6850)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x158B6890)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetRTPC_TypeDefinitionIndex = 70864;

	class ConfigSoundAction_SetRTPC : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* rtpcName; // 0x20
		::System::Int32 valueChangeDuration; // 0x28
		::System::Single rtpcValue; // 0x2C
		::AkCurveInterpolation fadeCurve; // 0x30
		::System::Boolean setDurationOrFadeCurve; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
