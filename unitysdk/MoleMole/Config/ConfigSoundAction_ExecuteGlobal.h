#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x158B58A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x158B5850)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x158B5890)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_ISMATCH_OFFSET UNITYSDK_OFFSET(0x158B5940)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL__CTOR_OFFSET UNITYSDK_OFFSET(0x158B5A00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x158B5A40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_ExecuteGlobal_TypeDefinitionIndex = 60030;

	class ConfigSoundAction_ExecuteGlobal : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* globalActionKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
