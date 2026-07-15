#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DemonKingCardGuideType_TypeDefinitionIndex = 61040;

	enum class DemonKingCardGuideType : ::System::Int32
	{
		Success = 0,
		FailAndSeen = 1,
		FailAndUnseen = 2,
	};
}
