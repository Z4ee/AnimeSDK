#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int PinOperationSourceType_TypeDefinitionIndex = 74304;

	enum class PinOperationSourceType : ::System::Int32
	{
		None = 0,
		Compare = 1,
		MoreChoice = 2,
	};
}
