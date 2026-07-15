#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterVisibleReason_TypeDefinitionIndex = 54667;

	enum class CharacterVisibleReason : ::System::Byte
	{
		Default = 0x0,
		Dither = 0x1,
		Camera = 0x2,
		CameraForceHide = 0x3,
		CumstomCounter = 0x4,
		DebugCommand = 0x5,
		Inspector = 0x6,
		Lod = 0x7,
		Task = 0x8,
		TaskUniqueKey = 0x9,
		TeamManager = 0xA,
		ControledByPlayer = 0xB,
		Performance = 0xC,
		MonsterSneak = 0xD,
		Puzzle = 0xE,
		PhotoGraph = 0xF,
		MapRotation = 0x10,
		MapRotationEffect = 0x11,
		IsometricView = 0x12,
		GroupVisibility = 0x13,
		PuzzleMotion = 0x14,
		MonsterResetPos = 0x15,
		PerformanceDebug = 0x16,
		TrainParty = 0x17,
		Skill = 0x18,
		EraFlipDeviceControl = 0x19,
		FiveDimGame = 0x1A,
		CharacterFormation = 0x1B,
		TeamFormation = 0x1C,
		Departed = 0x1D,
		GlobalControl = 0x1E,
		EffectLoading = 0x1F,
		FollowFieldEfx = 0x20,
		Teleport = 0x21,
		AnimEvent = 0x22,
		BlockDither = 0x23,
		Activity = 0x24,
		SummonUnit = 0x25,
		CakeCatch = 0x26,
	};
}
