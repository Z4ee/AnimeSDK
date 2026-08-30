#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int SelectorType_TypeDefinitionIndex = 74342;

	enum class SelectorType : ::System::Int32
	{
		Specific = 0,
		OneOuterSetEnum = 1,
		TwoOuterSetEnum = 2,
	};
}
