#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimGameInstance_CreateLevelPhase_TypeDefinitionIndex = 57685;

	enum class FiveDimGameInstance_CreateLevelPhase : ::System::Int32
	{
		ReadyForCreation = 0,
		CreatingLevel = 1,
		CreatingLevelImmediately = 2,
		CreateFinish = 3,
		Destroyed = 4,
	};
}
