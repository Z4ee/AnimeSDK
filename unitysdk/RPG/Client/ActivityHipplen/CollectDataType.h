#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int CollectDataType_TypeDefinitionIndex = 70371;

	enum class CollectDataType : ::System::Int32
	{
		Trait = 0,
		Ending = 1,
	};
}
