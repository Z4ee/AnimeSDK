#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMainCityQuestScriptExecType_TypeDefinitionIndex = 9021;

	enum class EMainCityQuestScriptExecType : ::System::Int16
	{
		WhenEnterScene = 0,
		EnumCount = 2,
		Immediately = 1,
	};
}
