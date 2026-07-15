#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyStaticType_TypeDefinitionIndex = 14839;

	enum class TrainPartyStaticType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Rubbish = 2,
		Clean = 3,
	};
}
