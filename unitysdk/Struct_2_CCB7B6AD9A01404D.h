#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E74F7CE5E58FB517.h"
#include "unitysdk/System/ValueType.h"

class Class_1_6A26BF4A9D9D3AD3;

#define STRUCT_2_CCB7B6AD9A01404D_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x3C9DA0)

inline static constexpr unsigned int Struct_2_CCB7B6AD9A01404D_TypeDefinitionIndex = 19049;

struct alignas(8) Struct_2_CCB7B6AD9A01404D
{
	::System::Int32 Field_2_2; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::Struct_2_E74F7CE5E58FB517 Field_2_0; // 0x18

	::Class_1_6A26BF4A9D9D3AD3* Method_2_24748FC20F375725()
	{
		return ((::Class_1_6A26BF4A9D9D3AD3*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CCB7B6AD9A01404D_METHOD_2_24748FC20F375725_OFFSET))(this);
	}
};
