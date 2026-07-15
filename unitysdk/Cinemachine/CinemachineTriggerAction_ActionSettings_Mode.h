#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTriggerAction_ActionSettings_Mode_TypeDefinitionIndex = 37703;

	enum class CinemachineTriggerAction_ActionSettings_Mode : ::System::Int32
	{
		Custom = 0,
		PriorityBoost = 1,
		Activate = 2,
		Deactivate = 3,
		Enable = 4,
		Disable = 5,
		Play = 6,
		Stop = 7,
	};
}
