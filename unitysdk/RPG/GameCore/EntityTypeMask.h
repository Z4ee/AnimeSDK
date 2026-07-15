#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityTypeMask_TypeDefinitionIndex = 10086;

	enum class EntityTypeMask : ::System::UInt64
	{
		None = 0x0,
		All = 0xFFFFFFFFFFFFFFFF,
		NoneType = 0x1,
		Avatar = 0x2,
		Monster = 0x4,
		LocalPlayer = 0x8,
		NPC = 0x10,
		NPCMonster = 0x20,
		StoryCharacter = 0x40,
		Prop = 0x80,
		Mission = 0x100,
		LevelEntity = 0x200,
		Neutral = 0x400,
		AtmoNpc = 0x800,
		BattleEvent = 0x1000,
		TutorialEntity = 0x2000,
		Team = 0x4000,
		Partner = 0x8000,
		LevelGraph = 0x10000,
		Snapshot = 0x20000,
		TeamFormation = 0x40000,
		Model = 0x80000,
		UICamera = 0x100000,
		District = 0x200000,
		GlobalShield = 0x400000,
		CustomData = 0x800000,
		Simple = 0x1000000,
		PuzzleGameObjectProp = 0x2000000,
		PerformanceLevelGraph = 0x4000000,
		Group = 0x8000000,
		RtCharacter = 0x10000000,
		RtGrid = 0x20000000,
		RtTrigger = 0x40000000,
		SummonUnit = 0x80000000,
		LittleGameInstance = 0x100000000,
		Servant = 0x200000000,
		PreviewShow = 0x400000000,
		LittleGameContainer = 0x800000000,
		LittleGameViewProxy = 0x1000000000,
		GridFightBackend = 0x2000000000,
		DummyEntity = 0x4000000000,
		Battle_AllEntity = 0x200001206,
		Battle_VisibleControlled = 0x200009006,
		Battle_AllActionEntity = 0x200001006,
		Mask_TeamCharacters = 0x21000103E,
		Mask_AllVisibleControlled = 0x29000903E,
	};
}
