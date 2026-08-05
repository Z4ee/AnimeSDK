#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TeamProperty_TypeDefinitionIndex = 85489;

	enum class TeamProperty : ::System::Int32
	{
		Fever = 0,
		EtherInfectionRecover = 3,
		MaxEtherInfectionValue = 2,
		BattleFieldErosionDelta = 4,
		CurEtherInfectionValue = 1,
		BattleFieldErosionDeltaMax = 5,
	};
}
