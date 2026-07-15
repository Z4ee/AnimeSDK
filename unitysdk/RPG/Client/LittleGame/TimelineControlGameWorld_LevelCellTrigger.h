#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TimelineControlGameWorld_LevelCellTrigger_TypeDefinitionIndex = 40337;

	struct alignas(8) TimelineControlGameWorld_LevelCellTrigger
	{
		::System::Single radius; // 0x10
		::System::Single protectTime; // 0x14
		::System::String* attachGroup; // 0x18
		::System::String* attachTrigger; // 0x20
		::System::Boolean repeated; // 0x28
	};
}
