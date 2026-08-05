#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigRhythmMoveBeatMap_BeatMap_BeatType_TypeDefinitionIndex = 65973;

	enum class ConfigRhythmMoveBeatMap_BeatMap_BeatType : ::System::Int32
	{
		FromRight = 3,
		FromDown = 1,
		FromLeft = 2,
		Tetris = 5,
		Show = 4,
		FromUp = 0,
	};
}
