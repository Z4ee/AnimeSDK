#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetHudType_TypeDefinitionIndex = 53239;

	enum class TargetHudType : ::System::Int32
	{
		Normal = 0,
		ToFever = 1,
		InFever = 2,
	};
}
