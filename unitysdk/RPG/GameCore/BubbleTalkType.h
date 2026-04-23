#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BubbleTalkType_TypeDefinitionIndex = 19358;

	enum class BubbleTalkType : ::System::Int32
	{
		Invalid = 0,
		Normal = 1,
		Inward = 2,
		HeartDial = 3,
	};
}
