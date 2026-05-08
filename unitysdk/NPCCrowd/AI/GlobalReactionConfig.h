#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Unreal { class SerializableGameplayTag; }

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int GlobalReactionConfig_TypeDefinitionIndex = 76472;

	struct alignas(8) GlobalReactionConfig
	{
		::Foundation::Unreal::SerializableGameplayTag* ConfigBanReactionTag; // 0x10
		::Foundation::Unreal::SerializableGameplayTag* IKBanReactionTag; // 0x18
	};
}
