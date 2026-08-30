#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int OpenWorldCullingPauseReason_TypeDefinitionIndex = 73664;

	enum class OpenWorldCullingPauseReason : ::System::Int32
	{
		MapRotation = 0,
	};
}
