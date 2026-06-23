#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int Patrol_PatrolMode_TypeDefinitionIndex = 30904;

	enum class Patrol_PatrolMode : ::System::Int32
	{
		Progressive = 0,
		Random = 1,
	};
}
