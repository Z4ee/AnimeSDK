#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int PredicationState_TypeDefinitionIndex = 35372;

	enum class PredicationState : ::System::Int32
	{
		Unknown = 0,
		Predicating = 1,
		Rollback = 2,
	};
}
