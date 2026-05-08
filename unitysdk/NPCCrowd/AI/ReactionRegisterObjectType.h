#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ReactionRegisterObjectType_TypeDefinitionIndex = 63614;

	enum class ReactionRegisterObjectType : ::System::Int32
	{
		Entity = 0,
		ViewObject = 1,
	};
}
