#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonBuffType_TypeDefinitionIndex = 12043;

	enum class TreasureDungeonBuffType : ::System::Int32
	{
		None = 0,
		BattleAddMazeBuff = 1,
		ShowKeyAtBegining = 2,
		ShowGridsAtBegining = 3,
	};
}
