#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PerformActionType_TypeDefinitionIndex = 66954;

	enum class PerformActionType : ::System::Int32
	{
		Unknown = 0,
		FlyToPlayer = 1,
		FlyToTargetEntity = 2,
		FlyToTargetGO = 3,
	};
}
