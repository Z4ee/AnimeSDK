#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PlayerAccessoryType_TypeDefinitionIndex = 89677;

	enum class PlayerAccessoryType : ::System::Int32
	{
		Chest = 3,
		Head = 2,
		Back = 4,
		All = 1,
	};
}
