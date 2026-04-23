#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleAbilityPassiveType_TypeDefinitionIndex = 15002;

	enum class ChimeraBattleAbilityPassiveType : ::System::Int32
	{
		None = 0,
		Reverse = 1,
	};
}
