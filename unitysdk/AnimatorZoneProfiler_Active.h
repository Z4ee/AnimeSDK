#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

inline static constexpr unsigned int AnimatorZoneProfiler_Active_TypeDefinitionIndex = 69372;

struct alignas(8) AnimatorZoneProfiler_Active
{
	::System::Int32 Frame; // 0x10
	::System::UInt32 EntityID; // 0x14
	::System::String* Function; // 0x18
	::System::String* Animator; // 0x20
	::System::Int64 StartTicks; // 0x28
};
