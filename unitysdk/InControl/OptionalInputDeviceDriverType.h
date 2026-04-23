#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceDriverType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_CLEAR_OFFSET UNITYSDK_OFFSET(0x2297A10)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x171FFCB0)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2297AB0)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x2297AD0)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x2297A40)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2297AF0)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x2297A20)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GETVALUEORZERO_OFFSET UNITYSDK_OFFSET(0x2297A30)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GET_HASNOVALUE_OFFSET UNITYSDK_OFFSET(0x2297710)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x2A500)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x22979A0)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x171FFC70)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x171FFC30)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x171FFD50)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x171A9F60)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x171FFC90)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x171FFC50)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x2297990)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x2297990)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2297B10)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x2297990)

namespace InControl
{
	inline static constexpr unsigned int OptionalInputDeviceDriverType_TypeDefinitionIndex = 37210;

	struct alignas(2) OptionalInputDeviceDriverType
	{
		::System::Boolean hasValue; // 0x10
		::InControl::InputDeviceDriverType value; // 0x12

		::System::Void _ctor(::InControl::InputDeviceDriverType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE__CTOR_OFFSET))(this, value);
		}

		::System::Boolean get_HasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GET_HASVALUE_OFFSET))(this);
		}

		::System::Boolean get_HasNoValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GET_HASNOVALUE_OFFSET))(this);
		}

		::InControl::InputDeviceDriverType get_Value()
		{
			return ((::InControl::InputDeviceDriverType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::InControl::InputDeviceDriverType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_CLEAR_OFFSET))(this);
		}

		::InControl::InputDeviceDriverType GetValueOrDefault(::InControl::InputDeviceDriverType defaultValue)
		{
			return ((::InControl::InputDeviceDriverType(*)(::PVOID, ::InControl::InputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GETVALUEORDEFAULT_OFFSET))(this, defaultValue);
		}

		::InControl::InputDeviceDriverType GetValueOrZero()
		{
			return ((::InControl::InputDeviceDriverType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GETVALUEORZERO_OFFSET))(this);
		}

		::System::Void SetValue(::InControl::InputDeviceDriverType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_SETVALUE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::InControl::OptionalInputDeviceDriverType other)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::OptionalInputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean Equals_2(::InControl::InputDeviceDriverType other)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_EQUALS_2_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::InControl::OptionalInputDeviceDriverType a, ::InControl::OptionalInputDeviceDriverType b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInputDeviceDriverType, ::InControl::OptionalInputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::InControl::OptionalInputDeviceDriverType a, ::InControl::OptionalInputDeviceDriverType b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInputDeviceDriverType, ::InControl::OptionalInputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_INEQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality_1(::InControl::OptionalInputDeviceDriverType a, ::InControl::InputDeviceDriverType b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInputDeviceDriverType, ::InControl::InputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_EQUALITY_1_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality_1(::InControl::OptionalInputDeviceDriverType a, ::InControl::InputDeviceDriverType b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInputDeviceDriverType, ::InControl::InputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_INEQUALITY_1_OFFSET))(a, b);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 h1, ::System::Int32 h2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_COMBINEHASHCODES_OFFSET))(h1, h2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_TOSTRING_OFFSET))(this);
		}

		static ::InControl::OptionalInputDeviceDriverType op_Implicit(::InControl::InputDeviceDriverType value)
		{
			return ((::InControl::OptionalInputDeviceDriverType(*)(::InControl::InputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_IMPLICIT_OFFSET))(value);
		}

		static ::InControl::InputDeviceDriverType op_Explicit(::InControl::OptionalInputDeviceDriverType optional)
		{
			return ((::InControl::InputDeviceDriverType(*)(::InControl::OptionalInputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_EXPLICIT_OFFSET))(optional);
		}
	};
}
