#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define INCONTROL_OPTIONALUINT32_CLEAR_OFFSET UNITYSDK_OFFSET(0x2297790)
#define INCONTROL_OPTIONALUINT32_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x17200B40)
#define INCONTROL_OPTIONALUINT32_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2297EF0)
#define INCONTROL_OPTIONALUINT32_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x2297F10)
#define INCONTROL_OPTIONALUINT32_EQUALS_OFFSET UNITYSDK_OFFSET(0x22980F0)
#define INCONTROL_OPTIONALUINT32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2297F20)
#define INCONTROL_OPTIONALUINT32_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x2297EA0)
#define INCONTROL_OPTIONALUINT32_GETVALUEORZERO_OFFSET UNITYSDK_OFFSET(0x2297EB0)
#define INCONTROL_OPTIONALUINT32_GET_HASNOVALUE_OFFSET UNITYSDK_OFFSET(0x2297710)
#define INCONTROL_OPTIONALUINT32_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x2A500)
#define INCONTROL_OPTIONALUINT32_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x2298080)
#define INCONTROL_OPTIONALUINT32_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x17200B00)
#define INCONTROL_OPTIONALUINT32_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17200AC0)
#define INCONTROL_OPTIONALUINT32_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x17200BC0)
#define INCONTROL_OPTIONALUINT32_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x171E0DF0)
#define INCONTROL_OPTIONALUINT32_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x17200B20)
#define INCONTROL_OPTIONALUINT32_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17200AE0)
#define INCONTROL_OPTIONALUINT32_SETVALUE_OFFSET UNITYSDK_OFFSET(0x2297E20)
#define INCONTROL_OPTIONALUINT32_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x2297E20)
#define INCONTROL_OPTIONALUINT32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2298120)
#define INCONTROL_OPTIONALUINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x2297E20)

namespace InControl
{
	inline static constexpr unsigned int OptionalUInt32_TypeDefinitionIndex = 37215;

	struct alignas(4) OptionalUInt32
	{
		::System::Boolean hasValue; // 0x10
		::System::UInt32 value; // 0x14

		::System::Void _ctor(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32__CTOR_OFFSET))(this, value);
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

		::System::Void set_Value(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetValueOrDefault(::System::UInt32 defaultValue)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_GETVALUEORDEFAULT_OFFSET))(this, defaultValue);
		}

		::System::UInt32 GetValueOrZero()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_GETVALUEORZERO_OFFSET))(this);
		}

		::System::Void SetValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_SETVALUE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::InControl::OptionalUInt32 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::OptionalUInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean Equals_2(::System::UInt32 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_EQUALS_2_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::InControl::OptionalUInt32 a, ::InControl::OptionalUInt32 b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalUInt32, ::InControl::OptionalUInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::InControl::OptionalUInt32 a, ::InControl::OptionalUInt32 b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalUInt32, ::InControl::OptionalUInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_OP_INEQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality_1(::InControl::OptionalUInt32 a, ::System::UInt32 b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalUInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_OP_EQUALITY_1_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality_1(::InControl::OptionalUInt32 a, ::System::UInt32 b)
		{
			return ((::System::Boolean(*)(::InControl::OptionalUInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_OP_INEQUALITY_1_OFFSET))(a, b);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 h1, ::System::Int32 h2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_COMBINEHASHCODES_OFFSET))(h1, h2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_TOSTRING_OFFSET))(this);
		}

		static ::InControl::OptionalUInt32 op_Implicit(::System::UInt32 value)
		{
			return ((::InControl::OptionalUInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_OP_IMPLICIT_OFFSET))(value);
		}

		static ::System::UInt32 op_Explicit(::InControl::OptionalUInt32 optional)
		{
			return ((::System::UInt32(*)(::InControl::OptionalUInt32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALUINT32_OP_EXPLICIT_OFFSET))(optional);
		}
	};
}
