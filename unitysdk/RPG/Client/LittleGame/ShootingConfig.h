#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class PlacementConfig; }

#define RPG_CLIENT_LITTLEGAME_SHOOTINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF9EBD0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ShootingConfig_TypeDefinitionIndex = 41036;

	class ShootingConfig : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::PlacementConfig* BulletConfig; // 0x10
		::System::Single PlayerShootingCD; // 0x18
		::System::Single PlayerAttackCD; // 0x1C
		::System::Single DistanceToLayerBoundToDestroy; // 0x20
		::RPG::Client::LittleGame::PlacementConfig* EnemyBulletConfig; // 0x28
		::System::Single ShootTimeInterval; // 0x30
		::System::Single ShootRangeNear; // 0x34
		::System::Single ShootRangeFar; // 0x38
		::System::Single ShootProbability; // 0x3C
		::RPG::Client::LittleGame::PlacementConfig* AttackEffect; // 0x40
		::System::Single AttackEffectTime; // 0x48
		::RPG::Client::LittleGame::PlacementConfig* EnemyHitEffect; // 0x50
		::System::Single EnemyHitEffectTime; // 0x58
		::RPG::Client::LittleGame::PlacementConfig* EnemyBulletHitEffect; // 0x60
		::System::Single EnemyBulletHitEffectTime; // 0x68
		::RPG::Client::LittleGame::PlacementConfig* PropHitEffect; // 0x70
		::System::Single PropHitEffectTime; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_SHOOTINGCONFIG__CTOR_OFFSET))(this);
		}
	};
}
