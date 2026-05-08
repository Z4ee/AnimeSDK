#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonsterFunctionType_TypeDefinitionIndex = 45952;

	enum class MonsterFunctionType : ::System::Int32
	{
		Trap = 5,
		Summoned = 4,
		NPC = 3,
		Monster = 1,
		Other = 0,
		Destruction = 2,
	};
}
