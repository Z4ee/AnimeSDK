#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterModelFxType_TypeDefinitionIndex = 57354;

	enum class CharacterModelFxType : ::System::Int32
	{
		SelectFriend = 0,
		SelectEnemy = 1,
		Chooseable_Friend = 2,
		Chooseable_Enemy = 3,
		UnChooseable = 4,
	};
}
