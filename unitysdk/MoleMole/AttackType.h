#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AttackType_TypeDefinitionIndex = 60385;

	enum class AttackType : ::System::Int32
	{
		Unknown = 0,
		Mix = 3,
		Melee = 1,
		Max = 4,
		Range = 2,
	};
}
