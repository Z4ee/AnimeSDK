#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterHUDType_TypeDefinitionIndex = 24374;

	enum class MonsterHUDType : ::System::Int32
	{
		Default = 0,
		Summon = 1,
	};
}
