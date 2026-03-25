#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGrenadierMoveType_TypeDefinitionIndex = 15303;

	enum class FiveDimGrenadierMoveType : ::System::Int32
	{
		Patrol = 0,
		Stay = 1,
	};
}
