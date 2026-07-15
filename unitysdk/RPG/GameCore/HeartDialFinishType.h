#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialFinishType_TypeDefinitionIndex = 10168;

	enum class HeartDialFinishType : ::System::Int32
	{
		Unknow = 0,
		AutoFinish = 1,
		FinishMainMission = 2,
		FinishSubMission = 3,
		ConsumeSingleItem = 4,
		ConsumeDoubleItem = 5,
		ConsumeThreeItem = 6,
	};
}
