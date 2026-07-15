#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LogicOperation_TypeDefinitionIndex = 10075;

	enum class LogicOperation : ::System::Int32
	{
		None = 0,
		Or = 1,
		And = 2,
	};
}
