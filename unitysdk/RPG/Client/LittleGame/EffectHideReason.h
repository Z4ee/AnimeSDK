#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int EffectHideReason_TypeDefinitionIndex = 41117;

	enum class EffectHideReason : ::System::Int32
	{
		Default = 0,
		ActionOrTask = 1,
	};
}
