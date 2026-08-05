#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E216A78B21524381.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_F213AC3D3FBF57BC__CTOR_OFFSET UNITYSDK_OFFSET(0x753C30)

inline static constexpr unsigned int Struct_2_F213AC3D3FBF57BC_TypeDefinitionIndex = 42791;

struct alignas(1) Struct_2_F213AC3D3FBF57BC
{
	::Struct_2_E216A78B21524381 Field_2_0; // 0x10

	::System::Void _ctor(::Struct_2_E216A78B21524381& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_E216A78B21524381&))((::PBYTE)hIl2Cpp + STRUCT_2_F213AC3D3FBF57BC__CTOR_OFFSET))(this, a1);
	}
};
