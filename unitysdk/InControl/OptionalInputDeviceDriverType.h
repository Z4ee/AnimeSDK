#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceDriverType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_CLEAR_OFFSET UNITYSDK_OFFSET(0x38255E0)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x18034B70)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3825680)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x38256A0)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3825610)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x38256C0)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x38255F0)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GETVALUEORZERO_OFFSET UNITYSDK_OFFSET(0x3825600)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GET_HASNOVALUE_OFFSET UNITYSDK_OFFSET(0x38252E0)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x2D770)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x3825570)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x18034B40)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18034B00)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x18034C10)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x17FEA770)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x18034B50)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18034B20)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x3825560)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x3825560)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x38256E0)
#define INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x3825560)

namespace InControl
{
	inline static constexpr unsigned int OptionalInputDeviceDriverType_TypeDefinitionIndex = 37942;

	struct alignas(2) OptionalInputDeviceDriverType
	{
		::System::Boolean hasValue; // 0x10
		::InControl::InputDeviceDriverType value; // 0x12

		::System::Void _ctor(::InControl::InputDeviceDriverType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE__CTOR_OFFSET))(this, a1);
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

		::System::Void set_Value(::InControl::InputDeviceDriverType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_CLEAR_OFFSET))(this);
		}

		::InControl::InputDeviceDriverType GetValueOrDefault(::InControl::InputDeviceDriverType a1)
		{
			return ((::InControl::InputDeviceDriverType(*)(::PVOID, ::InControl::InputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GETVALUEORDEFAULT_OFFSET))(this, a1);
		}

		::InControl::InputDeviceDriverType GetValueOrZero()
		{
			return ((::InControl::InputDeviceDriverType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GETVALUEORZERO_OFFSET))(this);
		}

		::System::Void SetValue(::InControl::InputDeviceDriverType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_SETVALUE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::InControl::OptionalInputDeviceDriverType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::OptionalInputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::InControl::InputDeviceDriverType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_EQUALS_2_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::InControl::OptionalInputDeviceDriverType a1, ::InControl::OptionalInputDeviceDriverType a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInputDeviceDriverType, ::InControl::OptionalInputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::InControl::OptionalInputDeviceDriverType a1, ::InControl::OptionalInputDeviceDriverType a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInputDeviceDriverType, ::InControl::OptionalInputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality_1(::InControl::OptionalInputDeviceDriverType a1, ::InControl::InputDeviceDriverType a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInputDeviceDriverType, ::InControl::InputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_EQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality_1(::InControl::OptionalInputDeviceDriverType a1, ::InControl::InputDeviceDriverType a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInputDeviceDriverType, ::InControl::InputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_INEQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_COMBINEHASHCODES_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_TOSTRING_OFFSET))(this);
		}

		static ::InControl::OptionalInputDeviceDriverType op_Implicit(::InControl::InputDeviceDriverType a1)
		{
			return ((::InControl::OptionalInputDeviceDriverType(*)(::InControl::InputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::InControl::InputDeviceDriverType op_Explicit(::InControl::OptionalInputDeviceDriverType a1)
		{
			return ((::InControl::InputDeviceDriverType(*)(::InControl::OptionalInputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICEDRIVERTYPE_OP_EXPLICIT_OFFSET))(a1);
		}
	};
}
