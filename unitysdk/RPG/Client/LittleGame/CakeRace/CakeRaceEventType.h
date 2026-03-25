#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceEventType_TypeDefinitionIndex = 63498;

	enum class CakeRaceEventType : ::System::Int32
	{
		None = 0,
		CatPropertyChanged = 1,
		FieldPropertyChanged = 2,
		CatUnlockTarget = 3,
		PlayerUseBattleItem = 4,
		CatEffectByBattleItem = 5,
		CatFindLockTarget = 6,
		CatIntroCam1Begin = 7,
		CatIntroCam2Begin = 8,
		GuessResultShow = 9,
		SectionFightBegin = 10,
		CatNearFinishLine = 11,
		CatReachFinishLine = 12,
		CatStepOn = 13,
		CatOnGround = 14,
		CatOvertake = 15,
		CatEnterMoveState = 16,
		CatOnDizzEnd = 17,
		CatOnEatFood = 18,
		CatOnEnterModCell = 19,
		CatOnDeactiveTrap = 20,
		CatOnEnterRange = 21,
		CatOnRollMax = 22,
		CatOnReturnField = 23,
		CatOnOtherEatFood = 24,
	};
}
