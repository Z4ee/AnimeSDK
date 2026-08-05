#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionTriggerCondition_ObjectValue_Enum_3_3519797A445CA6EB.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTVALUE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1170BBB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTVALUE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1170BB70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1170BFF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_ObjectValue_TypeDefinitionIndex = 41125;

	class ConfigSoundActionTriggerCondition_ObjectValue : public ::System::Object
	{
	public:
		::System::String* valueName; // 0x10
		::System::String* value; // 0x18
		::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectValue_Enum_3_3519797A445CA6EB matchMode; // 0x20
		::System::Boolean requireObject; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTVALUE__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTVALUE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::Class_0_16E4307DCC419505_197* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTVALUE_EVALUATE_OFFSET))(this, a1);
		}
	};
}
