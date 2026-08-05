#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ReactionRegisterObjectType_TypeDefinitionIndex = 56704;

	enum class ReactionRegisterObjectType : ::System::Int32
	{
		ViewObject = 1,
		Entity = 0,
	};
}
