#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_BC950E36747FB4C9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2D3D20)
#define STRUCT_2_BC950E36747FB4C9_EQUALS_OFFSET UNITYSDK_OFFSET(0x2D3C80)
#define STRUCT_2_BC950E36747FB4C9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2D3D30)
#define STRUCT_2_BC950E36747FB4C9_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define STRUCT_2_BC950E36747FB4C9_GET_SPECIFICPATHIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x59D0)
#define STRUCT_2_BC950E36747FB4C9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x73E20)
#define STRUCT_2_BC950E36747FB4C9__CTOR_OFFSET UNITYSDK_OFFSET(0x73E20)
#define STRUCT_2_BC950E36747FB4C9___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x2D3DA0)
#define STRUCT_2_BC950E36747FB4C9___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2D3DE0)

inline static constexpr unsigned int Struct_2_BC950E36747FB4C9_TypeDefinitionIndex = 47975;

struct alignas(4) Struct_2_BC950E36747FB4C9
{
	::Struct_2_019938BC9C50B169_2 _SpecificPathIdentifier_k__BackingField; // 0x10
	::System::UInt32 _EnhancedID_k__BackingField; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Struct_2_019938BC9C50B169_2 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_2, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9__CTOR_1_OFFSET))(this, a1, a2);
	}

	::Struct_2_019938BC9C50B169_2 get_SpecificPathIdentifier()
	{
		return ((::Struct_2_019938BC9C50B169_2(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_GET_SPECIFICPATHIDENTIFIER_OFFSET))(this);
	}

	::System::UInt32 get_EnhancedID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_GET_ENHANCEDID_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
