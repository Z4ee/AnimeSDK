#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MRMusicCompositionMode_TypeDefinitionIndex = 60586;

	enum class MRMusicCompositionMode : ::System::Int32
	{
		Stage = 0,
		Menu = 1,
	};
}
