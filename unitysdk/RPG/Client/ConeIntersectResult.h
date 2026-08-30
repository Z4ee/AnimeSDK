#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ConeIntersectResult_TypeDefinitionIndex = 70174;

	enum class ConeIntersectResult : ::System::Int32
	{
		Intersect = 0,
		Inside = 1,
		Outside = 2,
	};
}
