#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int StaticSceneObjectListLoopType_TypeDefinitionIndex = 55722;

	enum class StaticSceneObjectListLoopType : ::System::Int32
	{
		RadomLoop = 3,
		ListLoop = 0,
		ListOnce = 1,
		RadomOnce = 2,
		ListOnceAndEndPause = 4,
	};
}
