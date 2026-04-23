#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildStageStatus_TypeDefinitionIndex = 58801;

	enum class EvolveBuildStageStatus : ::System::Int32
	{
		Unknown = 0,
		Locked = 1,
		Unchallenged = 2,
		InProgress = 3,
		Challenged = 4,
	};
}
