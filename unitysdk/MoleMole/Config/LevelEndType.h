#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelEndType_TypeDefinitionIndex = 46644;

	enum class LevelEndType : ::System::Int32
	{
		Instant = 4,
		IndirectKill = 3,
		DirectKill = 2,
		LevelFailed = 1,
		Unknown = 0,
		Dialog = 5,
	};
}
