#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_D80CFC559D4BCFA6_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x3B7E560)

inline static constexpr unsigned int Struct_2_D80CFC559D4BCFA6_TypeDefinitionIndex = 41739;

struct alignas(4) Struct_2_D80CFC559D4BCFA6
{
	::System::Boolean PLFHGJJCOHJ; // 0x10
	::System::Int32 BHAMKIAKGEB; // 0x14
	::System::Int32 KGCDOPFEHBF; // 0x18
	::System::Single GAFENHHEBPG; // 0x1C
	::System::Int32 MGBDFKKMNOL; // 0x20
	::System::Single GJKLJFEKNHI; // 0x24
	::System::Boolean FGCFCPJLOHA; // 0x28
	::System::Single JAPBBDENKGM; // 0x2C
	::System::Boolean OJCGODCHLGC; // 0x30

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D80CFC559D4BCFA6_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}
};
