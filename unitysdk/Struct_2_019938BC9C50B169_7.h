#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_019938BC9C50B169_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x14E9B20)
#define STRUCT_2_019938BC9C50B169_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x14E9AD0)
#define STRUCT_2_019938BC9C50B169_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x14E9B30)
#define STRUCT_2_019938BC9C50B169_7_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x59D0)
#define STRUCT_2_019938BC9C50B169_7_METHOD_2_502C0C74DDECD92A_1_OFFSET UNITYSDK_OFFSET(0x118780B0)
#define STRUCT_2_019938BC9C50B169_7_METHOD_2_502C0C74DDECD92A_OFFSET UNITYSDK_OFFSET(0x11878030)
#define STRUCT_2_019938BC9C50B169_7__CTOR_OFFSET UNITYSDK_OFFSET(0x29130)
#define STRUCT_2_019938BC9C50B169_7___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x14E9B80)
#define STRUCT_2_019938BC9C50B169_7___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x14E9BE0)

inline static constexpr unsigned int Struct_2_019938BC9C50B169_7_TypeDefinitionIndex = 42012;

struct alignas(4) Struct_2_019938BC9C50B169_7
{
	::System::UInt32 _WorldLevel_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_WorldLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_GET_WORLDLEVEL_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_019938BC9C50B169_7 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_019938BC9C50B169_7))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_502C0C74DDECD92A(::Struct_2_019938BC9C50B169_7 a1, ::Struct_2_019938BC9C50B169_7 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_019938BC9C50B169_7, ::Struct_2_019938BC9C50B169_7))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_METHOD_2_502C0C74DDECD92A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_502C0C74DDECD92A_1(::Struct_2_019938BC9C50B169_7 a1, ::Struct_2_019938BC9C50B169_7 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_019938BC9C50B169_7, ::Struct_2_019938BC9C50B169_7))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_METHOD_2_502C0C74DDECD92A_1_OFFSET))(a1, a2);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
