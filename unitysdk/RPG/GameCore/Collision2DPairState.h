#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int Collision2DPairState_TypeDefinitionIndex = 45271;

	enum class Collision2DPairState : ::System::Int32
	{
		None = 0,
		Enter = 1,
		Exit = 2,
		Stay = 3,
	};
}
