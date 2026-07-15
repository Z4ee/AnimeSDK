#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraPhaseTargetType_TypeDefinitionIndex = 12519;

	enum class ChimeraPhaseTargetType : ::System::Int32
	{
		None = 0,
		NoTarget = 1,
		BeatTeam = 2,
		TargetRank = 3,
	};
}
