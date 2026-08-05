#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageController_QAState_TypeDefinitionIndex = 75912;

	enum class UICampIdlePageController_QAState : ::System::Int32
	{
		CanRestart = 2,
		Processing = 1,
		NoNeedToRestart = 3,
		CanStart = 0,
	};
}
