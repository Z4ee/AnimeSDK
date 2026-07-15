#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Map_MapObjectsUpdateRequestState_TypeDefinitionIndex = 58132;

	enum class Map_MapObjectsUpdateRequestState : ::System::Int32
	{
		Init = 0,
		DestroyObjects = 1,
		ObjectsDestroyed = 2,
		CreateObjectsSync = 3,
		CreateObjectsAsync = 4,
		Finished = 5,
	};
}
