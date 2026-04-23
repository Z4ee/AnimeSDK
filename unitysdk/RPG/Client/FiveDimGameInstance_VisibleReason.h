#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimGameInstance_VisibleReason_TypeDefinitionIndex = 55694;

	enum class FiveDimGameInstance_VisibleReason : ::System::Int32
	{
		Default = 0,
		ExclusiveGameplay = 1,
	};
}
