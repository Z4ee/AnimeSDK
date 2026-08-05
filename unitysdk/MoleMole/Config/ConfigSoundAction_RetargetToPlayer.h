#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x162635B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x16263570)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x16263AA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER_WALK_OFFSET UNITYSDK_OFFSET(0x16263B20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x16263C00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x16263C40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x16263C50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_RetargetToPlayer_TypeDefinitionIndex = 45521;

	class ConfigSoundAction_RetargetToPlayer : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
