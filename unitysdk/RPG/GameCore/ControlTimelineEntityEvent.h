#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ControlTimelineEntityEvent_TypeDefinitionIndex = 54910;

	enum class ControlTimelineEntityEvent : ::System::Int32
	{
		StartControl = 0,
		EndControl = 1,
		StateChange = 2,
		StateExit = 3,
		StateEnter = 4,
		Pause = 5,
		ResumePause = 6,
		AddPause = 7,
		RemovePause = 8,
		BeSelected = 9,
		BeUnselected = 10,
	};
}
