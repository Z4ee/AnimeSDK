#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define INCONTROL_OPTIONALUINT32_CLEAR_OFFSET UNITYSDK_OFFSET(0x38C73F0)
#define INCONTROL_OPTIONALUINT32_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x133017F0)
#define INCONTROL_OPTIONALUINT32_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x38C79B0)
#define INCONTROL_OPTIONALUINT32_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x38C79D0)
#define INCONTROL_OPTIONALUINT32_EQUALS_OFFSET UNITYSDK_OFFSET(0x38C7BB0)
#define INCONTROL_OPTIONALUINT32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x38C79E0)
#define INCONTROL_OPTIONALUINT32_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x38C7960)
#define INCONTROL_OPTIONALUINT32_GETVALUEORZERO_OFFSET UNITYSDK_OFFSET(0x38C7970)
#define INCONTROL_OPTIONALUINT32_GET_HASNOVALUE_OFFSET UNITYSDK_OFFSET(0x38C7370)
#define INCONTROL_OPTIONALUINT32_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x167D30)
#define INCONTROL_OPTIONALUINT32_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x38C7B40)
#define INCONTROL_OPTIONALUINT32_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x133017C0)
#define INCONTROL_OPTIONALUINT32_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x13301780)
#define INCONTROL_OPTIONALUINT32_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x13301870)
#define INCONTROL_OPTIONALUINT32_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x132E6700)
#define INCONTROL_OPTIONALUINT32_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x133017D0)
#define INCONTROL_OPTIONALUINT32_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x133017A0)
#define INCONTROL_OPTIONALUINT32_SETVALUE_OFFSET UNITYSDK_OFFSET(0x38C78E0)
#define INCONTROL_OPTIONALUINT32_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x38C78E0)
#define INCONTROL_OPTIONALUINT32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x38C7BE0)
#define INCONTROL_OPTIONALUINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x38C78E0)

namespace InControl
{
	inline static constexpr unsigned int OptionalUInt32_TypeDefinitionIndex = 38755;

	struct alignas(4) OptionalUInt32
	{
		::System::Boolean hasValue; // 0x10
		::System::UInt32 value; // 0x14

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_HasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_GET_HASVALUE_OFFSET))(this);
		}

		::System::Boolean get_HasNoValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_GET_HASNOVALUE_OFFSET))(this);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetValueOrDefault(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_GETVALUEORDEFAULT_OFFSET))(this, a1);
		}

		::System::UInt32 GetValueOrZero()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_GETVALUEORZERO_OFFSET))(this);
		}

		::System::Void SetValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_SETVALUE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::InControl::OptionalUInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::OptionalUInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_EQUALS_2_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::InControl::OptionalUInt32 a1, ::InControl::OptionalUInt32 a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalUInt32, ::InControl::OptionalUInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::InControl::OptionalUInt32 a1, ::InControl::OptionalUInt32 a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalUInt32, ::InControl::OptionalUInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality_1(::InControl::OptionalUInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalUInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_OP_EQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality_1(::InControl::OptionalUInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalUInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_OP_INEQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_COMBINEHASHCODES_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_TOSTRING_OFFSET))(this);
		}

		static ::InControl::OptionalUInt32 op_Implicit(::System::UInt32 a1)
		{
			return ((::InControl::OptionalUInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::UInt32 op_Explicit(::InControl::OptionalUInt32 a1)
		{
			return ((::System::UInt32(*)(::InControl::OptionalUInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_OP_EXPLICIT_OFFSET))(a1);
		}
	};
}
