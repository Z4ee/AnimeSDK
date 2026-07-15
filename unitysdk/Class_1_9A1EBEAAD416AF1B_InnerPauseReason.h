#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_9A1EBEAAD416AF1B_InnerPauseReason_TypeDefinitionIndex = 35606;

enum class Class_1_9A1EBEAAD416AF1B_InnerPauseReason : ::System::Byte
{
	None = 0x0,
	Island = 0x1,
	ReachHeightLine = 0x2,
	BombPerformance = 0x4,
	SpawnIvy = 0x8,
	Tutorial = 0x10,
	BossDeadPerformance = 0x20,
	FullSync = 0x40,
};
