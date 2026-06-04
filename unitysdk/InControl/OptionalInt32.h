#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define INCONTROL_OPTIONALINT32_CLEAR_OFFSET UNITYSDK_OFFSET(0x3825360)
#define INCONTROL_OPTIONALINT32_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x18035440)
#define INCONTROL_OPTIONALINT32_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3825AE0)
#define INCONTROL_OPTIONALINT32_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x3825B00)
#define INCONTROL_OPTIONALINT32_EQUALS_OFFSET UNITYSDK_OFFSET(0x3825AB0)
#define INCONTROL_OPTIONALINT32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3825B10)
#define INCONTROL_OPTIONALINT32_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x3825A90)
#define INCONTROL_OPTIONALINT32_GETVALUEORZERO_OFFSET UNITYSDK_OFFSET(0x3825AA0)
#define INCONTROL_OPTIONALINT32_GET_HASNOVALUE_OFFSET UNITYSDK_OFFSET(0x38252E0)
#define INCONTROL_OPTIONALINT32_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x2D770)
#define INCONTROL_OPTIONALINT32_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x3825A20)
#define INCONTROL_OPTIONALINT32_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x18035410)
#define INCONTROL_OPTIONALINT32_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x180353D0)
#define INCONTROL_OPTIONALINT32_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x180354D0)
#define INCONTROL_OPTIONALINT32_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x180354C0)
#define INCONTROL_OPTIONALINT32_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x18035420)
#define INCONTROL_OPTIONALINT32_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x180353F0)
#define INCONTROL_OPTIONALINT32_SETVALUE_OFFSET UNITYSDK_OFFSET(0x3825A10)
#define INCONTROL_OPTIONALINT32_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x3825A10)
#define INCONTROL_OPTIONALINT32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3825B30)
#define INCONTROL_OPTIONALINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x3825A10)

namespace InControl
{
	inline static constexpr unsigned int OptionalInt32_TypeDefinitionIndex = 37945;

	struct alignas(4) OptionalInt32
	{
		::System::Boolean hasValue; // 0x10
		::System::Int32 value; // 0x14

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_HasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_GET_HASVALUE_OFFSET))(this);
		}

		::System::Boolean get_HasNoValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_GET_HASNOVALUE_OFFSET))(this);
		}

		::System::Int32 get_Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_CLEAR_OFFSET))(this);
		}

		::System::Int32 GetValueOrDefault(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_GETVALUEORDEFAULT_OFFSET))(this, a1);
		}

		::System::Int32 GetValueOrZero()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_GETVALUEORZERO_OFFSET))(this);
		}

		::System::Void SetValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_SETVALUE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::InControl::OptionalInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::OptionalInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_EQUALS_2_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::InControl::OptionalInt32 a1, ::InControl::OptionalInt32 a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInt32, ::InControl::OptionalInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::InControl::OptionalInt32 a1, ::InControl::OptionalInt32 a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInt32, ::InControl::OptionalInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality_1(::InControl::OptionalInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInt32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_OP_EQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality_1(::InControl::OptionalInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInt32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_OP_INEQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_COMBINEHASHCODES_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_TOSTRING_OFFSET))(this);
		}

		static ::InControl::OptionalInt32 op_Implicit(::System::Int32 a1)
		{
			return ((::InControl::OptionalInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Int32 op_Explicit(::InControl::OptionalInt32 a1)
		{
			return ((::System::Int32(*)(::InControl::OptionalInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT32_OP_EXPLICIT_OFFSET))(a1);
		}
	};
}
