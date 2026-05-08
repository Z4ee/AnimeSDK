#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ChessEntityType_TypeDefinitionIndex = 69471;

	enum class ChessEntityType : ::System::Int32
	{
		RedBlock = 1,
		Normal = 6,
		DefenseSceneAntivirus = 4,
		DefenseSceneVirus = 3,
		DefenseSceneTrap = 5,
		Coin = 0,
		RedAlert = 2,
	};
}
