#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonsterStrengthType_TypeDefinitionIndex = 77358;

	enum class MonsterStrengthType : ::System::Int32
	{
		Elite = 1,
		Normal = 0,
		Boss = 2,
	};
}
