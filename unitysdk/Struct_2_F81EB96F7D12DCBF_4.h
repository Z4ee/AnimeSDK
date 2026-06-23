#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_F81EB96F7D12DCBF_4_METHOD_2_F37D4EBDF7067F90_OFFSET UNITYSDK_OFFSET(0x9B79D0)

inline static constexpr unsigned int Struct_2_F81EB96F7D12DCBF_4_TypeDefinitionIndex = 88551;

struct alignas(4) Struct_2_F81EB96F7D12DCBF_4
{
	::System::UInt32 Field_2_0; // 0x10

	::System::String* Method_2_F37D4EBDF7067F90()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F81EB96F7D12DCBF_4_METHOD_2_F37D4EBDF7067F90_OFFSET))(this);
	}
};
