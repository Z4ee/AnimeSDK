#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumTargetRewardType_TypeDefinitionIndex = 13715;

	enum class MuseumTargetRewardType : ::System::Int32
	{
		None = 0,
		Staff = 1,
		ExhibitItem = 2,
		Fund = 3,
		Event = 4,
	};
}
