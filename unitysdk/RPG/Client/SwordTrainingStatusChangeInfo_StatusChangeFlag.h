#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingStatusChangeInfo_StatusChangeFlag_TypeDefinitionIndex = 59229;

	enum class SwordTrainingStatusChangeInfo_StatusChangeFlag : ::System::Int32
	{
		None = 0,
		StatusPower = 2,
		StatusAgility = 4,
		StatusToughness = 8,
		StatusPerception = 16,
	};
}
