#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_311353BEB73A32C4_IssueKind_TypeDefinitionIndex = 70370;

enum class Class_1_311353BEB73A32C4_IssueKind : ::System::Int32
{
	DuplicateActiveThenInactiveRemove = 0,
	SwapBeforeLoadFinish = 1,
	VisibleButNoLoadOwner = 2,
	UnloadVisibleBlock = 3,
	InactiveToNullBattleArea = 4,
	AllBattleAreasInvisibleMonitor = 5,
	AllBattleAreasInvisibleMonitorPersisted5s = 6,
	AllBattleAreasInvisibleMonitorPersisted10s = 7,
	AllBattleAreasInvisibleMonitorRecovered = 8,
	BattleStageStillHidden = 9,
	EffectBattleAreaLoadingStuck = 10,
	ActiveBattleAreaNotFound = 11,
	InactiveBattleAreaMiss = 12,
	ActiveTopHasNoVisibleOwner = 13,
	VisibleOwnerButBlockInvisible = 14,
	LoadOwnerButPersistentNotFinishTimeout = 15,
	TaskTryFixTimeout = 16,
	TaskTryFixFail = 17,
	TaskTryFixException = 18,
	UnknownBattleAreaLoadStuck = 19,
	SwitchEffectBattleAreaWaitTimeout = 20,
	SwitchEffectBattleAreaWaitFail = 21,
	BulkUnloadBattleAreaBlockInBattle = 22,
	DisposeBattleAreaInBattle = 23,
	ActiveTopUnchangedButInvisible = 24,
	InitialHideBattleAreaInBattle = 25,
	BattleAreaStageMovedFarAway = 26,
	RemoveAllBattleAreaBlocksInBattle = 27,
};
