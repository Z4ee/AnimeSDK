#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeStoryType_TypeDefinitionIndex = 12493;

	enum class ChallengeStoryType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Fever = 2,
	};
}
