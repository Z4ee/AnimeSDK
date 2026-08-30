#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BossPhase.h"
#include "unitysdk/RPG/Client/LittleGame/MovieEnemyConfig.h"
#include "unitysdk/RPG/MVector3.h"

namespace RPG::Client::LittleGame { class ActionGroupConfig; }
namespace RPG::Client::LittleGame { class PlacementConfig; }
namespace RPG::Client::LittleGame { class PlacementGroupConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_MOVIEBOSSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4996C0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieBossConfig_TypeDefinitionIndex = 41030;

	class MovieBossConfig : public ::RPG::Client::LittleGame::MovieEnemyConfig
	{
	public:
		::System::Single BornMile; // 0x30
		::System::Single Phase1BornLayerMoveMile; // 0x34
		::System::Single LayerMoveMile; // 0x38
		::RPG::Client::LittleGame::BossPhase TargetBossPhase; // 0x3C
		::System::Single Phse1MaxHP; // 0x40
		::System::Single Phse2MaxHP; // 0x44
		::System::Single ShootingDamge; // 0x48
		::System::Single BeatBossScore; // 0x4C
		::System::Single DelayDieToFadeoutTime; // 0x50
		::System::Single DelayFinishGameTime; // 0x54
		::System::Single AttackStateKeepTime; // 0x58
		::System::Single HitStateKeepTime; // 0x5C
		::RPG::Client::LittleGame::PlacementConfig* EnemyBulletConfig; // 0x60
		::RPG::Client::LittleGame::PlacementConfig* TurnEnemyBulletConfig; // 0x68
		::RPG::Client::LittleGame::PlacementConfig* PrepareFireConfig; // 0x70
		::RPG::Client::LittleGame::PlacementConfig* FireEffectConfig; // 0x78
		::RPG::Client::LittleGame::PlacementConfig* CounterBulletEffectConfig; // 0x80
		::RPG::Client::LittleGame::PlacementConfig* BossHitEffectConfig; // 0x88
		::RPG::Client::LittleGame::PlacementConfig* GameFinishEffectConfig; // 0x90
		::RPG::Client::LittleGame::PlacementConfig* BossFadeinEffectConfig; // 0x98
		::RPG::Client::LittleGame::PlacementConfig* BossFadeoutEffectConfig; // 0xA0
		::System::Single FireBulletHeightOffset; // 0xA8
		::System::Single PrepareFireEffectTime; // 0xAC
		::System::Single FireEffectTime; // 0xB0
		::System::Single PrepareFireEffectOffset; // 0xB4
		::System::Single CounterBulletRotateTime; // 0xB8
		::System::Single CounterBulletEffectTime; // 0xBC
		::System::Single CounterBulletHeightOffset; // 0xC0
		::System::Single GameFinishEffecttTime; // 0xC4
		::System::Single BossFadeinEffecttTime; // 0xC8
		::System::Single BossFadeoutEffecttTime; // 0xCC
		::RPG::MVector3 CounterBulletEffectOffset; // 0xD0
		::System::Single BossHitEffectTime; // 0xDC
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ActionGroupConfig*>* ActionGroupPhase1List; // 0xE0
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ActionGroupConfig*>* ActionGroupPhase2List; // 0xE8
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::PlacementGroupConfig*>* EnemyGroupConfigList; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEBOSSCONFIG__CTOR_OFFSET))(this);
		}
	};
}
