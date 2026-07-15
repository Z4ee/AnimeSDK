#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorInstanceType_TypeDefinitionIndex = 10175;

	enum class FloorInstanceType : ::System::Int32
	{
		Anchor = 0,
		Monster = 1,
		Prop = 2,
		Waypoint = 3,
		Pathway = 4,
		BattleArea = 5,
		NPC = 6,
		Crowd = 7,
		Pedestrian = 8,
		PedestrianV2 = 9,
		Audience = 10,
		District = 11,
		SmartObject = 12,
		Curve = 13,
		LittleGame = 14,
		CountOrGroup = 15,
	};
}
