#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildSubAreaType_TypeDefinitionIndex = 69385;

	enum class TrainPartyBuildSubAreaType : ::System::Int32
	{
		Badge = 1,
		Collection = 2,
		Photo = 3,
	};
}
