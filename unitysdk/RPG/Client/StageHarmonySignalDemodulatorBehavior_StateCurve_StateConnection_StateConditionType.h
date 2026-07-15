#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonySignalDemodulatorBehavior_StateCurve_StateConnection_StateConditionType_TypeDefinitionIndex = 67791;

	enum class StageHarmonySignalDemodulatorBehavior_StateCurve_StateConnection_StateConditionType : ::System::Int32
	{
		Greater = 0,
		GreaterOrEqual = 1,
		Less = 2,
		LessOrEqual = 3,
		Equal = 4,
	};
}
