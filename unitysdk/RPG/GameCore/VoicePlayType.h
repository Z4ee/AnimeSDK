#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int VoicePlayType_TypeDefinitionIndex = 10279;

	enum class VoicePlayType : ::System::Int32
	{
		Story = 0,
		Cutscene = 1,
		NPC_Near = 3,
		NPC_Normal = 4,
		NPC_Far = 5,
		Archive = 6,
		MissionTalk_3d = 7,
		BroadcastNear = 8,
		BroadcastNormal = 9,
		BroadcastFar = 10,
		BroadcastUltraFar1 = 11,
		BroadcastUltraFar2 = 12,
		BroadcastUltraFar3 = 13,
		StoryNew = 14,
		NPC_Near_NoDuck = 15,
		NPC_Normal_NoDuck = 16,
		NPC_Far_NoDuck = 17,
		SystemReverb1 = 18,
		NoVoice = 99,
	};
}
