#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreelookCameraDragMode_TypeDefinitionIndex = 19153;

	enum class FreelookCameraDragMode : ::System::Int32
	{
		Translation = 0,
		Orbit = 1,
	};
}
