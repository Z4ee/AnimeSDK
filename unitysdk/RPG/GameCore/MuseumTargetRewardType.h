#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumTargetRewardType_TypeDefinitionIndex = 13035;

	enum class MuseumTargetRewardType : ::System::Int32
	{
		None = 0,
		Staff = 1,
		ExhibitItem = 2,
		Fund = 3,
		Event = 4,
	};
}
