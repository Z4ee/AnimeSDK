#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_A4B8DC024BB982A7_METHOD_2_1C9FEC475D186B28_OFFSET UNITYSDK_OFFSET(0x82DD40)

inline static constexpr unsigned int Struct_2_A4B8DC024BB982A7_TypeDefinitionIndex = 62973;

struct alignas(4) Struct_2_A4B8DC024BB982A7
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Boolean Method_2_1C9FEC475D186B28()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A4B8DC024BB982A7_METHOD_2_1C9FEC475D186B28_OFFSET))(this);
	}
};
