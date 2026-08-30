#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0116DF2DF707827A.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_F213AC3D3FBF57B9_GET_INTENT_OFFSET UNITYSDK_OFFSET(0x18E10)
#define STRUCT_2_F213AC3D3FBF57B9__CTOR_OFFSET UNITYSDK_OFFSET(0x18C30)

inline static constexpr unsigned int Struct_2_F213AC3D3FBF57B9_TypeDefinitionIndex = 62248;

struct alignas(4) Struct_2_F213AC3D3FBF57B9
{
	::Struct_2_0116DF2DF707827A _Intent_k__BackingField; // 0x10

	::System::Void _ctor(::Struct_2_0116DF2DF707827A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_0116DF2DF707827A))((::PBYTE)hIl2Cpp + STRUCT_2_F213AC3D3FBF57B9__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_0116DF2DF707827A get_Intent()
	{
		return ((::Struct_2_0116DF2DF707827A(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F213AC3D3FBF57B9_GET_INTENT_OFFSET))(this);
	}
};
