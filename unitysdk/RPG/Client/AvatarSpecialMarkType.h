#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarSpecialMarkType_TypeDefinitionIndex = 60231;

	enum class AvatarSpecialMarkType : ::System::Int32
	{
		None = 0,
		Trial = 1,
		PlayerReturnTrial = 2,
		Support = 3,
		PlotTrial = 4,
		ActivitySummon = 5,
		ActivityElation = 6,
	};
}
