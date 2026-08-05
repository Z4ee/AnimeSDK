#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EntityType_TypeDefinitionIndex = 40785;

	enum class EntityType : ::System::Int32
	{
		Prop = 36,
		PartyGameSceneObj = 38,
		UI3DModel = 34,
		CurveMove = 29,
		TeamEntity = 25,
		Trigger = 10,
		ServerTriggerBox = 23,
		SmallItem = 40,
		UIMonster = 32,
		ServerNPC = 22,
		EnemyIndicator = 27,
		UIWeapon = 33,
		MiniMap = 12,
		None = 0,
		Other = 21,
		AraTrail = 24,
		Particle = 6,
		UIBuddy = 31,
		ExecuteCore = 19,
		IndicatedLight = 35,
		DodgeDummy = 18,
		MainCityAvatarData = 37,
		UIAvatar = 28,
		Skybox = 7,
		Level = 8,
		Effect = 17,
		Crate = 16,
		Monster = 2,
		Count = 42,
		Avatar = 1,
		LevelArea = 9,
		DropItem = 13,
		Gadget = 39,
		MainCamera = 11,
		Bullet = 14,
		SceneObject = 26,
		NPC = 5,
		Follower = 3,
		SimpleRigidbody = 30,
		TimelineActor = 41,
		Buddy = 20,
		TimeDrivenAttack = 15,
		Robot = 4,
	};
}
