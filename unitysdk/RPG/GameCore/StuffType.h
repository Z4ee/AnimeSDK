#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StuffType_TypeDefinitionIndex = 13700;

	enum class StuffType : ::System::Int32
	{
		Unknown = 0,
		Avatar = 1,
		NPC = 2,
	};
}
