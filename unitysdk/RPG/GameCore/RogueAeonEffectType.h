#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAeonEffectType_TypeDefinitionIndex = 14556;

	enum class RogueAeonEffectType : ::System::Int32
	{
		None = 0,
		AddMazeBuff = 1,
		ModifyBuffProbability = 2,
	};
}
