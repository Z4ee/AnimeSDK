#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63AD998EF2DC353E.h"
#include "unitysdk/MoleMole/InputActionEventType.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MOLEMOLE_INPUTACTIONEVENT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x88F190)
#define MOLEMOLE_INPUTACTIONEVENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x88F120)
#define MOLEMOLE_INPUTACTIONEVENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x88F0D0)
#define MOLEMOLE_INPUTACTIONEVENT_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1925A9A0)
#define MOLEMOLE_INPUTACTIONEVENT_GET_INPUTDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x32EEE0)
#define MOLEMOLE_INPUTACTIONEVENT_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x88F210)
#define MOLEMOLE_INPUTACTIONEVENT_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x88F1A0)
#define MOLEMOLE_INPUTACTIONEVENT_SET_INPUTDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x3C9D90)

namespace MoleMole
{
	inline static constexpr unsigned int InputActionEvent_TypeDefinitionIndex = 78417;

	struct alignas(4) InputActionEvent
	{
		::MoleMole::InputActionEventType actionEvent; // 0x10
		::MoleMole::InputLogicEventType logicEvent; // 0x14
		::Enum_3_63AD998EF2DC353E _inputDeviceUsage; // 0x18

		static ::MoleMole::InputActionEvent get_Empty()
		{
			return ((::MoleMole::InputActionEvent(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_GET_EMPTY_OFFSET))();
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_EQUALS_1_OFFSET))(this, a1);
		}

		::Enum_3_63AD998EF2DC353E get_InputDeviceUsage()
		{
			return ((::Enum_3_63AD998EF2DC353E(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_GET_INPUTDEVICEUSAGE_OFFSET))(this);
		}

		::System::Void set_InputDeviceUsage(::Enum_3_63AD998EF2DC353E a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63AD998EF2DC353E))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_SET_INPUTDEVICEUSAGE_OFFSET))(this, a1);
		}

		::System::Int32 Method_2_95780ED94B90ED36()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_METHOD_2_95780ED94B90ED36_OFFSET))(this);
		}

		::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
		}
	};
}
