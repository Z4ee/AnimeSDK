#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAnimatingObjectState_TypeDefinitionIndex = 16488;

	enum class LevelAnimatingObjectState : ::System::Int32
	{
		None = 0,
		SpecialStandBy1 = 1,
		SpecialStandBy2 = 2,
		FESpecialStandBy1 = 3,
	};
}
