#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int FadingEntryResolveResult_TypeDefinitionIndex = 73839;

	enum class FadingEntryResolveResult : ::System::Int32
	{
		KeepActive = 0,
		RemoveOnly = 1,
		ImmediateFinish = 2,
	};
}
