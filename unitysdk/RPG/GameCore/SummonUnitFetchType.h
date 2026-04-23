#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitFetchType_TypeDefinitionIndex = 22877;

	enum class SummonUnitFetchType : ::System::Int32
	{
		All = 0,
		Latest = 1,
		Oldest = 2,
	};
}
