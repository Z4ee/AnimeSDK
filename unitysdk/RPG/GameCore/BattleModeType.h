#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleModeType_TypeDefinitionIndex = 45172;

	enum class BattleModeType : ::System::Int32
	{
		None = 0,
		Chess = 1,
	};
}
