#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CyreneSPPointState_TypeDefinitionIndex = 68655;

	enum class CyreneSPPointState : ::System::Int32
	{
		Empty = 0,
		Full = 1,
		Max = 2,
		Active = 3,
	};
}
