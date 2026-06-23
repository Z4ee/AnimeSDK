#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UILevel_MpResult_PopWindowController_ExitMpGameProgress_State_TypeDefinitionIndex = 68959;

	enum class UILevel_MpResult_PopWindowController_ExitMpGameProgress_State : ::System::Int32
	{
		Idle = 0,
		NoContinue = 1,
		NonResponse = 2,
	};
}
