#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionTriggerCondition_Scope_MatchMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1170C280)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1170C240)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1170C4B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_Scope_TypeDefinitionIndex = 88156;

	class ConfigSoundActionTriggerCondition_Scope : public ::System::Object
	{
	public:
		::System::String* scopeName; // 0x10
		::System::String* scopeValue; // 0x18
		::MoleMole::Config::ConfigSoundActionTriggerCondition_Scope_MatchMode matchMode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPE__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPE_EVALUATE_OFFSET))(this, context);
		}
	};
}
