#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowSystemUIState_TypeDefinitionIndex = 17894;

	enum class EHollowSystemUIState : ::System::Int16
	{
		Normal = 0,
		Close = 1,
		Brighten = 2,
	};
}
