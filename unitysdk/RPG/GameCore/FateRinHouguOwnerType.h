#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinHouguOwnerType_TypeDefinitionIndex = 11132;

	enum class FateRinHouguOwnerType : ::System::Int32
	{
		None = 0,
		Rin = 1,
		Saber = 2,
		Archer = 3,
		Trailblazer = 4,
		Gilgamesh = 5,
		Neutral = 6,
	};
}
