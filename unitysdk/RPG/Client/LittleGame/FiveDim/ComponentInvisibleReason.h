#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int ComponentInvisibleReason_TypeDefinitionIndex = 40700;

	enum class ComponentInvisibleReason : ::System::UInt32
	{
		None = 0x0,
		Default = 0x1,
		Task = 0x2,
		PhantomPlayerDefault = 0x4,
		DestructProp = 0x8,
		SwitchPlatform = 0x10,
		WaterReflection = 0x20,
		EntityVisible = 0x40,
		FlappyPipeRebuild = 0x80,
		DisableMove = 0x100,
		FloatingSpirit = 0x200,
		GarbageBin = 0x400,
		WaterReflectionGridViewColliderClip = 0x800,
		WindowStage = 0x1000,
		SpikeTrap = 0x2000,
		MinionDying = 0x4000,
		PlayerReset = 0x8000,
		GravitySwitchLine = 0x10000,
		Portal = 0x20000,
		MoneyWeeklyLimit = 0x40000,
		Crystal = 0x80000,
		CustomLoadFade = 0x100000,
		GravityFieldRing = 0x200000,
		DashOrb = 0x400000,
		MinionInit = 0x800000,
		SimpleHitBox = 0x1000000,
		CrystalFreeze = 0x2000000,
		ConveyorDirection = 0x8000000,
		Max = 0x80000000,
	};
}
