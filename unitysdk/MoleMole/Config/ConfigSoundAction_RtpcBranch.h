#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace MoleMole::Config { class ConfigSoundAction_RtpcBranch_BranchOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B4DBAE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1B4DBAA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B4DBE90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_WALK_OFFSET UNITYSDK_OFFSET(0x1B4DC040)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DC220)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B4DC260)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x1B4DC270)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_RtpcBranch_TypeDefinitionIndex = 59700;

	class ConfigSoundAction_RtpcBranch : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* rtpcName; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSoundAction_RtpcBranch_BranchOperation*>* branchList; // 0x28
		::System::Single defaultValue; // 0x30
		::System::Boolean useGlobal; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
