#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_95E859B5A445CDA1_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x383FA50)

inline static constexpr unsigned int Struct_2_95E859B5A445CDA1_TypeDefinitionIndex = 38449;

struct alignas(8) Struct_2_95E859B5A445CDA1
{
	::System::UInt32 Field_2_0; // 0x10
	::System::Int64 Field_2_1; // 0x18
	::System::Int64 Field_2_2; // 0x20

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95E859B5A445CDA1_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
