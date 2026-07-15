#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStoryMoveData_MovePathMode_TypeDefinitionIndex = 46229;

	enum class CharacterStoryMoveData_MovePathMode : ::System::Int32
	{
		Polyline = 0,
		BezierCurve = 1,
	};
}
