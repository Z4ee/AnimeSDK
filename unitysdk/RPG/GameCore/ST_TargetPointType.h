#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_TargetPointType_TypeDefinitionIndex = 23601;

	enum class ST_TargetPointType : ::System::Int32
	{
		LocalPlayer = 0,
		LocalTarget = 1,
		GuardPosition = 2,
		BornPosition = 3,
	};
}
