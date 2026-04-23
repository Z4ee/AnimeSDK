#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_0D34E21C57718B3C_METHOD_2_08F218FCDB10584E_OFFSET UNITYSDK_OFFSET(0x22C72D0)

inline static constexpr unsigned int Struct_2_0D34E21C57718B3C_TypeDefinitionIndex = 8787;

struct alignas(4) Struct_2_0D34E21C57718B3C
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18

	::System::Single Method_2_08F218FCDB10584E(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_0D34E21C57718B3C_METHOD_2_08F218FCDB10584E_OFFSET))(this, a1);
	}
};
