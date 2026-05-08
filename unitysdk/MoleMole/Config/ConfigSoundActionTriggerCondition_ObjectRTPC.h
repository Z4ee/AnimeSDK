#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_147;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_COMPARE_OFFSET UNITYSDK_OFFSET(0x1753A670)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1753A130)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1753A0F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1753A760)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_ObjectRTPC_TypeDefinitionIndex = 77344;

	class ConfigSoundActionTriggerCondition_ObjectRTPC : public ::System::Object
	{
	public:
		// static const ::System::Single Epsilon; // 0x0
		::System::String* rtpcName; // 0x10
		::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp op; // 0x18
		::System::Single value; // 0x1C
		::System::Boolean requireObject; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::Class_0_16E4307DCC419505_147* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_147*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_EVALUATE_OFFSET))(this, context);
		}

		static ::System::Boolean Compare(::System::Single current, ::System::Single target, ::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp op)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_COMPARE_OFFSET))(current, target, op);
		}
	};
}
