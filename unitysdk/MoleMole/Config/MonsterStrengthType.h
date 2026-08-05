#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonsterStrengthType_TypeDefinitionIndex = 86357;

	enum class MonsterStrengthType : ::System::Int32
	{
		Boss = 2,
		Normal = 0,
		Elite = 1,
	};
}
