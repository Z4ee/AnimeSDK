#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelGroup.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TimelineControlGameWorld_Level_TypeDefinitionIndex = 40348;

	struct alignas(8) TimelineControlGameWorld_Level
	{
		::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup>* Groups; // 0x10
	};
}
