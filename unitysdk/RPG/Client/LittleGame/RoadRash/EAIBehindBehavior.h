#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::RoadRash
{
	inline static constexpr unsigned int EAIBehindBehavior_TypeDefinitionIndex = 41287;

	enum class EAIBehindBehavior : ::System::Int32
	{
		DoNothing = 0,
		SpeedUp = 1,
		Buff = 2,
	};
}
