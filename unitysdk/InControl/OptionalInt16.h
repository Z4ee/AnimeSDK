#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define INCONTROL_OPTIONALINT16_CLEAR_OFFSET UNITYSDK_OFFSET(0x2297A10)
#define INCONTROL_OPTIONALINT16_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x172002E0)
#define INCONTROL_OPTIONALINT16_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2297AB0)
#define INCONTROL_OPTIONALINT16_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x2297AD0)
#define INCONTROL_OPTIONALINT16_EQUALS_OFFSET UNITYSDK_OFFSET(0x2297D80)
#define INCONTROL_OPTIONALINT16_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2297DB0)
#define INCONTROL_OPTIONALINT16_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x2297A20)
#define INCONTROL_OPTIONALINT16_GETVALUEORZERO_OFFSET UNITYSDK_OFFSET(0x2297A30)
#define INCONTROL_OPTIONALINT16_GET_HASNOVALUE_OFFSET UNITYSDK_OFFSET(0x2297710)
#define INCONTROL_OPTIONALINT16_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x2A500)
#define INCONTROL_OPTIONALINT16_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x2297D10)
#define INCONTROL_OPTIONALINT16_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x172002A0)
#define INCONTROL_OPTIONALINT16_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17200260)
#define INCONTROL_OPTIONALINT16_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x17200370)
#define INCONTROL_OPTIONALINT16_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x17200360)
#define INCONTROL_OPTIONALINT16_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x172002C0)
#define INCONTROL_OPTIONALINT16_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17200280)
#define INCONTROL_OPTIONALINT16_SETVALUE_OFFSET UNITYSDK_OFFSET(0x2297990)
#define INCONTROL_OPTIONALINT16_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x2297990)
#define INCONTROL_OPTIONALINT16_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2297DD0)
#define INCONTROL_OPTIONALINT16__CTOR_OFFSET UNITYSDK_OFFSET(0x2297990)

namespace InControl
{
	inline static constexpr unsigned int OptionalInt16_TypeDefinitionIndex = 37212;

	struct alignas(2) OptionalInt16
	{
		::System::Boolean hasValue; // 0x10
		::System::Int16 value; // 0x12

		::System::Void _ctor(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16__CTOR_OFFSET))(this, value);
		}

		::System::Boolean get_HasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_GET_HASVALUE_OFFSET))(this);
		}

		::System::Boolean get_HasNoValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_GET_HASNOVALUE_OFFSET))(this);
		}

		::System::Int16 get_Value()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_CLEAR_OFFSET))(this);
		}

		::System::Int16 GetValueOrDefault(::System::Int16 defaultValue)
		{
			return ((::System::Int16(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_GETVALUEORDEFAULT_OFFSET))(this, defaultValue);
		}

		::System::Int16 GetValueOrZero()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_GETVALUEORZERO_OFFSET))(this);
		}

		::System::Void SetValue(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_SETVALUE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::InControl::OptionalInt16 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::OptionalInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean Equals_2(::System::Int16 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_EQUALS_2_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::InControl::OptionalInt16 a, ::InControl::OptionalInt16 b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInt16, ::InControl::OptionalInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::InControl::OptionalInt16 a, ::InControl::OptionalInt16 b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInt16, ::InControl::OptionalInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_OP_INEQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality_1(::InControl::OptionalInt16 a, ::System::Int16 b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInt16, ::System::Int16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_OP_EQUALITY_1_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality_1(::InControl::OptionalInt16 a, ::System::Int16 b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInt16, ::System::Int16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_OP_INEQUALITY_1_OFFSET))(a, b);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 h1, ::System::Int32 h2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_COMBINEHASHCODES_OFFSET))(h1, h2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_TOSTRING_OFFSET))(this);
		}

		static ::InControl::OptionalInt16 op_Implicit(::System::Int16 value)
		{
			return ((::InControl::OptionalInt16(*)(::System::Int16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_OP_IMPLICIT_OFFSET))(value);
		}

		static ::System::Int16 op_Explicit(::InControl::OptionalInt16 optional)
		{
			return ((::System::Int16(*)(::InControl::OptionalInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_OP_EXPLICIT_OFFSET))(optional);
		}
	};
}
