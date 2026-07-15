#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationPointReadType_TypeDefinitionIndex = 23789;

	enum class ElationPointReadType : ::System::Int32
	{
		Default = 0,
		BasePoint = 1,
		OverridePoint = 2,
	};
}
