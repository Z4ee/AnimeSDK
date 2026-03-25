#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitTaskSeqType_TypeDefinitionIndex = 46286;

	enum class SummonUnitTaskSeqType : ::System::Int32
	{
		OnCreate = 0,
		OnDestroy = 1,
		OnBeReplaced = 2,
		OnBeAttack = 3,
		OnHide = 4,
		OnShow = 5,
		OnGroundInvalid = 6,
		OnResetPos = 7,
		OnSummonerGroundMove = 8,
		Count = 9,
	};
}
