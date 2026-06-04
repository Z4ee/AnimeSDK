#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_1.h"
#include "unitysdk/Struct_2_980725853FAC52A9.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_AAD4F4215611A944_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x13E130)
#define STRUCT_2_AAD4F4215611A944_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x13E100)
#define STRUCT_2_AAD4F4215611A944_EQUALS_OFFSET UNITYSDK_OFFSET(0x13E0B0)
#define STRUCT_2_AAD4F4215611A944_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13E0A0)
#define STRUCT_2_AAD4F4215611A944_GET_INSTANCEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x25370)
#define STRUCT_2_AAD4F4215611A944_GET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x13E040)
#define STRUCT_2_AAD4F4215611A944_GET_ROLEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define STRUCT_2_AAD4F4215611A944_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xBF52EF0)
#define STRUCT_2_AAD4F4215611A944_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xBF52EB0)
#define STRUCT_2_AAD4F4215611A944_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x13E080)
#define STRUCT_2_AAD4F4215611A944_SET_INSTANCEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x13E060)
#define STRUCT_2_AAD4F4215611A944_SET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x13E050)
#define STRUCT_2_AAD4F4215611A944_SET_ROLEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define STRUCT_2_AAD4F4215611A944_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13E070)
#define STRUCT_2_AAD4F4215611A944__CTOR_OFFSET UNITYSDK_OFFSET(0x13E020)

inline static constexpr unsigned int Struct_2_AAD4F4215611A944_TypeDefinitionIndex = 48518;

struct alignas(4) Struct_2_AAD4F4215611A944
{
	::Struct_2_019938BC9C50B169_1 _RoleIdentifier_k__BackingField; // 0x10
	::Struct_2_BC950E36747FB4C9 _PrototypeIdentifier_k__BackingField; // 0x14
	::Struct_2_980725853FAC52A9 _InstanceIdentifier_k__BackingField; // 0x1C

	::System::Void _ctor(::Struct_2_019938BC9C50B169_1& a1, ::Struct_2_BC950E36747FB4C9& a2, ::Struct_2_980725853FAC52A9& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&, ::Struct_2_BC950E36747FB4C9&, ::Struct_2_980725853FAC52A9&))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A944__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_019938BC9C50B169_1 get_RoleIdentifier()
	{
		return ((::Struct_2_019938BC9C50B169_1(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A944_GET_ROLEIDENTIFIER_OFFSET))(this);
	}

	::System::Void set_RoleIdentifier(::Struct_2_019938BC9C50B169_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_1))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A944_SET_ROLEIDENTIFIER_OFFSET))(this, a1);
	}

	::Struct_2_BC950E36747FB4C9 get_PrototypeIdentifier()
	{
		return ((::Struct_2_BC950E36747FB4C9(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A944_GET_PROTOTYPEIDENTIFIER_OFFSET))(this);
	}

	::System::Void set_PrototypeIdentifier(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A944_SET_PROTOTYPEIDENTIFIER_OFFSET))(this, a1);
	}

	::Struct_2_980725853FAC52A9 get_InstanceIdentifier()
	{
		return ((::Struct_2_980725853FAC52A9(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A944_GET_INSTANCEIDENTIFIER_OFFSET))(this);
	}

	::System::Void set_InstanceIdentifier(::Struct_2_980725853FAC52A9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_980725853FAC52A9))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A944_SET_INSTANCEIDENTIFIER_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A944_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A944_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_AAD4F4215611A944 a1, ::Struct_2_AAD4F4215611A944 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_AAD4F4215611A944, ::Struct_2_AAD4F4215611A944))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A944_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_AAD4F4215611A944 a1, ::Struct_2_AAD4F4215611A944 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_AAD4F4215611A944, ::Struct_2_AAD4F4215611A944))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A944_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A944_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A944_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_AAD4F4215611A944 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_AAD4F4215611A944))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A944_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::Struct_2_019938BC9C50B169_1& a1, ::Struct_2_BC950E36747FB4C9& a2, ::Struct_2_980725853FAC52A9& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&, ::Struct_2_BC950E36747FB4C9&, ::Struct_2_980725853FAC52A9&))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A944_DECONSTRUCT_OFFSET))(this, a1, a2, a3);
	}
};
