#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameCharacterMoveDirection.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace RPG::Client { class TimelineControlGamePlayerConfigAsset; }

namespace RPG::Client
{
	inline static constexpr unsigned int TimelineControlGamePuzzleBoard_PlayerConfig_TypeDefinitionIndex = 57734;

	struct alignas(8) TimelineControlGamePuzzleBoard_PlayerConfig
	{
		::UnityEngine::Vector3Int initPos; // 0x10
		::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection initDirection; // 0x1C
		::UnityEngine::Vector3Int endPos; // 0x20
		::RPG::Client::TimelineControlGamePlayerConfigAsset* config; // 0x30
	};
}
