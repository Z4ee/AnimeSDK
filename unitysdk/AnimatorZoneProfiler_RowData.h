#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

inline static constexpr unsigned int AnimatorZoneProfiler_RowData_TypeDefinitionIndex = 49775;

struct alignas(8) AnimatorZoneProfiler_RowData
{
	::System::UInt32 EntityID; // 0x10
	::System::String* Function; // 0x18
	::System::String* Animator; // 0x20
	::System::Double Milliseconds; // 0x28
	::System::Int32 Frame; // 0x30
};
