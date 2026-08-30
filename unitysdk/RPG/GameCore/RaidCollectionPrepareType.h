#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidCollectionPrepareType_TypeDefinitionIndex = 12235;

	enum class RaidCollectionPrepareType : ::System::Int32
	{
		None = 0,
		EditTeam = 1,
		DirectStart = 2,
	};
}
