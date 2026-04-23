#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_019938BC9C50B169_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22B13E0)
#define STRUCT_2_019938BC9C50B169_EQUALS_OFFSET UNITYSDK_OFFSET(0x22B1370)
#define STRUCT_2_019938BC9C50B169_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22B1320)
#define STRUCT_2_019938BC9C50B169_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x22B12D0)
#define STRUCT_2_019938BC9C50B169_METHOD_2_502C0C74DDECD92A_OFFSET UNITYSDK_OFFSET(0x17DD0DA0)
#define STRUCT_2_019938BC9C50B169_METHOD_2_76D287B304B2A633_OFFSET UNITYSDK_OFFSET(0x17DD0E70)
#define STRUCT_2_019938BC9C50B169_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22B1380)
#define STRUCT_2_019938BC9C50B169__CTOR_1_OFFSET UNITYSDK_OFFSET(0x299E0)
#define STRUCT_2_019938BC9C50B169__CTOR_2_OFFSET UNITYSDK_OFFSET(0x16697D0)
#define STRUCT_2_019938BC9C50B169__CTOR_OFFSET UNITYSDK_OFFSET(0x22B1240)
#define STRUCT_2_019938BC9C50B169___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x22B1490)
#define STRUCT_2_019938BC9C50B169___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22B1430)
#define STRUCT_2_019938BC9C50B169___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22B14F0)

inline static constexpr unsigned int Struct_2_019938BC9C50B169_TypeDefinitionIndex = 34397;

struct alignas(4) Struct_2_019938BC9C50B169
{
	::System::UInt32 Field_2_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169__CTOR_2_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_502C0C74DDECD92A(::Struct_2_019938BC9C50B169 a1, ::Struct_2_019938BC9C50B169 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_019938BC9C50B169, ::Struct_2_019938BC9C50B169))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_METHOD_2_502C0C74DDECD92A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_76D287B304B2A633(::Struct_2_019938BC9C50B169 a1, ::Struct_2_019938BC9C50B169 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_019938BC9C50B169, ::Struct_2_019938BC9C50B169))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_METHOD_2_76D287B304B2A633_OFFSET))(a1, a2);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_EQUALS_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Equals_1(::Struct_2_019938BC9C50B169 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_019938BC9C50B169))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
