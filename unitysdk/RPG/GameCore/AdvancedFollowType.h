#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvancedFollowType_TypeDefinitionIndex = 20389;

	enum class AdvancedFollowType : ::System::Int32
	{
		Pet = 0,
		Character = 1,
	};
}
