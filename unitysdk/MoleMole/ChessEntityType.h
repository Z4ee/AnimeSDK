#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ChessEntityType_TypeDefinitionIndex = 70920;

	enum class ChessEntityType : ::System::Int32
	{
		Normal = 6,
		DefenseSceneTrap = 5,
		RedBlock = 1,
		DefenseSceneVirus = 3,
		DefenseSceneAntivirus = 4,
		Coin = 0,
		RedAlert = 2,
	};
}
