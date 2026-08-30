#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int BattleAddCardReason_TypeDefinitionIndex = 79213;

	enum class BattleAddCardReason : ::System::Int32
	{
		None = 0,
		Geneerate = 1,
		ArcherProjection = 2,
	};
}
