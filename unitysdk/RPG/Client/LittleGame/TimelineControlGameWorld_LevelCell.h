#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloor.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_0_16E4307DCC419505_249;

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TimelineControlGameWorld_LevelCell_TypeDefinitionIndex = 40346;

	struct alignas(8) TimelineControlGameWorld_LevelCell
	{
		::System::Boolean Visible; // 0x10
		::UnityEngine::Vector3Int LocalPosition; // 0x14
		::RPG::Client::LittleGame::ETimelineControlGameLevelFloor Floor; // 0x20
		::Class_0_16E4307DCC419505_249* Debug; // 0x28
	};
}
