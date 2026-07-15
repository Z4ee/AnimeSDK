#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemMainType_TypeDefinitionIndex = 13350;

	enum class ItemMainType : ::System::Int32
	{
		Unknown = 0,
		Virtual = 1,
		AvatarCard = 2,
		Equipment = 3,
		Relic = 4,
		Usable = 5,
		Material = 6,
		Mission = 7,
		Display = 8,
		Pet = 9,
	};
}
