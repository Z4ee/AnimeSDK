#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BossHeadEffType_TypeDefinitionIndex = 21433;

	enum class BossHeadEffType : ::System::Int32
	{
		Normal = 0,
		SamBurning = 1,
		DarkSamBurning = 2,
	};
}
