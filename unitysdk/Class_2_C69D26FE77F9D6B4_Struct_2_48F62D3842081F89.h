#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_2_C69D26FE77F9D6B4_STRUCT_2_48F62D3842081F89_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1423D30)

inline static constexpr unsigned int Class_2_C69D26FE77F9D6B4_Struct_2_48F62D3842081F89_TypeDefinitionIndex = 46129;

struct alignas(4) Class_2_C69D26FE77F9D6B4_Struct_2_48F62D3842081F89
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Int32 CompareTo(::Class_2_C69D26FE77F9D6B4_Struct_2_48F62D3842081F89 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_C69D26FE77F9D6B4_Struct_2_48F62D3842081F89))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_STRUCT_2_48F62D3842081F89_COMPARETO_OFFSET))(this, a1);
	}
};
