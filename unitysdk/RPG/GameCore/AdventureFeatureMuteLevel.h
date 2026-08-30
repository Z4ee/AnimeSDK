#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureFeatureMuteLevel_TypeDefinitionIndex = 57203;

	enum class AdventureFeatureMuteLevel : ::System::Int32
	{
		None = 0,
		MuteAction = 1,
		Full = 2,
	};
}
