#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define INCONTROL_OPTIONALFLOAT_APPROXIMATELYEQUALS_OFFSET UNITYSDK_OFFSET(0x20C5D00)
#define INCONTROL_OPTIONALFLOAT_CLEAR_OFFSET UNITYSDK_OFFSET(0x20C5B50)
#define INCONTROL_OPTIONALFLOAT_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x15C01F20)
#define INCONTROL_OPTIONALFLOAT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20C5BE0)
#define INCONTROL_OPTIONALFLOAT_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x20C5C30)
#define INCONTROL_OPTIONALFLOAT_EQUALS_OFFSET UNITYSDK_OFFSET(0x20C5B80)
#define INCONTROL_OPTIONALFLOAT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20C5C70)
#define INCONTROL_OPTIONALFLOAT_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x20C5B60)
#define INCONTROL_OPTIONALFLOAT_GETVALUEORZERO_OFFSET UNITYSDK_OFFSET(0x20C5B70)
#define INCONTROL_OPTIONALFLOAT_GET_HASNOVALUE_OFFSET UNITYSDK_OFFSET(0x20C5AD0)
#define INCONTROL_OPTIONALFLOAT_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x29C50)
#define INCONTROL_OPTIONALFLOAT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x20C5AE0)
#define INCONTROL_OPTIONALFLOAT_ISAPPROXIMATELYEQUAL_OFFSET UNITYSDK_OFFSET(0x15C01D90)
#define INCONTROL_OPTIONALFLOAT_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x15C01EA0)
#define INCONTROL_OPTIONALFLOAT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x15C01E00)
#define INCONTROL_OPTIONALFLOAT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x15C01FD0)
#define INCONTROL_OPTIONALFLOAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x15C01FC0)
#define INCONTROL_OPTIONALFLOAT_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x15C01EE0)
#define INCONTROL_OPTIONALFLOAT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x15C01E50)
#define INCONTROL_OPTIONALFLOAT_SETVALUE_OFFSET UNITYSDK_OFFSET(0x20C5AC0)
#define INCONTROL_OPTIONALFLOAT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x20C5AC0)
#define INCONTROL_OPTIONALFLOAT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20C5CA0)
#define INCONTROL_OPTIONALFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x20C5AC0)

namespace InControl
{
	inline static constexpr unsigned int OptionalFloat_TypeDefinitionIndex = 31489;

	struct alignas(4) OptionalFloat
	{
		// static const ::System::Single epsilon; // 0x0
		::System::Boolean hasValue; // 0x10
		::System::Single value; // 0x14

		::System::Void _ctor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT__CTOR_OFFSET))(this, value);
		}

		::System::Boolean get_HasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_GET_HASVALUE_OFFSET))(this);
		}

		::System::Boolean get_HasNoValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_GET_HASNOVALUE_OFFSET))(this);
		}

		::System::Single get_Value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_CLEAR_OFFSET))(this);
		}

		::System::Single GetValueOrDefault(::System::Single defaultValue)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_GETVALUEORDEFAULT_OFFSET))(this, defaultValue);
		}

		::System::Single GetValueOrZero()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_GETVALUEORZERO_OFFSET))(this);
		}

		::System::Void SetValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_SETVALUE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::InControl::OptionalFloat other)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::OptionalFloat))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean Equals_2(::System::Single other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_EQUALS_2_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::InControl::OptionalFloat a, ::InControl::OptionalFloat b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalFloat, ::InControl::OptionalFloat))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::InControl::OptionalFloat a, ::InControl::OptionalFloat b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalFloat, ::InControl::OptionalFloat))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_OP_INEQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality_1(::InControl::OptionalFloat a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalFloat, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_OP_EQUALITY_1_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality_1(::InControl::OptionalFloat a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalFloat, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_OP_INEQUALITY_1_OFFSET))(a, b);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 h1, ::System::Int32 h2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_COMBINEHASHCODES_OFFSET))(h1, h2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_TOSTRING_OFFSET))(this);
		}

		static ::InControl::OptionalFloat op_Implicit(::System::Single value)
		{
			return ((::InControl::OptionalFloat(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_OP_IMPLICIT_OFFSET))(value);
		}

		static ::System::Single op_Explicit(::InControl::OptionalFloat optional)
		{
			return ((::System::Single(*)(::InControl::OptionalFloat))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_OP_EXPLICIT_OFFSET))(optional);
		}

		static ::System::Boolean IsApproximatelyEqual(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_ISAPPROXIMATELYEQUAL_OFFSET))(a, b);
		}

		::System::Boolean ApproximatelyEquals(::System::Single other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_APPROXIMATELYEQUALS_OFFSET))(this, other);
		}
	};
}
