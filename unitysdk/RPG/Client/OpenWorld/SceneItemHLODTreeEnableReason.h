#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int SceneItemHLODTreeEnableReason_TypeDefinitionIndex = 67953;

	enum class SceneItemHLODTreeEnableReason : ::System::Int32
	{
		SceneItemHLOD = 0,
		Environment = 1,
	};
}
