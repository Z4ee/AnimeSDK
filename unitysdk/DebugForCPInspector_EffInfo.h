#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

inline static constexpr unsigned int DebugForCPInspector_EffInfo_TypeDefinitionIndex = 90767;

struct alignas(8) DebugForCPInspector_EffInfo
{
	::System::String* path; // 0x10
	::System::Int32 count; // 0x18
};
