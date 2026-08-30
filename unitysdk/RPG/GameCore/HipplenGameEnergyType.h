#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameEnergyType_TypeDefinitionIndex = 24279;

	enum class HipplenGameEnergyType : ::System::Int32
	{
		Low = 0,
		Normal = 1,
		High = 2,
	};
}
