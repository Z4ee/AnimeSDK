#pragma once
#include "unitysdk/unitysdk.h"

namespace ClipperLib
{
	inline static constexpr unsigned int EndType_TypeDefinitionIndex = 33412;

	enum class EndType : ::System::Int32
	{
		etClosedPolygon = 0,
		etClosedLine = 1,
		etOpenButt = 2,
		etOpenSquare = 3,
		etOpenRound = 4,
	};
}
