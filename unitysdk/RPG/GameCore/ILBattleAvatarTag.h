#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleAvatarTag_TypeDefinitionIndex = 10212;

	enum class ILBattleAvatarTag : ::System::Int32
	{
		Unknown = 0,
		Assault = 1,
		Debuff = 2,
		Hunt = 3,
		Almighty = 4,
	};
}
