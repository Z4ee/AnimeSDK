#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace Foundation
{
	inline static constexpr unsigned int NapStringInternCacheBackendLRU_Slot_TypeDefinitionIndex = 7782;

	struct alignas(8) NapStringInternCacheBackendLRU_Slot
	{
		::System::UInt64 Hash; // 0x10
		::System::String* Value; // 0x18
		::System::Int32 Prev; // 0x20
		::System::Int32 Next; // 0x24
	};
}
