#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnJourneyItemType_TypeDefinitionIndex = 13954;

	enum class PlayerReturnJourneyItemType : ::System::Int32
	{
		None = 0,
		Questionnaire = 1,
		Hotspot = 2,
		Invitation = 3,
	};
}
