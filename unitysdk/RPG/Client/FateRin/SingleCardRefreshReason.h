#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int SingleCardRefreshReason_TypeDefinitionIndex = 79277;

	enum class SingleCardRefreshReason : ::System::Int32
	{
		None = 0,
		CostChange = 1,
		CardCommonChange = 2,
	};
}
