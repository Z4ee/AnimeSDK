#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ChessEntityType_TypeDefinitionIndex = 41676;

	enum class ChessEntityType : ::System::Int32
	{
		DefenseSceneTrap = 5,
		Normal = 6,
		Coin = 0,
		RedBlock = 1,
		DefenseSceneVirus = 3,
		DefenseSceneAntivirus = 4,
		RedAlert = 2,
	};
}
