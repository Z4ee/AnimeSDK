#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimaoNewsWorkRecordType_TypeDefinitionIndex = 13862;

	enum class LimaoNewsWorkRecordType : ::System::Int32
	{
		GoalText = 1,
		NormalText = 2,
		JumpPost = 3,
		JumpInteract = 4,
	};
}
