#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMainCityQuestScriptExecType_TypeDefinitionIndex = 13893;

	enum class EMainCityQuestScriptExecType : ::System::Int16
	{
		WhenEnterScene = 0,
		Immediately = 1,
		EnumCount = 2,
	};
}
