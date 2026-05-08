#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EntityType_TypeDefinitionIndex = 74206;

	enum class EntityType : ::System::Int32
	{
		UIBuddy = 31,
		UIMonster = 32,
		MainCityAvatarData = 37,
		Avatar = 1,
		ServerNPC = 22,
		MainCamera = 11,
		Buddy = 20,
		PartyGameSceneObj = 38,
		AraTrail = 24,
		Skybox = 7,
		IndicatedLight = 35,
		CurveMove = 29,
		TeamEntity = 25,
		Level = 8,
		Bullet = 14,
		SmallItem = 40,
		SimpleRigidbody = 30,
		NPC = 5,
		Gadget = 39,
		Effect = 17,
		Other = 21,
		Follower = 3,
		Particle = 6,
		None = 0,
		Crate = 16,
		UIAvatar = 28,
		Count = 41,
		ServerTriggerBox = 23,
		UIWeapon = 33,
		UI3DModel = 34,
		MiniMap = 12,
		Monster = 2,
		EnemyIndicator = 27,
		ExecuteCore = 19,
		Trigger = 10,
		Prop = 36,
		DodgeDummy = 18,
		TimeDrivenAttack = 15,
		SceneObject = 26,
		DropItem = 13,
		Robot = 4,
		LevelArea = 9,
	};
}
