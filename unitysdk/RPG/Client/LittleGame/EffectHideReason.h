#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int EffectHideReason_TypeDefinitionIndex = 40238;

	enum class EffectHideReason : ::System::Int32
	{
		Default = 0,
		ActionOrTask = 1,
	};
}
