#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackPhotoCanType_TypeDefinitionIndex = 12035;

	enum class TrackPhotoCanType : ::System::Int32
	{
		None = 0,
		CopperCan = 1,
		SilverCan = 2,
		GoldCan = 3,
		GoldCanExtra = 4,
	};
}
