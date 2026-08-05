#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SecondaryCharacterType_TypeDefinitionIndex = 88995;

	enum class SecondaryCharacterType : ::System::Int32
	{
		MainPlayer = 3,
		Avatar = 1,
		Unknown = 0,
		Monster = 2,
	};
}
