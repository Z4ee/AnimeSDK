#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooChannelType_TypeDefinitionIndex = 10048;

	enum class SpaceZooChannelType : ::System::Int32
	{
		None = 0,
		BodyDecal = 1,
		BodyColor = 2,
		HatColor = 3,
		TailDecal = 4,
		HatDecal = 5,
		EyeDecal = 6,
		ChannelMax = 7,
	};
}
