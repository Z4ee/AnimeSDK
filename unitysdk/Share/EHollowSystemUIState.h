#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowSystemUIState_TypeDefinitionIndex = 12252;

	enum class EHollowSystemUIState : ::System::Int16
	{
		Normal = 0,
		Brighten = 2,
		Close = 1,
	};
}
