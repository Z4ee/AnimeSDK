#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumMissionType_TypeDefinitionIndex = 13718;

	enum class MuseumMissionType : ::System::Int32
	{
		None = 0,
		PerfectTurn = 1,
		SingleTurnExp = 2,
		TurnsExp = 3,
		AreaLevel = 4,
		StuffCnt = 5,
		ExhibitCnt = 6,
	};
}
