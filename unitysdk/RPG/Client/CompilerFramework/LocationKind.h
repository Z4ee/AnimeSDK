#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::CompilerFramework
{
	inline static constexpr unsigned int LocationKind_TypeDefinitionIndex = 40317;

	enum class LocationKind : ::System::Int32
	{
		None = 0,
		Source = 1,
	};
}
