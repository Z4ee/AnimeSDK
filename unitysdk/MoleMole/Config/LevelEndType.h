#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelEndType_TypeDefinitionIndex = 76641;

	enum class LevelEndType : ::System::Int32
	{
		DirectKill = 2,
		Instant = 4,
		IndirectKill = 3,
		Unknown = 0,
		LevelFailed = 1,
		Dialog = 5,
	};
}
