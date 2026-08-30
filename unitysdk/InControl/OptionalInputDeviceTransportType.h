#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceTransportType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_CLEAR_OFFSET UNITYSDK_OFFSET(0x3A2FA40)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x1497FDB0)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3A2FA80)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x3A2FAA0)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3A2FB60)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3A2FAC0)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x3A2FA50)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GETVALUEORZERO_OFFSET UNITYSDK_OFFSET(0x3A2FA60)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GET_HASNOVALUE_OFFSET UNITYSDK_OFFSET(0x3A2F740)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x182E0)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x3A2FAF0)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1497FD80)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1497FD40)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1497FEC0)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x14945EA0)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1497FD90)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1497FD60)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x3A2F9C0)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x3A2F9C0)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3A2FB70)
#define INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x3A2F9C0)

namespace InControl
{
	inline static constexpr unsigned int OptionalInputDeviceTransportType_TypeDefinitionIndex = 39610;

	struct alignas(2) OptionalInputDeviceTransportType
	{
		::System::Boolean hasValue; // 0x10
		::InControl::InputDeviceTransportType value; // 0x12

		::System::Void _ctor(::InControl::InputDeviceTransportType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_HasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GET_HASVALUE_OFFSET))(this);
		}

		::System::Boolean get_HasNoValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GET_HASNOVALUE_OFFSET))(this);
		}

		::InControl::InputDeviceTransportType get_Value()
		{
			return ((::InControl::InputDeviceTransportType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::InControl::InputDeviceTransportType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_CLEAR_OFFSET))(this);
		}

		::InControl::InputDeviceTransportType GetValueOrDefault(::InControl::InputDeviceTransportType a1)
		{
			return ((::InControl::InputDeviceTransportType(*)(::PVOID, ::InControl::InputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GETVALUEORDEFAULT_OFFSET))(this, a1);
		}

		::InControl::InputDeviceTransportType GetValueOrZero()
		{
			return ((::InControl::InputDeviceTransportType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GETVALUEORZERO_OFFSET))(this);
		}

		::System::Void SetValue(::InControl::InputDeviceTransportType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_SETVALUE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::InControl::OptionalInputDeviceTransportType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::OptionalInputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::InControl::InputDeviceTransportType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_EQUALS_2_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::InControl::OptionalInputDeviceTransportType a1, ::InControl::OptionalInputDeviceTransportType a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInputDeviceTransportType, ::InControl::OptionalInputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::InControl::OptionalInputDeviceTransportType a1, ::InControl::OptionalInputDeviceTransportType a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInputDeviceTransportType, ::InControl::OptionalInputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality_1(::InControl::OptionalInputDeviceTransportType a1, ::InControl::InputDeviceTransportType a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInputDeviceTransportType, ::InControl::InputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_EQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality_1(::InControl::OptionalInputDeviceTransportType a1, ::InControl::InputDeviceTransportType a2)
		{
			return ((::System::Boolean(*)(::InControl::OptionalInputDeviceTransportType, ::InControl::InputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_INEQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_COMBINEHASHCODES_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_TOSTRING_OFFSET))(this);
		}

		static ::InControl::OptionalInputDeviceTransportType op_Implicit(::InControl::InputDeviceTransportType a1)
		{
			return ((::InControl::OptionalInputDeviceTransportType(*)(::InControl::InputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::InControl::InputDeviceTransportType op_Explicit(::InControl::OptionalInputDeviceTransportType a1)
		{
			return ((::InControl::InputDeviceTransportType(*)(::InControl::OptionalInputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_OPTIONALINPUTDEVICETRANSPORTTYPE_OP_EXPLICIT_OFFSET))(a1);
		}
	};
}
