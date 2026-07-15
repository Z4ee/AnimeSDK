#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessRogueBoardAnimationType_TypeDefinitionIndex = 14170;

	enum class ChessRogueBoardAnimationType : ::System::Int32
	{
		Normal = 0,
		Remembrance = 1,
		Abundance = 2,
		TheHunt = 3,
		Preservation = 4,
		DestructionBreak = 5,
		DestructionChange = 6,
		Propagation = 7,
		Nihility = 8,
		Elation = 9,
		Erudition = 10,
		EruditionBreak = 11,
		EruditionChange = 12,
		Portal = 13,
		MarkTypeFadeIn = 14,
		MarkTypeFadeOut = 15,
		EruditionFadeOut = 16,
	};
}
