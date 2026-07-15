#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelCustomStringPresetType_TypeDefinitionIndex = 60520;

	enum class ChimeraDuelCustomStringPresetType : ::System::Int32
	{
		MainPuzzleEnter = 0,
		MainPuzzleEnterShop = 1,
		MainPuzzleEnterBattle = 2,
		MainPuzzleEnterMasterSelect = 3,
		MainPuzzleExit = 4,
		MainPuzzleFinishShowcaseMission = 5,
	};
}
