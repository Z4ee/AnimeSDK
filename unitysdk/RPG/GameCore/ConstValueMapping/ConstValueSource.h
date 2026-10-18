#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore::ConstValueMapping
{
	inline static constexpr unsigned int ConstValueSource_TypeDefinitionIndex = 43874;

	enum class ConstValueSource : ::System::Int32
	{
		None = 0,
		ClientTable = 1,
		CommonTable = 2,
	};
}
