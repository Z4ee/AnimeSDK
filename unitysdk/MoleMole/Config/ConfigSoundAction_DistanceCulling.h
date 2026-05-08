#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_147;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16B40F70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x16B40EB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x16B40EF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_ISMATCH_OFFSET UNITYSDK_OFFSET(0x16B41480)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_WALK_OFFSET UNITYSDK_OFFSET(0x16B41500)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING__CTOR_OFFSET UNITYSDK_OFFSET(0x16B415E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x16B41620)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x16B41630)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x16B41640)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_DistanceCulling_TypeDefinitionIndex = 75671;

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

		::System::Void Execute(::Class_0_16E4307DCC419505_147* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_147*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_EXECUTE_OFFSET))(this, context);
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
