#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NullableBool_TypeDefinitionIndex = 10055;

	enum class NullableBool : ::System::Int32
	{
		Null = 0,
		True = 1,
		False = 2,
	};
}
