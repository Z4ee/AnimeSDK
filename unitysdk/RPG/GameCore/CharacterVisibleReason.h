#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterVisibleReason_TypeDefinitionIndex = 46081;

	enum class CharacterVisibleReason : ::System::Byte
	{
		Default = 0x0,
		Dither = 0x1,
		Camera = 0x2,
		CameraForceHide = 0x3,
		DebugCommand = 0x4,
		Inspector = 0x5,
		Lod = 0x6,
		Task = 0x7,
		TaskUniqueKey = 0x8,
		TeamManager = 0x9,
		ControledByPlayer = 0xA,
		Performance = 0xB,
		MonsterSneak = 0xC,
		Puzzle = 0xD,
		PhotoGraph = 0xE,
		MapRotation = 0xF,
		MapRotationEffect = 0x10,
		IsometricView = 0x11,
		GroupVisibility = 0x12,
		PuzzleMotion = 0x13,
		MonsterResetPos = 0x14,
		PerformanceDebug = 0x15,
		TrainParty = 0x16,
		Skill = 0x17,
		EraFlipDeviceControl = 0x18,
		FiveDimGame = 0x19,
		CharacterFormation = 0x1A,
		TeamFormation = 0x1B,
		Departed = 0x1C,
		GlobalControl = 0x1D,
		EffectLoading = 0x1E,
		FollowFieldEfx = 0x1F,
		Teleport = 0x20,
		AnimEvent = 0x21,
		BlockDither = 0x22,
		Activity = 0x23,
		SummonUnit = 0x24,
	};
}
