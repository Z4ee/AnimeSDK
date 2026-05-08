#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathLineType_TypeDefinitionIndex = 59093;

	enum class PathLineType : ::System::Int32
	{
		CatmullRomCurve = 1,
		Straight = 0,
	};
}
