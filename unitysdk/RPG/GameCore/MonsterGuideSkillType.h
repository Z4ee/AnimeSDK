#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterGuideSkillType_TypeDefinitionIndex = 13679;

	enum class MonsterGuideSkillType : ::System::Int32
	{
		Unknown = 0,
		Normal = 1,
		Sepcial = 2,
	};
}
