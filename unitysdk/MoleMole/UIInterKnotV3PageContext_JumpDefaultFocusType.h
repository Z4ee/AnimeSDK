#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotV3PageContext_JumpDefaultFocusType_TypeDefinitionIndex = 85854;

	enum class UIInterKnotV3PageContext_JumpDefaultFocusType : ::System::Int32
	{
		MissionTabFocusQuestRuntime = 4,
		MissionTabFocusQuest = 3,
		MissionTabFocusMainQuest = 2,
		MissionTabFocusCurrentTrackQuest = 1,
	};
}
