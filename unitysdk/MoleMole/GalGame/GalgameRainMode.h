#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalgameRainMode_TypeDefinitionIndex = 69662;

	enum class GalgameRainMode : ::System::Int32
	{
		ForceRain = 2,
		None = 0,
		ForceClear = 3,
		FollowScene = 1,
	};
}
