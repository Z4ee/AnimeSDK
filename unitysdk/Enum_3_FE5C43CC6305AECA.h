#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_FE5C43CC6305AECA_TypeDefinitionIndex = 79827;

enum class Enum_3_FE5C43CC6305AECA : ::System::Int32
{
	MUIP_LOCK = 11,
	PeriodLock = 1,
	IsNotFirstRealPeriodButEmpty_BeforeRealIndex = 9,
	FirstRealPeriodLock = 2,
	IsUnlockAllAndGetAllReward = 6,
	PeriodAndQuestUnLockButNotClick = 4,
	IsNotFirstRealPeriodButEmpty_AfterRealIndex = 10,
	PeriodUnLockButFirstQuestLock = 3,
	PeriodNoticeClose = 12,
	Unknow = 0,
	PeriodUnLockButHasQuestNotFinish = 5,
	ClosePeriod = 8,
	NoPeriod = 7,
};
