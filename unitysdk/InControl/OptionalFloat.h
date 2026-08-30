#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define INCONTROL_OPTIONALFLOAT_APPROXIMATELYEQUALS_OFFSET UNITYSDK_OFFSET(0x3B57E10)
#define INCONTROL_OPTIONALFLOAT_CLEAR_OFFSET UNITYSDK_OFFSET(0x3B57C60)
#define INCONTROL_OPTIONALFLOAT_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x1B56F9B0)
#define INCONTROL_OPTIONALFLOAT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B57CF0)
#define INCONTROL_OPTIONALFLOAT_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x3B57D40)
#define INCONTROL_OPTIONALFLOAT_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B57C90)
#define INCONTROL_OPTIONALFLOAT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B57D80)
#define INCONTROL_OPTIONALFLOAT_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x3B57C70)
#define INCONTROL_OPTIONALFLOAT_GETVALUEORZERO_OFFSET UNITYSDK_OFFSET(0x3B57C80)
#define INCONTROL_OPTIONALFLOAT_GET_HASNOVALUE_OFFSET UNITYSDK_OFFSET(0x3B57BE0)
#define INCONTROL_OPTIONALFLOAT_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x2FC10)
#define INCONTROL_OPTIONALFLOAT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x3B57BF0)
#define INCONTROL_OPTIONALFLOAT_ISAPPROXIMATELYEQUAL_OFFSET UNITYSDK_OFFSET(0x1B56F820)
#define INCONTROL_OPTIONALFLOAT_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1B56F930)
#define INCONTROL_OPTIONALFLOAT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B56F890)
#define INCONTROL_OPTIONALFLOAT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1B56FA60)
#define INCONTROL_OPTIONALFLOAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B56FA50)
#define INCONTROL_OPTIONALFLOAT_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1B56F970)
#define INCONTROL_OPTIONALFLOAT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B56F8E0)
#define INCONTROL_OPTIONALFLOAT_SETVALUE_OFFSET UNITYSDK_OFFSET(0x3B57BD0)
#define INCONTROL_OPTIONALFLOAT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x3B57BD0)
#define INCONTROL_OPTIONALFLOAT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B57DB0)
#define INCONTROL_OPTIONALFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x3B57BD0)

namespace InControl
{
	inline static constexpr unsigned int OptionalFloat_TypeDefinitionIndex = 39608;

	struct alignas(4) OptionalFloat
	{
		// static const ::System::Single epsilon; // 0x0
		::System::Boolean hasValue; // 0x10
		::System::Single value; // 0x14

		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT__CTOR_OFFSET))(this, a1);
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

		::System::Void set_Value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_CLEAR_OFFSET))(this);
		}

		::System::Single GetValueOrDefault(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_GETVALUEORDEFAULT_OFFSET))(this, a1);
		}

		::System::Single GetValueOrZero()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_GETVALUEORZERO_OFFSET))(this);
		}

		::System::Void SetValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_SETVALUE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::InControl::OptionalFloat a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::OptionalFloat))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_EQUALS_2_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::InControl::OptionalFloat a1, ::InControl::OptionalFloat a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalFloat, ::InControl::OptionalFloat))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::InControl::OptionalFloat a1, ::InControl::OptionalFloat a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalFloat, ::InControl::OptionalFloat))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality_1(::InControl::OptionalFloat a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalFloat, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_OP_EQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality_1(::InControl::OptionalFloat a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalFloat, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_OP_INEQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_COMBINEHASHCODES_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_TOSTRING_OFFSET))(this);
		}

		static ::InControl::OptionalFloat op_Implicit(::System::Single a1)
		{
			return ((::InControl::OptionalFloat(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Single op_Explicit(::InControl::OptionalFloat a1)
		{
			return ((::System::Single(*)(::InControl::OptionalFloat))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_OP_EXPLICIT_OFFSET))(a1);
		}

		static ::System::Boolean IsApproximatelyEqual(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_ISAPPROXIMATELYEQUAL_OFFSET))(a1, a2);
		}

		::System::Boolean ApproximatelyEquals(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALFLOAT_APPROXIMATELYEQUALS_OFFSET))(this, a1);
		}
	};
}
