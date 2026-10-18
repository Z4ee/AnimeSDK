#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int RewardPlayMode_TypeDefinitionIndex = 75310;

	enum class RewardPlayMode : ::System::Int32
	{
		Fly = 0,
		FadeIn = 1,
	};
}
