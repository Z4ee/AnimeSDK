#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildDIYPhotoItemFilterType_TypeDefinitionIndex = 69367;

	enum class TrainPartyBuildDIYPhotoItemFilterType : ::System::Int32
	{
		WORLD = 0,
		CLASS = 1,
		ELEMENT = 2,
		RARITY = 3,
	};
}
