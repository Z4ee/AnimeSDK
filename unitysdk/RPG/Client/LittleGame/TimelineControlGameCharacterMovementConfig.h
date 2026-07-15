#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TimelineControlGameCharacterMovementConfig_TypeDefinitionIndex = 40323;

	struct alignas(4) TimelineControlGameCharacterMovementConfig
	{
		::System::Single MoveSpeed; // 0x10
	};
}
