#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RewardItem
{
	inline static constexpr unsigned int RewardItemMarkFlags_TypeDefinitionIndex = 78665;

	enum class RewardItemMarkFlags : ::System::Int32
	{
		None = 0,
		Obtained = 1,
		DoubleDrop = 2,
		BlackMask = 4,
		LockCenter = 8,
		LockRightTop = 16,
		Highlight = 32,
	};
}
