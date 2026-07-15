#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int Collision2DPairState_TypeDefinitionIndex = 51205;

	enum class Collision2DPairState : ::System::Int32
	{
		None = 0,
		Exit = 1,
		Enter = 2,
		Stay = 3,
	};
}
