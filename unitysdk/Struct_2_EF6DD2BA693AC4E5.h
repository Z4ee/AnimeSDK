#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_EF6DD2BA693AC4E5_METHOD_2_0A34C957A51B8DD7_OFFSET UNITYSDK_OFFSET(0x20F3F30)

inline static constexpr unsigned int Struct_2_EF6DD2BA693AC4E5_TypeDefinitionIndex = 8576;

struct alignas(4) Struct_2_EF6DD2BA693AC4E5
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x1C

	::System::Single Method_2_0A34C957A51B8DD7(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_EF6DD2BA693AC4E5_METHOD_2_0A34C957A51B8DD7_OFFSET))(this, a1);
	}
};
