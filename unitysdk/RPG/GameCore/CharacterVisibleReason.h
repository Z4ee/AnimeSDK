#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterVisibleReason_TypeDefinitionIndex = 57388;

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
		MapRotationGroupUnload = 0x12,
		IsometricView = 0x13,
		GroupVisibility = 0x14,
		PuzzleMotion = 0x15,
		MonsterResetPos = 0x16,
		PerformanceDebug = 0x17,
		TrainParty = 0x18,
		Skill = 0x19,
		EraFlipDeviceControl = 0x1A,
		FiveDimGame = 0x1B,
		CharacterFormation = 0x1C,
		TeamFormation = 0x1D,
		Departed = 0x1E,
		GlobalControl = 0x1F,
		EffectLoading = 0x20,
		FollowFieldEfx = 0x21,
		Teleport = 0x22,
		AnimEvent = 0x23,
		BlockDither = 0x24,
		Activity = 0x25,
		SummonUnit = 0x26,
		CakeCatch = 0x27,
	};
}
