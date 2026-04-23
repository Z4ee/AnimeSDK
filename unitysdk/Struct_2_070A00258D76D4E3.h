#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0348183E3473943B.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_070A00258D76D4E3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22B0C30)
#define STRUCT_2_070A00258D76D4E3_EQUALS_OFFSET UNITYSDK_OFFSET(0x22B0AB0)
#define STRUCT_2_070A00258D76D4E3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22B0C40)
#define STRUCT_2_070A00258D76D4E3__CTOR_OFFSET UNITYSDK_OFFSET(0x22B0A60)
#define STRUCT_2_070A00258D76D4E3___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x22B0CB0)
#define STRUCT_2_070A00258D76D4E3___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22B0D40)

inline static constexpr unsigned int Struct_2_070A00258D76D4E3_TypeDefinitionIndex = 34186;

struct alignas(4) Struct_2_070A00258D76D4E3
{
	::Struct_2_0348183E3473943B Field_2_0; // 0x10
	::Struct_2_0348183E3473943B Field_2_1; // 0x34

	::System::Void _ctor(::Struct_2_0348183E3473943B a1, ::Struct_2_0348183E3473943B a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_0348183E3473943B, ::Struct_2_0348183E3473943B))((::PBYTE)hIl2Cpp + STRUCT_2_070A00258D76D4E3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Equals(::Struct_2_070A00258D76D4E3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_070A00258D76D4E3))((::PBYTE)hIl2Cpp + STRUCT_2_070A00258D76D4E3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_070A00258D76D4E3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_070A00258D76D4E3_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_070A00258D76D4E3___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_070A00258D76D4E3___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
