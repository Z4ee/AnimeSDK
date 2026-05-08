#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MusicGame/FJudgeTimePrePost.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::MusicGame
{
	inline static constexpr unsigned int FLiveHouseSettingData_TypeDefinitionIndex = 55081;

	struct alignas(4) FLiveHouseSettingData
	{
		::MoleMole::MusicGame::FJudgeTimePrePost Click; // 0x10
		::MoleMole::MusicGame::FJudgeTimePrePost LongEnter; // 0x28
		::MoleMole::MusicGame::FJudgeTimePrePost LongExit; // 0x40
		::MoleMole::MusicGame::FJudgeTimePrePost Bomb; // 0x58
		::System::Single DoubleClickTimeThreshold; // 0x70
		::System::Single DoubleClickFrameCountThreshold; // 0x74
	};
}
