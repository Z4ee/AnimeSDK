#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowInteractBase.h"
#include "unitysdk/MoleMole/Config/DragWhenInteractingType.h"
#include "unitysdk/MoleMole/Config/LongPressTotalTimeType.h"
#include "unitysdk/MoleMole/Config/LongPressTriggerStateType.h"

class Class_1_3E7861A5123BFC05;
namespace MoleMole::Config { class ConfigHollowInteractEffect; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWLONGPRESSINTERACT_CHECKTRIGGERONLYONCE_OFFSET UNITYSDK_OFFSET(0x110A2EE0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWLONGPRESSINTERACT_GETINTERACTINSTANCE_OFFSET UNITYSDK_OFFSET(0x110A2F40)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWLONGPRESSINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x110A2FD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowLongpressInteract_TypeDefinitionIndex = 67022;

	class ConfigHollowLongpressInteract : public ::MoleMole::Config::ConfigHollowInteractBase
	{
	public:
		::MoleMole::Config::ConfigHollowInteractEffect* IntervalEvent; // 0x50
		::MoleMole::Config::ConfigHollowInteractEffect* PressStartEvent; // 0x58
		::MoleMole::Config::ConfigHollowInteractEffect* RealLongPressStartEvent; // 0x60
		::System::Single LongAttenuation; // 0x68
		::MoleMole::Config::LongPressTotalTimeType PressTimeType; // 0x6C
		::System::Boolean UseIntervalEventAsRealLongPressStart; // 0x70
		::System::Boolean UseAttenuation; // 0x71
		::System::Boolean TriggerOnlyOnce; // 0x72
		::System::Single LongPressInterval; // 0x74
		::MoleMole::Config::LongPressTriggerStateType TriggerStateType; // 0x78
		::System::Single PressTime; // 0x7C
		::MoleMole::Config::DragWhenInteractingType DragInteractType; // 0x80
		::System::Single ClickDelta; // 0x84
		::System::Single PressStartTime; // 0x88
		::System::Single QuickClickInterval; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWLONGPRESSINTERACT__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckTriggerOnlyOnce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWLONGPRESSINTERACT_CHECKTRIGGERONLYONCE_OFFSET))(this);
		}

		::Class_1_3E7861A5123BFC05* GetInteractInstance(::System::String* key)
		{
			return ((::Class_1_3E7861A5123BFC05*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWLONGPRESSINTERACT_GETINTERACTINSTANCE_OFFSET))(this, key);
		}
	};
}
