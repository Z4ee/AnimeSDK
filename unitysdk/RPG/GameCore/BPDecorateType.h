#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BPDecorateType_TypeDefinitionIndex = 24753;

	enum class BPDecorateType : ::System::Int32
	{
		All = 0,
		OnlyWhenGain = 1,
		OnlyWhenCost = 2,
	};
}
