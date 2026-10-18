#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define INCONTROL_OPTIONALUINT16_CLEAR_OFFSET UNITYSDK_OFFSET(0x3C0C7C0)
#define INCONTROL_OPTIONALUINT16_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x1BA6F6B0)
#define INCONTROL_OPTIONALUINT16_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C0C800)
#define INCONTROL_OPTIONALUINT16_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x3C0C820)
#define INCONTROL_OPTIONALUINT16_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C0CC10)
#define INCONTROL_OPTIONALUINT16_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C0C840)
#define INCONTROL_OPTIONALUINT16_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x3C0C7D0)
#define INCONTROL_OPTIONALUINT16_GETVALUEORZERO_OFFSET UNITYSDK_OFFSET(0x3C0C7E0)
#define INCONTROL_OPTIONALUINT16_GET_HASNOVALUE_OFFSET UNITYSDK_OFFSET(0x3C0C4C0)
#define INCONTROL_OPTIONALUINT16_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0xC200)
#define INCONTROL_OPTIONALUINT16_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x3C0CBA0)
#define INCONTROL_OPTIONALUINT16_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1BA6F680)
#define INCONTROL_OPTIONALUINT16_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BA6F640)
#define INCONTROL_OPTIONALUINT16_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1BA6F730)
#define INCONTROL_OPTIONALUINT16_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BA25AA0)
#define INCONTROL_OPTIONALUINT16_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1BA6F690)
#define INCONTROL_OPTIONALUINT16_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1BA6F660)
#define INCONTROL_OPTIONALUINT16_SETVALUE_OFFSET UNITYSDK_OFFSET(0x3C0C740)
#define INCONTROL_OPTIONALUINT16_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x3C0C740)
#define INCONTROL_OPTIONALUINT16_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C0CC40)
#define INCONTROL_OPTIONALUINT16__CTOR_OFFSET UNITYSDK_OFFSET(0x3C0C740)

namespace InControl
{
	inline static constexpr unsigned int OptionalUInt16_TypeDefinitionIndex = 40910;

	struct alignas(2) OptionalUInt16
	{
		::System::Boolean hasValue; // 0x10
		::System::UInt16 value; // 0x12

		::System::Void _ctor(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_HasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_GET_HASVALUE_OFFSET))(this);
		}

		::System::Boolean get_HasNoValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_GET_HASNOVALUE_OFFSET))(this);
		}

		::System::UInt16 get_Value()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_CLEAR_OFFSET))(this);
		}

		::System::UInt16 GetValueOrDefault(::System::UInt16 a1)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_GETVALUEORDEFAULT_OFFSET))(this, a1);
		}

		::System::UInt16 GetValueOrZero()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_GETVALUEORZERO_OFFSET))(this);
		}

		::System::Void SetValue(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_SETVALUE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::InControl::OptionalUInt16 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::OptionalUInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::UInt16 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_EQUALS_2_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::InControl::OptionalUInt16 a1, ::InControl::OptionalUInt16 a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalUInt16, ::InControl::OptionalUInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::InControl::OptionalUInt16 a1, ::InControl::OptionalUInt16 a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalUInt16, ::InControl::OptionalUInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality_1(::InControl::OptionalUInt16 a1, ::System::UInt16 a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalUInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_OP_EQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality_1(::InControl::OptionalUInt16 a1, ::System::UInt16 a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalUInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_OP_INEQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_COMBINEHASHCODES_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_TOSTRING_OFFSET))(this);
		}

		static ::InControl::OptionalUInt16 op_Implicit(::System::UInt16 a1)
		{
			return ((::InControl::OptionalUInt16(*)(::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::UInt16 op_Explicit(::InControl::OptionalUInt16 a1)
		{
			return ((::System::UInt16(*)(::InControl::OptionalUInt16))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT16_OP_EXPLICIT_OFFSET))(a1);
		}
	};
}
