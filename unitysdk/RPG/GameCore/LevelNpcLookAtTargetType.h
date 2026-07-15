#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNpcLookAtTargetType_TypeDefinitionIndex = 16660;

	enum class LevelNpcLookAtTargetType : ::System::Int32
	{
		Npc = 0,
		Prop = 1,
		Anchor = 2,
	};
}
