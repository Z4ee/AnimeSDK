#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AttackType_TypeDefinitionIndex = 67362;

	enum class AttackType : ::System::Int32
	{
		Range = 2,
		Mix = 3,
		Unknown = 0,
		Melee = 1,
		Max = 4,
	};
}
