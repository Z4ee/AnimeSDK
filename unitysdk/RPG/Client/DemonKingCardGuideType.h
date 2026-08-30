#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DemonKingCardGuideType_TypeDefinitionIndex = 63893;

	enum class DemonKingCardGuideType : ::System::Int32
	{
		Success = 0,
		FailAndSeen = 1,
		FailAndUnseen = 2,
	};
}
