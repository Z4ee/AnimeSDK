#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Match3
{
	inline static constexpr unsigned int ViewMomentType_TypeDefinitionIndex = 40471;

	enum class ViewMomentType : ::System::Int32
	{
		Dummy = 0,
		Break = 1,
		FastBreak = 2,
		BirdSkill = 3,
		GridBreak = 4,
		GemPackBreak = 5,
		Create = 6,
		MultiStyleBreak = 7,
		Bomb = 8,
		PowerCounter = 9,
		MergeBomb = 10,
		RefreshPiece = 11,
		ItemPack = 12,
	};
}
