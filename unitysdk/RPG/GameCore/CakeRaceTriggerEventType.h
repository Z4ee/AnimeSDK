#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceTriggerEventType_TypeDefinitionIndex = 10625;

	enum class CakeRaceTriggerEventType : ::System::Int32
	{
		PlayerUseBattleItem = 0,
		CatEffectByBattleItem = 1,
		CatFindLockTarget = 2,
		CatIntroCam1Begin = 3,
		CatIntroCam2Begin = 4,
		GuessResultShow = 5,
		SectionFightBegin = 6,
		CatNearFinishLine = 7,
		CatReachFinishLine = 8,
		CatStepOn = 100,
		CatOvertake = 101,
		CatEnterMoveState = 102,
		CatOnGround = 103,
		CatOnDizzEnd = 104,
		CatOnEatFood = 105,
		CatOnEnterModCell = 106,
		CatOnDeactiveTrap = 107,
		CatOnEnterRange = 108,
		CatOnRollMax = 109,
		CatOnReturnField = 110,
		CatOnOtherEatFood = 111,
	};
}
