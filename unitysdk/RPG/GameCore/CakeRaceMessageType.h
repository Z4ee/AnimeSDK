#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceMessageType_TypeDefinitionIndex = 10594;

	enum class CakeRaceMessageType : ::System::Int32
	{
		Normal = 0,
		Special = 1,
	};
}
