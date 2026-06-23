#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageController_QAState_TypeDefinitionIndex = 86930;

	enum class UICampIdlePageController_QAState : ::System::Int32
	{
		CanStart = 0,
		NoNeedToRestart = 3,
		CanRestart = 2,
		Processing = 1,
	};
}
