#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::RoadRash
{
	inline static constexpr unsigned int EImpactForbidReason_TypeDefinitionIndex = 41302;

	enum class EImpactForbidReason : ::System::Int32
	{
		None = 0,
		Ultimate = 1,
		Slam = 2,
		KnockUp = 4,
	};
}
