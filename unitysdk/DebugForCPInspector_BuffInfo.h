#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int DebugForCPInspector_BuffInfo_TypeDefinitionIndex = 90766;

struct alignas(4) DebugForCPInspector_BuffInfo
{
	::System::Int32 buffId; // 0x10
	::System::Int32 count; // 0x14
};
