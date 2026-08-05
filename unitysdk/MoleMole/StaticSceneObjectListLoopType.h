#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int StaticSceneObjectListLoopType_TypeDefinitionIndex = 64008;

	enum class StaticSceneObjectListLoopType : ::System::Int32
	{
		RadomOnce = 2,
		RadomLoop = 3,
		ListOnce = 1,
		ListOnceAndEndPause = 4,
		ListLoop = 0,
	};
}
