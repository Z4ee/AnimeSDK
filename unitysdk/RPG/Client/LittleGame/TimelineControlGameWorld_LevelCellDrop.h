#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TimelineControlGameWorld_LevelCellDrop_TypeDefinitionIndex = 40333;

	struct alignas(4) TimelineControlGameWorld_LevelCellDrop
	{
		::System::Single DropRadius; // 0x10
	};
}
