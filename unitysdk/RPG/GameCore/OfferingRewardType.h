#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int OfferingRewardType_TypeDefinitionIndex = 13766;

	enum class OfferingRewardType : ::System::Int32
	{
		Normal = 0,
		LongTail = 1,
	};
}
