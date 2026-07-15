#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HudType_TypeDefinitionIndex = 13273;

	enum class HudType : ::System::Int32
	{
		None = 0,
		Phone = 1,
		Map = 2,
		Mission = 3,
		Message = 4,
		Guide = 5,
		Chat = 6,
		QuickEntrance = 7,
		MissionTrace = 8,
		Team = 9,
		Joystick = 10,
		ActionNormal = 11,
		Buff = 12,
		Attack = 13,
		Skill = 14,
		Run = 15,
		StoryLine = 16,
		Talk = 17,
		ActivityInvite = 18,
		SkillMP = 19,
		ActionSkillTag = 20,
		ActionDrone = 101,
		WolfBro = 102,
		OnlinePlayRoomManagement = 420,
	};
}
