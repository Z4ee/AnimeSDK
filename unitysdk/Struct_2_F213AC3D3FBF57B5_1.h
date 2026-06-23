#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D37445D6054F848B.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_F213AC3D3FBF57B5_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x798E20)
#define STRUCT_2_F213AC3D3FBF57B5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x2AD810)

inline static constexpr unsigned int Struct_2_F213AC3D3FBF57B5_1_TypeDefinitionIndex = 43881;

struct alignas(8) Struct_2_F213AC3D3FBF57B5_1
{
	::Struct_2_D37445D6054F848B Field_2_0; // 0x10

	::System::Void _ctor(::Struct_2_D37445D6054F848B a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D37445D6054F848B))((::PBYTE)hIl2Cpp + STRUCT_2_F213AC3D3FBF57B5_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F213AC3D3FBF57B5_1_DISPOSE_OFFSET))(this);
	}
};
