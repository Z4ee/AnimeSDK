#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ETimelineControlGameLevelRotation_TypeDefinitionIndex = 41218;

	enum class ETimelineControlGameLevelRotation : ::System::Int32
	{
		Rot0 = 0,
		Rot90 = 1,
		Rot180 = 2,
		Rot270 = 3,
	};
}
