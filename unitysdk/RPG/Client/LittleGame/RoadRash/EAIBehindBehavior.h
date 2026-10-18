#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::RoadRash
{
	inline static constexpr unsigned int EAIBehindBehavior_TypeDefinitionIndex = 42899;

	enum class EAIBehindBehavior : ::System::Int32
	{
		DoNothing = 0,
		SpeedUp = 1,
		Buff = 2,
	};
}
