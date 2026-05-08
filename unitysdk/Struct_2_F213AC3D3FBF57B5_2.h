#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D37445D6054F848B.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_F213AC3D3FBF57B5_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x815930)
#define STRUCT_2_F213AC3D3FBF57B5_2__CTOR_OFFSET UNITYSDK_OFFSET(0x2E1100)

inline static constexpr unsigned int Struct_2_F213AC3D3FBF57B5_2_TypeDefinitionIndex = 80385;

struct alignas(8) Struct_2_F213AC3D3FBF57B5_2
{
	::Struct_2_D37445D6054F848B Field_2_0; // 0x10

	::System::Void _ctor(::Struct_2_D37445D6054F848B a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D37445D6054F848B))((::PBYTE)hIl2Cpp + STRUCT_2_F213AC3D3FBF57B5_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F213AC3D3FBF57B5_2_DISPOSE_OFFSET))(this);
	}
};
