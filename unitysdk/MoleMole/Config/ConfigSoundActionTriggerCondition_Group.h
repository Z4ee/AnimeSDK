#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionTriggerCondition_Group_CombineOp.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_147;
namespace MoleMole::Config { class ISoundActionTriggerCondition; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GROUP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17D28E80)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GROUP_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x17D28E40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x17D29200)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_Group_TypeDefinitionIndex = 65631;

	class ConfigSoundActionTriggerCondition_Group : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigSoundActionTriggerCondition_Group_CombineOp combineOp; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::ISoundActionTriggerCondition*>* conditions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GROUP__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GROUP_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::Class_0_16E4307DCC419505_147* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_147*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GROUP_EVALUATE_OFFSET))(this, context);
		}
	};
}
