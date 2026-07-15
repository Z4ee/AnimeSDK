#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamActionType_TypeDefinitionIndex = 13775;

	enum class PamActionType : ::System::Int32
	{
		None = 0,
		Music = 1,
		Cleaning = 2,
		Window = 3,
		Vending = 4,
		Plant = 5,
		Sleep = 6,
		Sad = 7,
		Confuse = 8,
		Angry = 9,
		IdleShow01 = 10,
		IdleShow02 = 11,
		Like = 12,
		Pleasure = 13,
		Happy = 14,
	};
}
