#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PuzzleColliderCastMode_TypeDefinitionIndex = 78142;

	enum class PuzzleColliderCastMode : ::System::Int32
	{
		Current = 0,
		Children = 1,
		Parent = 2,
	};
}
