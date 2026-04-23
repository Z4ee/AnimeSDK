#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define INCONTROL_INPUTCONTROLSTATE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1716C510)
#define INCONTROL_INPUTCONTROLSTATE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1716C500)
#define INCONTROL_INPUTCONTROLSTATE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1716C4F0)
#define INCONTROL_INPUTCONTROLSTATE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1716C560)
#define INCONTROL_INPUTCONTROLSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x2296C40)
#define INCONTROL_INPUTCONTROLSTATE_SET_1_OFFSET UNITYSDK_OFFSET(0x2296C80)
#define INCONTROL_INPUTCONTROLSTATE_SET_2_OFFSET UNITYSDK_OFFSET(0x2296CB0)
#define INCONTROL_INPUTCONTROLSTATE_SET_OFFSET UNITYSDK_OFFSET(0x2296C50)

namespace InControl
{
	inline static constexpr unsigned int InputControlState_TypeDefinitionIndex = 37128;

	struct alignas(4) InputControlState
	{
		::System::Boolean State; // 0x10
		::System::Single Value; // 0x14
		::System::Single RawValue; // 0x18

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSTATE_RESET_OFFSET))(this);
		}

		::System::Void Set(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSTATE_SET_OFFSET))(this, value);
		}

		::System::Void Set_1(::System::Single value, ::System::Single threshold)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSTATE_SET_1_OFFSET))(this, value, threshold);
		}

		::System::Void Set_2(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSTATE_SET_2_OFFSET))(this, state);
		}

		static ::System::Boolean op_Implicit(::InControl::InputControlState state)
		{
			return ((::System::Boolean(*)(::InControl::InputControlState))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSTATE_OP_IMPLICIT_OFFSET))(state);
		}

		static ::System::Single op_Implicit_1(::InControl::InputControlState state)
		{
			return ((::System::Single(*)(::InControl::InputControlState))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSTATE_OP_IMPLICIT_1_OFFSET))(state);
		}

		static ::System::Boolean op_Equality(::InControl::InputControlState a, ::InControl::InputControlState b)
		{
			return ((::System::Boolean(*)(::InControl::InputControlState, ::InControl::InputControlState))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSTATE_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::InControl::InputControlState a, ::InControl::InputControlState b)
		{
			return ((::System::Boolean(*)(::InControl::InputControlState, ::InControl::InputControlState))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSTATE_OP_INEQUALITY_OFFSET))(a, b);
		}
	};
}
