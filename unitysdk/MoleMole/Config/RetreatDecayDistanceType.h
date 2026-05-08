#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int RetreatDecayDistanceType_TypeDefinitionIndex = 82089;

	enum class RetreatDecayDistanceType : ::System::Int32
	{
		None = 0,
		AttackerToAttackee = 1,
		PatternToAttackee = 2,
	};
}
