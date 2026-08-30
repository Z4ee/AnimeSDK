#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int BlockHideReason_TypeDefinitionIndex = 73813;

	enum class BlockHideReason : ::System::Int32
	{
		GamePlayLogic = 0,
		Volume = 1,
		LightVolume = 2,
		Area = 3,
		Region = 4,
		Island = 5,
		FilterVolume = 6,
		Max = 7,
	};
}
