#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityType_TypeDefinitionIndex = 10085;

	enum class EntityType : ::System::Int32
	{
		None = 0,
		Avatar = 1,
		Monster = 2,
		LocalPlayer = 3,
		NPC = 4,
		NPCMonster = 5,
		StoryCharacter = 6,
		Prop = 7,
		Mission = 8,
		LevelEntity = 9,
		Neutral = 10,
		AtmoNpc = 11,
		BattleEvent = 12,
		TutorialEntity = 13,
		Team = 14,
		Partner = 15,
		LevelGraph = 16,
		Snapshot = 17,
		TeamFormation = 18,
		Model = 19,
		UICamera = 20,
		District = 21,
		GlobalShield = 22,
		CustomData = 23,
		Simple = 24,
		PuzzleGameObjectProp = 25,
		PerformanceLevelGraph = 26,
		Group = 27,
		RtCharacter = 28,
		RtGrid = 29,
		RtTrigger = 30,
		SummonUnit = 31,
		LittleGameInstance = 32,
		Servant = 33,
		PreviewShow = 34,
		LittleGameContainer = 35,
		LittleGameViewProxy = 36,
		GridFightBackend = 37,
		DummyEntity = 38,
	};
}
