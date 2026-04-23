#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::SwordTraining
{
	inline static constexpr unsigned int SwordTrainingEffectSource_TypeDefinitionIndex = 69056;

	enum class SwordTrainingEffectSource : ::System::Int32
	{
		None = 0,
		Mood = 1,
		PartnerAbility = 2,
		Global = 3,
		Training = 4,
		Travel = 5,
	};
}
