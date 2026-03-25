#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimGameInstance_CreateLevelPhase_TypeDefinitionIndex = 48900;

	enum class FiveDimGameInstance_CreateLevelPhase : ::System::Int32
	{
		ReadyForCreation = 0,
		CreatingLevel = 1,
		CreateFinish = 2,
		Destroyed = 3,
	};
}
