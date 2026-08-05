#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_30B460BA1849BF59_METHOD_2_EAEF6686EBCCE4BA_OFFSET UNITYSDK_OFFSET(0x6CBF80)

inline static constexpr unsigned int Struct_2_30B460BA1849BF59_TypeDefinitionIndex = 68254;

struct alignas(4) Struct_2_30B460BA1849BF59
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_7; // 0x14
	::System::Int32 Field_2_6; // 0x18

	::System::Int32 Method_2_EAEF6686EBCCE4BA(::Struct_2_30B460BA1849BF59 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_30B460BA1849BF59))((::PBYTE)hIl2Cpp + STRUCT_2_30B460BA1849BF59_METHOD_2_EAEF6686EBCCE4BA_OFFSET))(this, a1);
	}
};
