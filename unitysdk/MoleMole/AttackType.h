#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AttackType_TypeDefinitionIndex = 69260;

	enum class AttackType : ::System::Int32
	{
		Max = 4,
		Range = 2,
		Melee = 1,
		Mix = 3,
		Unknown = 0,
	};
}
