#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelEndType_TypeDefinitionIndex = 43738;

	enum class LevelEndType : ::System::Int32
	{
		LevelFailed = 1,
		Dialog = 5,
		IndirectKill = 3,
		Unknown = 0,
		Instant = 4,
		DirectKill = 2,
	};
}
