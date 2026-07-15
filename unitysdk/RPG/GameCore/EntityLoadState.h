#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityLoadState_TypeDefinitionIndex = 55227;

	enum class EntityLoadState : ::System::Int32
	{
		NotLoaded = 0,
		RootLoading = 1,
		RootIniting = 2,
		RootLoaded = 3,
		ArtLoading = 4,
		ArtLoaded = 5,
	};
}
