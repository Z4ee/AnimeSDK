#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_STREAMINGSAFETYAREA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1170C500)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_STREAMINGSAFETYAREA_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1170C4C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_STREAMINGSAFETYAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1170C5C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_StreamingSafetyArea_TypeDefinitionIndex = 90228;

	class ConfigSoundActionTriggerCondition_StreamingSafetyArea : public ::System::Object
	{
	public:
		::System::Boolean invert; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_STREAMINGSAFETYAREA__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_STREAMINGSAFETYAREA_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_STREAMINGSAFETYAREA_EVALUATE_OFFSET))(this, context);
		}
	};
}
