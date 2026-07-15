#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupStateType_TypeDefinitionIndex = 54523;

	enum class GroupStateType : ::System::Int32
	{
		Idle = 0,
		Combat = 1,
	};
}
