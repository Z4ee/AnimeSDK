#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TeamProperty_TypeDefinitionIndex = 42219;

	enum class TeamProperty : ::System::Int32
	{
		MaxEtherInfectionValue = 2,
		EtherInfectionRecover = 3,
		Fever = 0,
		CurEtherInfectionValue = 1,
	};
}
