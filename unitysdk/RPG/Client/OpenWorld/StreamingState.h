#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingState_TypeDefinitionIndex = 68048;

	enum class StreamingState : ::System::Int16
	{
		E_Empty = 0,
		E_LoadTaskCreate = 1,
		E_Loading = 2,
		E_LodTransition = 3,
		E_LoadFinish = 4,
		E_Max = 5,
	};
}
