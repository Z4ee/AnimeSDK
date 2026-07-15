#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBattleEventHintType_TypeDefinitionIndex = 23850;

	enum class GridFightBattleEventHintType : ::System::Int32
	{
		None = 0,
		AvatarDead = 1,
		AvatarHint = 2,
		AvatarHintSpecialPreIn = 3,
		AvatarHintSpecialPreOut = 4,
		AvatarHintSpecialFadeIn = 5,
		AvatarHintSpecialFadeOut = 6,
	};
}
