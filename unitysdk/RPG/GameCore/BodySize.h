#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BodySize_TypeDefinitionIndex = 10095;

	enum class BodySize : ::System::Int32
	{
		Male = 0,
		Lady = 1,
		Lad = 2,
		Miss = 3,
		Maid = 4,
		Boy = 5,
		Girl = 6,
		Kid = 7,
		None = 99,
	};
}
