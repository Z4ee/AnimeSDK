#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalgameRainMode_TypeDefinitionIndex = 76509;

	enum class GalgameRainMode : ::System::Int32
	{
		None = 0,
		FollowScene = 1,
		ForceClear = 3,
		ForceRain = 2,
	};
}
