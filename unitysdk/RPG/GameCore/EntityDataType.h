#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityDataType_TypeDefinitionIndex = 15462;

	enum class EntityDataType : ::System::Int32
	{
		MaxHP = 0,
		HP = 1,
		AtkDiceCount = 2,
		DefDiceCount = 3,
		Rare = 4,
		MaxRollCount = 5,
		CurrentRollCount = 6,
		AttackPoint = 7,
		DefendPoint = 8,
		CurrentSelectedDiceCount = 9,
		BaseAtkDiceCount = 10,
		BaseDefDiceCount = 11,
		CurrentSelectedDiceDiffPointCount = 12,
	};
}
