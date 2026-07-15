#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FeverTimeStatisticsType_TypeDefinitionIndex = 55035;

	enum class FeverTimeStatisticsType : ::System::Int32
	{
		Activity = 0,
		Challenge = 1,
	};
}
