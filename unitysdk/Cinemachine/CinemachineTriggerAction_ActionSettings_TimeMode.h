#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTriggerAction_ActionSettings_TimeMode_TypeDefinitionIndex = 37705;

	enum class CinemachineTriggerAction_ActionSettings_TimeMode : ::System::Int32
	{
		FromStart = 0,
		FromEnd = 1,
		BeforeNow = 2,
		AfterNow = 3,
	};
}
