#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int EntityTag_TypeDefinitionIndex = 40681;

	enum class EntityTag : ::System::Int32
	{
		Unknown = 0,
		Player = 1,
		PlayerPhysicsProxy = 2,
		PlayerJumpEnergyView = 3,
		Entry = 4,
		Stage = 5,
		GeckoPhysicsProxy = 6,
		ArrowPhysicsProxy = 7,
		FloatingSpiritPhysicsProxy = 8,
		MascotFakePlayer = 9,
		GarbageBinPhysicsProxy = 10,
		MusicFloatingSpirit = 11,
		MissilePhysicsProxy = 12,
		EvilSmilePhysicsProxy = 13,
		GrenadierPhysicsProxy = 14,
		SimpleProjectilePhysicsProxy = 15,
		CleanerBotPhysicsProxy = 16,
		DragonDogPhysicsProxy = 17,
	};
}
