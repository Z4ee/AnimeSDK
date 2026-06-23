#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonsterStrengthType_TypeDefinitionIndex = 71206;

	enum class MonsterStrengthType : ::System::Int32
	{
		Normal = 0,
		Elite = 1,
		Boss = 2,
	};
}
