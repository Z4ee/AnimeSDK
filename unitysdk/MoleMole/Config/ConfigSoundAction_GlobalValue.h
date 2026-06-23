#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace MoleMole::Config { class ConfigSoundAction_GlobalValue_BranchOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19FF0930)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x19FF0750)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x19FF0790)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x19FF1060)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_WALK_OFFSET UNITYSDK_OFFSET(0x19FF1210)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FF1430)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF13F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x19FF1590)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x19FF15A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x19FF15B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_GlobalValue_TypeDefinitionIndex = 82129;

	class ConfigSoundAction_GlobalValue : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		static ::System::Collections::IEnumerable** StaticGet_operateTypes()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_GlobalValue_TypeDefinitionIndex)->GetStaticField(0x4BD00);
		}
		::System::String* scopeName; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSoundAction_GlobalValue_BranchOperation*>* branchList; // 0x28
		::System::Int32 value; // 0x30
		::System::Int32 operateType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE__CCTOR_OFFSET))();
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_WALK_OFFSET))(this, callback);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
