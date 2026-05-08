#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_147;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16A9CC60)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x16A9CC20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_ISMATCH_OFFSET UNITYSDK_OFFSET(0x16A9CF20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_WALK_OFFSET UNITYSDK_OFFSET(0x16A9CFE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9D0C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x16A9D100)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x16A9D110)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Ongoing_TypeDefinitionIndex = 61439;

	class ConfigSoundAction_Ongoing : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* endAction; // 0x20
		::System::Int32 GroupID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_147* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_147*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
