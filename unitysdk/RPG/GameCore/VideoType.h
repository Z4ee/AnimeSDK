#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int VideoType_TypeDefinitionIndex = 16331;

	enum class VideoType : ::System::Int32
	{
		Video = 0,
		LoopCG = 1,
		Guide = 2,
	};
}
