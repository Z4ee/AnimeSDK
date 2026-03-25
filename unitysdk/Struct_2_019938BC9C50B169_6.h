#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_019938BC9C50B169_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA8F100)
#define STRUCT_2_019938BC9C50B169_6_EQUALS_OFFSET UNITYSDK_OFFSET(0xA8F0B0)
#define STRUCT_2_019938BC9C50B169_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA8F110)
#define STRUCT_2_019938BC9C50B169_6_GET_ID_OFFSET UNITYSDK_OFFSET(0x59D0)
#define STRUCT_2_019938BC9C50B169_6_METHOD_2_502C0C74DDECD92A_1_OFFSET UNITYSDK_OFFSET(0xD1ADEE0)
#define STRUCT_2_019938BC9C50B169_6_METHOD_2_502C0C74DDECD92A_OFFSET UNITYSDK_OFFSET(0xD1ADE60)
#define STRUCT_2_019938BC9C50B169_6__CTOR_OFFSET UNITYSDK_OFFSET(0x29130)
#define STRUCT_2_019938BC9C50B169_6___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA8F240)
#define STRUCT_2_019938BC9C50B169_6___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA8F2A0)

inline static constexpr unsigned int Struct_2_019938BC9C50B169_6_TypeDefinitionIndex = 41998;

struct alignas(4) Struct_2_019938BC9C50B169_6
{
	::System::UInt32 _ID_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_6__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_6_GET_ID_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_019938BC9C50B169_6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_019938BC9C50B169_6))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_6_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_502C0C74DDECD92A(::Struct_2_019938BC9C50B169_6 a1, ::Struct_2_019938BC9C50B169_6 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_019938BC9C50B169_6, ::Struct_2_019938BC9C50B169_6))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_6_METHOD_2_502C0C74DDECD92A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_502C0C74DDECD92A_1(::Struct_2_019938BC9C50B169_6 a1, ::Struct_2_019938BC9C50B169_6 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_019938BC9C50B169_6, ::Struct_2_019938BC9C50B169_6))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_6_METHOD_2_502C0C74DDECD92A_1_OFFSET))(a1, a2);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_6___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_6___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
