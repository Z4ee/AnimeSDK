#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Arcade::SnakeDemo
{
	inline static constexpr unsigned int UISnakeDuelInLevelChildWindowController_MapEffectType_TypeDefinitionIndex = 91005;

	enum class UISnakeDuelInLevelChildWindowController_MapEffectType : ::System::Int32
	{
		Hit = 2,
		ItemIdle = 3,
		Eat = 1,
		None = 0,
	};
}
