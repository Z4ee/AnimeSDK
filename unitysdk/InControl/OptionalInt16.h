#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define INCONTROL_OPTIONALINT16_CLEAR_OFFSET UNITYSDK_OFFSET(0x3A2FA40)
#define INCONTROL_OPTIONALINT16_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x149800F0)
#define INCONTROL_OPTIONALINT16_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3A2FC20)
#define INCONTROL_OPTIONALINT16_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x3A2FAA0)
#define INCONTROL_OPTIONALINT16_EQUALS_OFFSET UNITYSDK_OFFSET(0x3A2FBF0)
#define INCONTROL_OPTIONALINT16_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3A2FC40)
#define INCONTROL_OPTIONALINT16_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x3A2FA50)
#define INCONTROL_OPTIONALINT16_GETVALUEORZERO_OFFSET UNITYSDK_OFFSET(0x3A2FA60)
#define INCONTROL_OPTIONALINT16_GET_HASNOVALUE_OFFSET UNITYSDK_OFFSET(0x3A2F740)
#define INCONTROL_OPTIONALINT16_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x182E0)
#define INCONTROL_OPTIONALINT16_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x3A2FB80)
#define INCONTROL_OPTIONALINT16_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x149800C0)
#define INCONTROL_OPTIONALINT16_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x14980080)
#define INCONTROL_OPTIONALINT16_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x14980180)
#define INCONTROL_OPTIONALINT16_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x14980170)
#define INCONTROL_OPTIONALINT16_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x149800D0)
#define INCONTROL_OPTIONALINT16_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x149800A0)
#define INCONTROL_OPTIONALINT16_SETVALUE_OFFSET UNITYSDK_OFFSET(0x3A2F9C0)
#define INCONTROL_OPTIONALINT16_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x3A2F9C0)
#define INCONTROL_OPTIONALINT16_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3A2FC60)
#define INCONTROL_OPTIONALINT16__CTOR_OFFSET UNITYSDK_OFFSET(0x3A2F9C0)

namespace InControl
{
	inline static constexpr unsigned int OptionalInt16_TypeDefinitionIndex = 39611;

	struct alignas(2) OptionalInt16
	{
		::System::Boolean hasValue; // 0x10
		::System::Int16 value; // 0x12

		::System::Void _ctor(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16__CTOR_OFFSET))(this, a1);
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

		::System::Void set_Value(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_CLEAR_OFFSET))(this);
		}

		::System::Int16 GetValueOrDefault(::System::Int16 a1)
		{
			return ((::System::Int16(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_GETVALUEORDEFAULT_OFFSET))(this, a1);
		}

		::System::Int16 GetValueOrZero()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_GETVALUEORZERO_OFFSET))(this);
		}

		::System::Void SetValue(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_SETVALUE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::InControl::OptionalInt16 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::OptionalInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::Int16 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_EQUALS_2_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::InControl::OptionalInt16 a1, ::InControl::OptionalInt16 a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInt16, ::InControl::OptionalInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::InControl::OptionalInt16 a1, ::InControl::OptionalInt16 a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInt16, ::InControl::OptionalInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality_1(::InControl::OptionalInt16 a1, ::System::Int16 a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInt16, ::System::Int16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_OP_EQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality_1(::InControl::OptionalInt16 a1, ::System::Int16 a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInt16, ::System::Int16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_OP_INEQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_COMBINEHASHCODES_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_TOSTRING_OFFSET))(this);
		}

		static ::InControl::OptionalInt16 op_Implicit(::System::Int16 a1)
		{
			return ((::InControl::OptionalInt16(*)(::System::Int16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Int16 op_Explicit(::InControl::OptionalInt16 a1)
		{
			return ((::System::Int16(*)(::InControl::OptionalInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINT16_OP_EXPLICIT_OFFSET))(a1);
		}
	};
}
