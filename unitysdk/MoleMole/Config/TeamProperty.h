#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TeamProperty_TypeDefinitionIndex = 74175;

	enum class TeamProperty : ::System::Int32
	{
		CurEtherInfectionValue = 1,
		EtherInfectionRecover = 3,
		Fever = 0,
		MaxEtherInfectionValue = 2,
	};
}
