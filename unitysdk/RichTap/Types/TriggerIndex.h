#pragma once
#include "unitysdk/unitysdk.h"

namespace RichTap::Types
{
	inline static constexpr unsigned int TriggerIndex_TypeDefinitionIndex = 38084;

	enum class TriggerIndex : ::System::Int32
	{
		Left = 0,
		Right = 1,
		All = -1,
	};
}
