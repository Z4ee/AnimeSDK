#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitLogSwitch_TypeDefinitionIndex = 74306;

	enum class RelicSmartSuitLogSwitch : ::System::Int32
	{
		None = 0,
		InSelfPlanStage = 1,
		InSystemPlanStage = 2,
		InHighlyPlanStage = 4,
		InCustomPlanStage = 8,
		InAllStage = 15,
		RelicHead = 256,
		RelicHand = 512,
		RelicBody = 1024,
		RelicFoot = 2048,
		RelicNeck = 4096,
		RelicObject = 8192,
		RelicAllType = 16128,
		RelicUID = 16384,
	};
}
