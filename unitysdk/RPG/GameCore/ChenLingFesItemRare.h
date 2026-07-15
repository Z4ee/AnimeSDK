#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesItemRare_TypeDefinitionIndex = 10705;

	enum class ChenLingFesItemRare : ::System::Int32
	{
		Unknown = 0,
		Normal = 1,
		Rare = 2,
		Epic = 3,
	};
}
