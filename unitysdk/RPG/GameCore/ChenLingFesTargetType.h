#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesTargetType_TypeDefinitionIndex = 10031;

	enum class ChenLingFesTargetType : ::System::Int32
	{
		Unknown = 0,
		OwnerEntity = 1,
		TargetEntity = 2,
		GameEntity = 3,
		LittleGameEntity = 4,
		EffectedVisitors = 5,
		EffectedItems = 6,
	};
}
