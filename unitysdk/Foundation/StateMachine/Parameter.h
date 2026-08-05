#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_STATEMACHINE_PARAMETER_EQUALS_OFFSET UNITYSDK_OFFSET(0x826600)
#define FOUNDATION_STATEMACHINE_PARAMETER_GET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x36DBB0)
#define FOUNDATION_STATEMACHINE_PARAMETER_GET_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0x36DBB0)
#define FOUNDATION_STATEMACHINE_PARAMETER_NEWBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1FBE2DD0)
#define FOUNDATION_STATEMACHINE_PARAMETER_NEWFLOAT_OFFSET UNITYSDK_OFFSET(0x1FBE2DB0)
#define FOUNDATION_STATEMACHINE_PARAMETER_NEWINTEGER_OFFSET UNITYSDK_OFFSET(0x1FBE2DC0)
#define FOUNDATION_STATEMACHINE_PARAMETER_NEWTRIGGER_OFFSET UNITYSDK_OFFSET(0x1FBE2DE0)
#define FOUNDATION_STATEMACHINE_PARAMETER_RESETTRIGGER_OFFSET UNITYSDK_OFFSET(0xACD370)
#define FOUNDATION_STATEMACHINE_PARAMETER_SET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x324490)
#define FOUNDATION_STATEMACHINE_PARAMETER_TRIGGER_OFFSET UNITYSDK_OFFSET(0xACD360)

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int Parameter_TypeDefinitionIndex = 8676;

	struct alignas(4) Parameter
	{
		::System::Single FloatValue; // 0x10
		::System::Int32 IntValue; // 0x10
		::System::Byte _boolValue; // 0x10
		::System::Byte _isTriggered; // 0x10

		::System::Boolean get_BoolValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETER_GET_BOOLVALUE_OFFSET))(this);
		}

		::System::Void set_BoolValue(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETER_SET_BOOLVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETER_GET_ISTRIGGERED_OFFSET))(this);
		}

		::Foundation::StateMachine::Parameter Trigger()
		{
			return ((::Foundation::StateMachine::Parameter(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETER_TRIGGER_OFFSET))(this);
		}

		::Foundation::StateMachine::Parameter ResetTrigger()
		{
			return ((::Foundation::StateMachine::Parameter(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETER_RESETTRIGGER_OFFSET))(this);
		}

		::System::Boolean Equals(::Foundation::StateMachine::Parameter other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::StateMachine::Parameter))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETER_EQUALS_OFFSET))(this, other);
		}

		static ::Foundation::StateMachine::Parameter NewFloat(::System::Single value)
		{
			return ((::Foundation::StateMachine::Parameter(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETER_NEWFLOAT_OFFSET))(value);
		}

		static ::Foundation::StateMachine::Parameter NewInteger(::System::Int32 value)
		{
			return ((::Foundation::StateMachine::Parameter(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETER_NEWINTEGER_OFFSET))(value);
		}

		static ::Foundation::StateMachine::Parameter NewBoolean(::System::Boolean value)
		{
			return ((::Foundation::StateMachine::Parameter(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETER_NEWBOOLEAN_OFFSET))(value);
		}

		static ::Foundation::StateMachine::Parameter NewTrigger()
		{
			return ((::Foundation::StateMachine::Parameter(*)())((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_PARAMETER_NEWTRIGGER_OFFSET))();
		}
	};
}
