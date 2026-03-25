#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ETimelineControlGameCharacterMoveDirection_TypeDefinitionIndex = 32953;

	enum class ETimelineControlGameCharacterMoveDirection : ::System::Int32
	{
		Forward = 0,
		Right = 1,
		Back = 2,
		Left = 3,
	};
}
