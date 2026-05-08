#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_147;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16B40010)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x16B3FF20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x16B3FF60)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_ISMATCH_OFFSET UNITYSDK_OFFSET(0x16B40370)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_WALK_OFFSET UNITYSDK_OFFSET(0x16B40560)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH__CTOR_OFFSET UNITYSDK_OFFSET(0x16B40780)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x16B407C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x16B407D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x16B407E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Branch_TypeDefinitionIndex = 47879;

	class ConfigSoundAction_Branch : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>* branchActions; // 0x20
		::System::String* _curScopeValue; // 0x28
		::MoleMole::Config::ConfigSoundActionGeneral* defaultAction; // 0x30
		::System::String* scopeName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_147* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_147*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_WALK_OFFSET))(this, callback);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
