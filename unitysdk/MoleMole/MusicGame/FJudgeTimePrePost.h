#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MusicGame/FJudgeTime.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::MusicGame
{
	inline static constexpr unsigned int FJudgeTimePrePost_TypeDefinitionIndex = 84725;

	struct alignas(4) FJudgeTimePrePost
	{
		::MoleMole::MusicGame::FJudgeTime Pre; // 0x10
		::MoleMole::MusicGame::FJudgeTime Post; // 0x1C
	};
}
