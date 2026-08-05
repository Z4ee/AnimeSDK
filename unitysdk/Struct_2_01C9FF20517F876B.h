#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_01C9FF20517F876B_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x7F5EB0)

inline static constexpr unsigned int Struct_2_01C9FF20517F876B_TypeDefinitionIndex = 69265;

struct alignas(4) Struct_2_01C9FF20517F876B
{
	::System::UInt32 Field_2_0; // 0x10
	::System::Boolean Field_2_7; // 0x14
	::System::Boolean Field_2_6; // 0x15

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_01C9FF20517F876B_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
