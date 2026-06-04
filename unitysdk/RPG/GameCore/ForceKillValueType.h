#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceKillValueType_TypeDefinitionIndex = 17340;

	enum class ForceKillValueType : ::System::Int32
	{
		None = 0,
		Ratio = 1,
		AbsoluteValue = 2,
	};
}
