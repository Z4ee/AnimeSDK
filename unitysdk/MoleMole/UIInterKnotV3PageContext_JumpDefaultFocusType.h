#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotV3PageContext_JumpDefaultFocusType_TypeDefinitionIndex = 64617;

	enum class UIInterKnotV3PageContext_JumpDefaultFocusType : ::System::Int32
	{
		MissionTabFocusQuestRuntime = 4,
		MissionTabFocusMainQuest = 2,
		MissionTabFocusQuest = 3,
		MissionTabFocusCurrentTrackQuest = 1,
	};
}
