#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_61449724F4025E5E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15AB160)
#define STRUCT_2_61449724F4025E5E_EQUALS_OFFSET UNITYSDK_OFFSET(0x15AB0E0)
#define STRUCT_2_61449724F4025E5E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15AB170)
#define STRUCT_2_61449724F4025E5E_GET_ID_OFFSET UNITYSDK_OFFSET(0xD240)
#define STRUCT_2_61449724F4025E5E_GET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x5580)
#define STRUCT_2_61449724F4025E5E_METHOD_2_02FCF18DE027BCF7_1_OFFSET UNITYSDK_OFFSET(0x11DC85B0)
#define STRUCT_2_61449724F4025E5E_METHOD_2_02FCF18DE027BCF7_OFFSET UNITYSDK_OFFSET(0x11DC84E0)
#define STRUCT_2_61449724F4025E5E__CTOR_OFFSET UNITYSDK_OFFSET(0x77400)
#define STRUCT_2_61449724F4025E5E___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x15AB1E0)
#define STRUCT_2_61449724F4025E5E___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15AB230)

inline static constexpr unsigned int Struct_2_61449724F4025E5E_TypeDefinitionIndex = 47978;

struct alignas(4) Struct_2_61449724F4025E5E
{
	::Struct_2_BC950E36747FB4C9 _PrototypeIdentifier_k__BackingField; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x18

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_61449724F4025E5E__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_BC950E36747FB4C9 get_PrototypeIdentifier()
	{
		return ((::Struct_2_BC950E36747FB4C9(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_61449724F4025E5E_GET_PROTOTYPEIDENTIFIER_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_61449724F4025E5E_GET_ID_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_61449724F4025E5E a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_61449724F4025E5E))((::PBYTE)hIl2Cpp + STRUCT_2_61449724F4025E5E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_61449724F4025E5E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_61449724F4025E5E_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_02FCF18DE027BCF7(::Struct_2_61449724F4025E5E a1, ::Struct_2_61449724F4025E5E a2)
	{
		return ((::System::Boolean(*)(::Struct_2_61449724F4025E5E, ::Struct_2_61449724F4025E5E))((::PBYTE)hIl2Cpp + STRUCT_2_61449724F4025E5E_METHOD_2_02FCF18DE027BCF7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_02FCF18DE027BCF7_1(::Struct_2_61449724F4025E5E a1, ::Struct_2_61449724F4025E5E a2)
	{
		return ((::System::Boolean(*)(::Struct_2_61449724F4025E5E, ::Struct_2_61449724F4025E5E))((::PBYTE)hIl2Cpp + STRUCT_2_61449724F4025E5E_METHOD_2_02FCF18DE027BCF7_1_OFFSET))(a1, a2);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_61449724F4025E5E___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_61449724F4025E5E___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
