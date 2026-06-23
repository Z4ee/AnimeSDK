#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_30B460BA1849BF59_METHOD_2_EAEF6686EBCCE4BA_OFFSET UNITYSDK_OFFSET(0x831DC0)

inline static constexpr unsigned int Struct_2_30B460BA1849BF59_TypeDefinitionIndex = 77562;

struct alignas(4) Struct_2_30B460BA1849BF59
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18

	::System::Int32 Method_2_EAEF6686EBCCE4BA(::Struct_2_30B460BA1849BF59 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_30B460BA1849BF59))((::PBYTE)hIl2Cpp + STRUCT_2_30B460BA1849BF59_METHOD_2_EAEF6686EBCCE4BA_OFFSET))(this, a1);
	}
};
