#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PlayerAccessoryType_TypeDefinitionIndex = 87376;

	enum class PlayerAccessoryType : ::System::Int32
	{
		All = 1,
		Chest = 3,
		Back = 4,
		Head = 2,
	};
}
