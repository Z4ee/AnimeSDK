#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EntityType_TypeDefinitionIndex = 68426;

	enum class EntityType : ::System::Int32
	{
		Effect = 17,
		UIMonster = 32,
		Count = 41,
		LevelArea = 9,
		Follower = 3,
		Trigger = 10,
		CurveMove = 29,
		DropItem = 13,
		UIBuddy = 31,
		UI3DModel = 34,
		MainCityAvatarData = 37,
		UIAvatar = 28,
		SmallItem = 40,
		Robot = 4,
		MainCamera = 11,
		TeamEntity = 25,
		Buddy = 20,
		ExecuteCore = 19,
		None = 0,
		TimeDrivenAttack = 15,
		SceneObject = 26,
		AraTrail = 24,
		ServerTriggerBox = 23,
		Crate = 16,
		MiniMap = 12,
		Skybox = 7,
		IndicatedLight = 35,
		Particle = 6,
		Level = 8,
		Monster = 2,
		Bullet = 14,
		Gadget = 39,
		DodgeDummy = 18,
		UIWeapon = 33,
		NPC = 5,
		Avatar = 1,
		PartyGameSceneObj = 38,
		EnemyIndicator = 27,
		ServerNPC = 22,
		SimpleRigidbody = 30,
		Prop = 36,
		Other = 21,
	};
}
