#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicValueContextScope_TypeDefinitionIndex = 23888;

	enum class DynamicValueContextScope : ::System::Int32
	{
		Context = 0,
		ContextTaskTemplate = 1,
		ContextModifier = 2,
		ContextAbility = 3,
		ContextCaster = 4,
		ContextOwner = 5,
		TargetEntity = 6,
		AITag = 7,
		SummonerEntity = 8,
		CallbackTemporary = 9,
	};
}
