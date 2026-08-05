#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int RetreatDecayDistanceType_TypeDefinitionIndex = 79974;

	enum class RetreatDecayDistanceType : ::System::Int32
	{
		PatternToAttackee = 2,
		AttackerToAttackee = 1,
		None = 0,
	};
}
