#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int StaticSceneObjectListLoopType_TypeDefinitionIndex = 53815;

	enum class StaticSceneObjectListLoopType : ::System::Int32
	{
		ListOnceAndEndPause = 4,
		ListLoop = 0,
		RadomLoop = 3,
		RadomOnce = 2,
		ListOnce = 1,
	};
}
