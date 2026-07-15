#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidFailedType_TypeDefinitionIndex = 14002;

	enum class RaidFailedType : ::System::Int32
	{
		Unknown = 0,
		BattleFail = 1,
	};
}
