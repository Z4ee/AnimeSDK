#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_BA11C53F4116F707_METHOD_2_E923266A4538CFD9_OFFSET UNITYSDK_OFFSET(0x3A4F9D0)

inline static constexpr unsigned int Struct_2_BA11C53F4116F707_TypeDefinitionIndex = 6270;

struct alignas(4) Struct_2_BA11C53F4116F707
{
	::System::Single DKEJJDHONBA; // 0x10
	::System::Single GAGIMHCEEAB; // 0x14
	::System::Single POGBHIAIKIC; // 0x18
	::System::Single KBHPEFCGECE; // 0x1C
	::System::Int32 NFMAONMNHJN; // 0x20

	::System::Single Method_2_E923266A4538CFD9(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_BA11C53F4116F707_METHOD_2_E923266A4538CFD9_OFFSET))(this, a1);
	}
};
