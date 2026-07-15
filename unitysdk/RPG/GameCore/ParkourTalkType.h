#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourTalkType_TypeDefinitionIndex = 11624;

	enum class ParkourTalkType : ::System::Int32
	{
		Text = 1,
		Sprite = 2,
	};
}
