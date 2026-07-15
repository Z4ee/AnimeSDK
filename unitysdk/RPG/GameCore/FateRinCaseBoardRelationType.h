#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCaseBoardRelationType_TypeDefinitionIndex = 15590;

	enum class FateRinCaseBoardRelationType : ::System::Int32
	{
		None = 0,
		Track = 1,
		Ally = 2,
		Gift = 3,
		Partner = 4,
	};
}
