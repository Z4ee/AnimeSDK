#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceTransportType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_CLEAR_OFFSET UNITYSDK_OFFSET(0x2297A10)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x171FFFF0)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2297AB0)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x2297AD0)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x2297BF0)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2297AF0)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x2297A20)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GETVALUEORZERO_OFFSET UNITYSDK_OFFSET(0x2297A30)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GET_HASNOVALUE_OFFSET UNITYSDK_OFFSET(0x2297710)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x2A500)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x2297B80)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x171FFFB0)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x171FFF70)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x172000A0)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x171BC020)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x171FFFD0)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x171FFF90)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x2297990)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x2297990)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2297C80)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x2297990)

namespace InControl
{
	inline static constexpr unsigned int OptionalInputDeviceTransportType_TypeDefinitionIndex = 37211;

	struct alignas(2) OptionalInputDeviceTransportType
	{
		::System::Boolean hasValue; // 0x10
		::InControl::InputDeviceTransportType value; // 0x12

		::System::Void _ctor(::InControl::InputDeviceTransportType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE__CTOR_OFFSET))(this, value);
		}

		::System::Boolean get_HasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GET_HASVALUE_OFFSET))(this);
		}

		::System::Boolean get_HasNoValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GET_HASNOVALUE_OFFSET))(this);
		}

		::InControl::InputDeviceTransportType get_Value()
		{
			return ((::InControl::InputDeviceTransportType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::InControl::InputDeviceTransportType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_CLEAR_OFFSET))(this);
		}

		::InControl::InputDeviceTransportType GetValueOrDefault(::InControl::InputDeviceTransportType defaultValue)
		{
			return ((::InControl::InputDeviceTransportType(*)(::PVOID, ::InControl::InputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GETVALUEORDEFAULT_OFFSET))(this, defaultValue);
		}

		::InControl::InputDeviceTransportType GetValueOrZero()
		{
			return ((::InControl::InputDeviceTransportType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GETVALUEORZERO_OFFSET))(this);
		}

		::System::Void SetValue(::InControl::InputDeviceTransportType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_SETVALUE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::InControl::OptionalInputDeviceTransportType other)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::OptionalInputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean Equals_2(::InControl::InputDeviceTransportType other)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_EQUALS_2_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::InControl::OptionalInputDeviceTransportType a, ::InControl::OptionalInputDeviceTransportType b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInputDeviceTransportType, ::InControl::OptionalInputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::InControl::OptionalInputDeviceTransportType a, ::InControl::OptionalInputDeviceTransportType b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInputDeviceTransportType, ::InControl::OptionalInputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_INEQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality_1(::InControl::OptionalInputDeviceTransportType a, ::InControl::InputDeviceTransportType b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInputDeviceTransportType, ::InControl::InputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_EQUALITY_1_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality_1(::InControl::OptionalInputDeviceTransportType a, ::InControl::InputDeviceTransportType b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInputDeviceTransportType, ::InControl::InputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_INEQUALITY_1_OFFSET))(a, b);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 h1, ::System::Int32 h2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_COMBINEHASHCODES_OFFSET))(h1, h2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_TOSTRING_OFFSET))(this);
		}

		static ::InControl::OptionalInputDeviceTransportType op_Implicit(::InControl::InputDeviceTransportType value)
		{
			return ((::InControl::OptionalInputDeviceTransportType(*)(::InControl::InputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_IMPLICIT_OFFSET))(value);
		}

		static ::InControl::InputDeviceTransportType op_Explicit(::InControl::OptionalInputDeviceTransportType optional)
		{
			return ((::InControl::InputDeviceTransportType(*)(::InControl::OptionalInputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_EXPLICIT_OFFSET))(optional);
		}
	};
}
