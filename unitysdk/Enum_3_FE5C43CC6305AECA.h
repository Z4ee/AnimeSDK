#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_FE5C43CC6305AECA_TypeDefinitionIndex = 85757;

enum class Enum_3_FE5C43CC6305AECA : ::System::Int32
{
	FirstRealPeriodLock = 2,
	IsUnlockAllAndGetAllReward = 6,
	PeriodUnLockButFirstQuestLock = 3,
	PeriodLock = 1,
	PeriodAndQuestUnLockButNotClick = 4,
	Unknow = 0,
	IsNotFirstRealPeriodButEmpty_BeforeRealIndex = 9,
	NoPeriod = 7,
	ClosePeriod = 8,
	IsNotFirstRealPeriodButEmpty_AfterRealIndex = 10,
	PeriodUnLockButHasQuestNotFinish = 5,
	PeriodNoticeClose = 12,
	MUIP_LOCK = 11,
};
