#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AidType_TypeDefinitionIndex = 10115;

	enum class AidType : ::System::Int32
	{
		ProtectTeammate = 0,
		ProtectByCaster = 1,
	};
}
