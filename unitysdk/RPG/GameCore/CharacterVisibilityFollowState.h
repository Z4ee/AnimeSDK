#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterVisibilityFollowState_TypeDefinitionIndex = 57386;

	enum class CharacterVisibilityFollowState : ::System::Int32
	{
		None = 0,
		Invisible = 1,
		Visible = 2,
	};
}
