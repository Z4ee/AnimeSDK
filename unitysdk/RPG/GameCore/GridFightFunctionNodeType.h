#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightFunctionNodeType_TypeDefinitionIndex = 10208;

	enum class GridFightFunctionNodeType : ::System::Int32
	{
		None = 0,
		Trait = 1,
		Strategy = 2,
		Interest = 3,
		WinningStreak = 4,
		Guidebook = 5,
		Introduction = 6,
		DataReview = 7,
		EnterBattle = 8,
		Map = 9,
		AvatarDetail = 10,
		Augment = 11,
		HpRule = 12,
	};
}
