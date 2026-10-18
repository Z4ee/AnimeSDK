#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UniqueItemKind_TypeDefinitionIndex = 65745;

	enum class UniqueItemKind : ::System::Int32
	{
		None = 0,
		ServerUnique = 1,
		Pet = 2,
	};
}
