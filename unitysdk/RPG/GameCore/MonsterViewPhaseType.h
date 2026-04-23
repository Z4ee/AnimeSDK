#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterViewPhaseType_TypeDefinitionIndex = 21629;

	enum class MonsterViewPhaseType : ::System::Int32
	{
		HP = 0,
		Form = 1,
	};
}
