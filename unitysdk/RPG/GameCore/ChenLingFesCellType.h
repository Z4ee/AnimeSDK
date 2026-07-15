#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesCellType_TypeDefinitionIndex = 17700;

	enum class ChenLingFesCellType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Walk = 2,
		Start = 3,
		End = 4,
		Locked = 5,
	};
}
