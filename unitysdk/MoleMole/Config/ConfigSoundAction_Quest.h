#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A3551C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1A355180)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1A3553D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_WALK_OFFSET UNITYSDK_OFFSET(0x1A355580)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A355660)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1A3556A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x1A3556B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Quest_TypeDefinitionIndex = 47210;

	class ConfigSoundAction_Quest : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* questIds; // 0x20
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
