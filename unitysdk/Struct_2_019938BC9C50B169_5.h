#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_019938BC9C50B169_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xCD6E0)
#define STRUCT_2_019938BC9C50B169_5_EQUALS_OFFSET UNITYSDK_OFFSET(0xCD680)
#define STRUCT_2_019938BC9C50B169_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xCD6F0)
#define STRUCT_2_019938BC9C50B169_5_GET_ID_OFFSET UNITYSDK_OFFSET(0x59D0)
#define STRUCT_2_019938BC9C50B169_5_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define STRUCT_2_019938BC9C50B169_5_METHOD_2_502C0C74DDECD92A_1_OFFSET UNITYSDK_OFFSET(0x953E0D0)
#define STRUCT_2_019938BC9C50B169_5_METHOD_2_502C0C74DDECD92A_OFFSET UNITYSDK_OFFSET(0x953E050)
#define STRUCT_2_019938BC9C50B169_5__CTOR_OFFSET UNITYSDK_OFFSET(0x73E20)
#define STRUCT_2_019938BC9C50B169_5___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xCD760)
#define STRUCT_2_019938BC9C50B169_5___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xCD7A0)

inline static constexpr unsigned int Struct_2_019938BC9C50B169_5_TypeDefinitionIndex = 47983;

struct alignas(4) Struct_2_019938BC9C50B169_5
{
	::System::UInt32 _ID_k__BackingField; // 0x10
	::System::UInt32 _Level_k__BackingField; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_5_GET_ID_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_5_GET_LEVEL_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_019938BC9C50B169_5 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_019938BC9C50B169_5))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_5_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_502C0C74DDECD92A(::Struct_2_019938BC9C50B169_5 a1, ::Struct_2_019938BC9C50B169_5 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_019938BC9C50B169_5, ::Struct_2_019938BC9C50B169_5))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_5_METHOD_2_502C0C74DDECD92A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_502C0C74DDECD92A_1(::Struct_2_019938BC9C50B169_5 a1, ::Struct_2_019938BC9C50B169_5 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_019938BC9C50B169_5, ::Struct_2_019938BC9C50B169_5))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_5_METHOD_2_502C0C74DDECD92A_1_OFFSET))(a1, a2);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_5___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_5___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
