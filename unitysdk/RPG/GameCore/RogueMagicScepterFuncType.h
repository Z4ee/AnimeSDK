#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicScepterFuncType_TypeDefinitionIndex = 10260;

	enum class RogueMagicScepterFuncType : ::System::Int32
	{
		None = 0,
		Common = 1,
		SP = 2,
		ActionDelay = 3,
	};
}
