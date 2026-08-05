#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_0A39902BE5398D68_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x9C63F0)

inline static constexpr unsigned int Struct_2_0A39902BE5398D68_TypeDefinitionIndex = 92555;

struct alignas(1) Struct_2_0A39902BE5398D68
{
	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0A39902BE5398D68_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
