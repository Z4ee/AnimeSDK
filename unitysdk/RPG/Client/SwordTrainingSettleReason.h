#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingSettleReason_TypeDefinitionIndex = 59209;

	enum class SwordTrainingSettleReason : ::System::Int32
	{
		None = 0,
		GiveUp = 1,
		FailInBattle = 2,
		Success = 3,
		ForceByServer = 4,
	};
}
