#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_C2ED712377151494_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x5E7E40)

inline static constexpr unsigned int Struct_2_C2ED712377151494_TypeDefinitionIndex = 65530;

struct alignas(4) Struct_2_C2ED712377151494
{
	::System::Int32 Field_2_2; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_0; // 0x18

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C2ED712377151494_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
