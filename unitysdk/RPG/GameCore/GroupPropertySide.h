#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupPropertySide_TypeDefinitionIndex = 17555;

	enum class GroupPropertySide : ::System::Int32
	{
		ClientOnly = 0,
		ServerOnly = 1,
		ServerClient = 2,
	};
}
