#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int PredicationState_TypeDefinitionIndex = 28697;

	enum class PredicationState : ::System::Int32
	{
		Unknown = 0,
		Predicating = 1,
		Rollback = 2,
	};
}
