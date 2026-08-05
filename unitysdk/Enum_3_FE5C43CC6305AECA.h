#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_FE5C43CC6305AECA_TypeDefinitionIndex = 52755;

enum class Enum_3_FE5C43CC6305AECA : ::System::Int32
{
	PeriodLock = 1,
	PeriodNoticeClose = 12,
	PeriodUnLockButHasQuestNotFinish = 5,
	PeriodAndQuestUnLockButNotClick = 4,
	IsNotFirstRealPeriodButEmpty_AfterRealIndex = 10,
	PeriodUnLockButFirstQuestLock = 3,
	MUIP_LOCK = 11,
	IsNotFirstRealPeriodButEmpty_BeforeRealIndex = 9,
	NoPeriod = 7,
	IsUnlockAllAndGetAllReward = 6,
	Unknow = 0,
	FirstRealPeriodLock = 2,
	ClosePeriod = 8,
};
