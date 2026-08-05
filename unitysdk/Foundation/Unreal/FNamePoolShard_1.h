#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FNameEntryAllocator.h"
#include "unitysdk/Foundation/Unreal/FNameSlot.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FNamePoolShard_1_TypeDefinitionIndex = 8851;

	template <typename T>
	struct FNamePoolShard_1
	{
		T _lock; // 0x0
		::System::UInt32 _usedSlots; // 0x0
		::System::UInt32 _capacityMask; // 0x0
		::Foundation::Unreal::FNameSlot* _slots; // 0x0
		::Foundation::Unreal::FNameEntryAllocator* _allocator; // 0x0
	};
}
