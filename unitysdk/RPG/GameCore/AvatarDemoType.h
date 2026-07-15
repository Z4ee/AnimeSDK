#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDemoType_TypeDefinitionIndex = 12294;

	enum class AvatarDemoType : ::System::Int32
	{
		Activity = 0,
		Normal = 1,
		Enhance = 2,
	};
}
