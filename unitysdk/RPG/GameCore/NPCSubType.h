#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCSubType_TypeDefinitionIndex = 10119;

	enum class NPCSubType : ::System::Int32
	{
		Normal = 0,
		Avatar = 1,
		Monster = 2,
		Special = 3,
		PlayerAvatar = 4,
	};
}
