#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PlayerAccessoryType_TypeDefinitionIndex = 63131;

	enum class PlayerAccessoryType : ::System::Int32
	{
		Head = 2,
		Chest = 3,
		All = 1,
		Back = 4,
	};
}
