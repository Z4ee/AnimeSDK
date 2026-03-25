#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityType_TypeDefinitionIndex = 10048;

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
		ChessCharacter = 28,
		ChessTerrain = 29,
		SummonUnit = 30,
		LittleGameInstance = 31,
		Servant = 32,
		PreviewShow = 33,
		LittleGameContainer = 34,
		LittleGameViewProxy = 35,
		GridFightBackend = 36,
		DummyEntity = 37,
	};
}
