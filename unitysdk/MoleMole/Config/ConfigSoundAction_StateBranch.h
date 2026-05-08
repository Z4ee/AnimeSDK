#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_147;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_EXECUTE_OFFSET UNITYSDK_OFFSET(0xF98CD20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0xF98CCD0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xF98CD10)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_ISMATCH_OFFSET UNITYSDK_OFFSET(0xF98CF80)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_WALK_OFFSET UNITYSDK_OFFSET(0xF98D1C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH__CTOR_OFFSET UNITYSDK_OFFSET(0xF98D3E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xF98D420)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH___BASE_WALK_OFFSET UNITYSDK_OFFSET(0xF98D430)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_StateBranch_TypeDefinitionIndex = 82784;

	class ConfigSoundAction_StateBranch : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>* branchActions; // 0x20
		::System::String* stateGroup; // 0x28
		::System::String* _curStateValue; // 0x30
		::MoleMole::Config::ConfigSoundActionGeneral* defaultAction; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_147* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_147*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
