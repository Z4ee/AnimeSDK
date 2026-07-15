#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGraphType_TypeDefinitionIndex = 17580;

	enum class LevelGraphType : ::System::Int32
	{
		Normal = 0,
		Mission = 1,
		Group = 2,
		SubGraph = 3,
		Entity = 4,
		PerformanceA = 5,
		PerformanceC = 6,
		PerformanceD = 7,
		Dialogue = 8,
		DialoguePack = 9,
		EntityInstance = 10,
		LittleGameInstance = 11,
		EntitasEntity = 12,
	};
}
