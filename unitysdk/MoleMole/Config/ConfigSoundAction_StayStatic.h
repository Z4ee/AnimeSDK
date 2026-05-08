#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_147;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12316270)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x12316230)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_ISMATCH_OFFSET UNITYSDK_OFFSET(0x12316940)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_WALK_OFFSET UNITYSDK_OFFSET(0x123169C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC__CTOR_OFFSET UNITYSDK_OFFSET(0x12316AA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x12316AE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x12316AF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_StayStatic_TypeDefinitionIndex = 72536;

	class ConfigSoundAction_StayStatic : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_147* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_147*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
