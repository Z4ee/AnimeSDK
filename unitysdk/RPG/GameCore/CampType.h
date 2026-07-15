#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CampType_TypeDefinitionIndex = 10100;

	enum class CampType : ::System::Int32
	{
		Unknown = 0,
		Player = 1,
		MazePlayerAlly = 2,
		NpcMonster = 3,
		Prop = 4,
		Neutral = 5,
	};
}
