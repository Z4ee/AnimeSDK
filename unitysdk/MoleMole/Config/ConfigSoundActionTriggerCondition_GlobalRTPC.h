#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionTriggerCondition_GlobalRTPC_Enum_3_ACD3E740F9E6F399.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GLOBALRTPC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19AC8380)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GLOBALRTPC_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x19AC8340)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GLOBALRTPC_METHOD_1_F76B7A1AB354B377_OFFSET UNITYSDK_OFFSET(0x19AC86A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GLOBALRTPC__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC8770)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_GlobalRTPC_TypeDefinitionIndex = 59582;

	class ConfigSoundActionTriggerCondition_GlobalRTPC : public ::System::Object
	{
	public:
		// static const ::System::Single Epsilon; // 0x0
		::System::String* rtpcName; // 0x10
		::MoleMole::Config::ConfigSoundActionTriggerCondition_GlobalRTPC_Enum_3_ACD3E740F9E6F399 op; // 0x18
		::System::Single value; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GLOBALRTPC__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GLOBALRTPC_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::Class_0_16E4307DCC419505_197* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GLOBALRTPC_EVALUATE_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_1_F76B7A1AB354B377(::System::Single a1, ::System::Single a2, ::MoleMole::Config::ConfigSoundActionTriggerCondition_GlobalRTPC_Enum_3_ACD3E740F9E6F399 a3)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::MoleMole::Config::ConfigSoundActionTriggerCondition_GlobalRTPC_Enum_3_ACD3E740F9E6F399))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GLOBALRTPC_METHOD_1_F76B7A1AB354B377_OFFSET))(a1, a2, a3);
		}
	};
}
