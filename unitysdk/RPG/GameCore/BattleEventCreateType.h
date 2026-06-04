#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventCreateType_TypeDefinitionIndex = 53125;

	enum class BattleEventCreateType : ::System::Int32
	{
		Normal = 0,
		GridFightBackendBE = 1,
		BEServant = 2,
	};
}
