#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TimelineControlGameCharacterVisionConfig_TypeDefinitionIndex = 39516;

	struct alignas(4) TimelineControlGameCharacterVisionConfig
	{
		::System::Single VisionAngle; // 0x10
		::System::Single VisionLength; // 0x14
	};
}
