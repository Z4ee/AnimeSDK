#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTrainPartyBuildItem_TagType_TypeDefinitionIndex = 56268;

	enum class MonoTrainPartyBuildItem_TagType : ::System::Int32
	{
		None = 0,
		Big = 1,
		Mid = 2,
		Small = 4,
		Hang = 8,
		Put = 16,
		Salt = 32,
	};
}
