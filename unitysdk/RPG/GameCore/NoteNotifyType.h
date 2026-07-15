#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NoteNotifyType_TypeDefinitionIndex = 16276;

	enum class NoteNotifyType : ::System::Int32
	{
		Sound = 0,
		Animation = 1,
		Bubble = 2,
		AnimSpeed = 3,
		RobotEmotion = 4,
		ShowHint = 5,
		Effect = 6,
		PuManHint = 7,
		PuManMove = 8,
		SetTargetType = 9,
		SetTargetPos = 10,
		SetTV = 11,
		HanuHint = 12,
		HanuBar = 13,
	};
}
