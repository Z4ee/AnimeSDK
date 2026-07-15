#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MapObjectState_TypeDefinitionIndex = 58128;

	enum class MapObjectState : ::System::Int32
	{
		Unknown = 0,
		Loading = 1,
		Loaded = 2,
		ToBeRemoved = 3,
		FadeOut = 4,
		Disposed = 5,
	};
}
