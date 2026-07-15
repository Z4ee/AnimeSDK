#pragma once
#include "unitysdk/unitysdk.h"

namespace StageBudgetTool
{
	inline static constexpr unsigned int PassageConnectivity_TypeDefinitionIndex = 45951;

	enum class PassageConnectivity : ::System::Int32
	{
		Insideof = 0,
		Connnect = 1,
		HalfObstruct = 2,
		Obstruct = 3,
	};
}
