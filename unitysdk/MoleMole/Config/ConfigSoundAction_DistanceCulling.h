#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16C520C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x16C52000)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x16C52040)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_ISMATCH_OFFSET UNITYSDK_OFFSET(0x16C525D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_WALK_OFFSET UNITYSDK_OFFSET(0x16C52650)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING__CTOR_OFFSET UNITYSDK_OFFSET(0x16C52730)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x16C52770)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x16C52780)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x16C52790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_DistanceCulling_TypeDefinitionIndex = 76474;

	class ConfigSoundAction_DistanceCulling : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x20
		::System::Boolean _passed; // 0x28
		::System::Single distance; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_WALK_OFFSET))(this, callback);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
