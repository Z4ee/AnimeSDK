#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonsterFunctionType_TypeDefinitionIndex = 87963;

	enum class MonsterFunctionType : ::System::Int32
	{
		Monster = 1,
		Destruction = 2,
		Summoned = 4,
		Trap = 5,
		Other = 0,
		NPC = 3,
	};
}
