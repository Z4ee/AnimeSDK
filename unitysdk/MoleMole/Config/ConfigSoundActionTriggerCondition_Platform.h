#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5823F21FEBD25551.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_PLATFORM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C462700)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_PLATFORM_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1C4626C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_PLATFORM_METHOD_1_66E9C054215A7E2D_OFFSET UNITYSDK_OFFSET(0x1C4627D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_PLATFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C462C30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_Platform_TypeDefinitionIndex = 90135;

	class ConfigSoundActionTriggerCondition_Platform : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Enum_3_5823F21FEBD25551>* platforms; // 0x10
		::System::Boolean checkCloudGamePlatform; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_PLATFORM__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_PLATFORM_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::Class_0_16E4307DCC419505_197* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_PLATFORM_EVALUATE_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_1_66E9C054215A7E2D(::Enum_3_5823F21FEBD25551 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::Enum_3_5823F21FEBD25551, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_PLATFORM_METHOD_1_66E9C054215A7E2D_OFFSET))(a1, a2);
		}
	};
}
