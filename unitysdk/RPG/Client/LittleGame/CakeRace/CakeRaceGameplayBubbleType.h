#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceGameplayBubbleType_TypeDefinitionIndex = 71632;

	enum class CakeRaceGameplayBubbleType : ::System::Int32
	{
		None = 0,
		Text = 1,
		SkillText = 2,
		Cat = 3,
		Food = 4,
		Support = 5,
	};
}
