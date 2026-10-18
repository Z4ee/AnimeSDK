#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ListView_BackendKind_TypeDefinitionIndex = 72557;

	enum class ListView_BackendKind : ::System::Int32
	{
		None = 0,
		Static = 1,
		Loop2 = 2,
		Grid = 3,
		Staggered = 4,
		Flexible = 5,
		Layout = 6,
	};
}
