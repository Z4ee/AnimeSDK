#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChronicleCustomShowConditionType_TypeDefinitionIndex = 18225;

	enum class ChronicleCustomShowConditionType : ::System::Int32
	{
		FinishMainMission = 0,
		FinishSubMission = 1,
	};
}
