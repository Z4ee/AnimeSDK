#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathLineType_TypeDefinitionIndex = 58262;

	enum class PathLineType : ::System::Int32
	{
		Straight = 0,
		CatmullRomCurve = 1,
	};
}
