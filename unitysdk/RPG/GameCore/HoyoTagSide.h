#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoyoTagSide_TypeDefinitionIndex = 17582;

	enum class HoyoTagSide : ::System::Int32
	{
		EditorOnly = 1,
		All = 2,
		Server = 3,
		Client = 4,
	};
}
