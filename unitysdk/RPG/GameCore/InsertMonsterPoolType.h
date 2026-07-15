#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int InsertMonsterPoolType_TypeDefinitionIndex = 23864;

	enum class InsertMonsterPoolType : ::System::Int32
	{
		Unknown = 0,
		Normal = 1,
		Elite = 2,
		Boss = 3,
		SpecialElite = 4,
		SpecialBoss = 5,
	};
}
