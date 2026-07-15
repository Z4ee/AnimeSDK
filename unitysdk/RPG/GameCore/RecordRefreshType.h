#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecordRefreshType_TypeDefinitionIndex = 13529;

	enum class RecordRefreshType : ::System::Int32
	{
		Unknown = 0,
		Countdown = 1,
		Weekly = 2,
		Immediately = 3,
		Never = 4,
	};
}
