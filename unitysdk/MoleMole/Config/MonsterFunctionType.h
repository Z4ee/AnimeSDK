#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonsterFunctionType_TypeDefinitionIndex = 65665;

	enum class MonsterFunctionType : ::System::Int32
	{
		Monster = 1,
		Destruction = 2,
		Trap = 5,
		NPC = 3,
		Summoned = 4,
		Other = 0,
	};
}
