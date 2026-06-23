#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCullScheduler_SoftPoolEntry_TypeDefinitionIndex = 44490;

	struct alignas(4) NPCCullScheduler_SoftPoolEntry
	{
		::System::Int32 tagID; // 0x10
		::System::Int32 avatarParamID; // 0x14
	};
}
