#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_EF6DD2BA693AC4E5_METHOD_2_0A34C957A51B8DD7_OFFSET UNITYSDK_OFFSET(0x3B91440)

inline static constexpr unsigned int Struct_2_EF6DD2BA693AC4E5_TypeDefinitionIndex = 6269;

struct alignas(4) Struct_2_EF6DD2BA693AC4E5
{
	::System::Single DKEJJDHONBA; // 0x10
	::System::Single GAGIMHCEEAB; // 0x14
	::System::Single POGBHIAIKIC; // 0x18
	::System::Int32 NFMAONMNHJN; // 0x1C

	::System::Single Method_2_0A34C957A51B8DD7(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_EF6DD2BA693AC4E5_METHOD_2_0A34C957A51B8DD7_OFFSET))(this, a1);
	}
};
