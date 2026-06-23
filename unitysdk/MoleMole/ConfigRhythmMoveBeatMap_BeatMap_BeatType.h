#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigRhythmMoveBeatMap_BeatMap_BeatType_TypeDefinitionIndex = 68422;

	enum class ConfigRhythmMoveBeatMap_BeatMap_BeatType : ::System::Int32
	{
		Tetris = 5,
		FromDown = 1,
		FromRight = 3,
		Show = 4,
		FromUp = 0,
		FromLeft = 2,
	};
}
