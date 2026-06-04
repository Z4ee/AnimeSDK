#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PlayerHitReason.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMESTATISTICCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18CDC260)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameStatisticComponent_TypeDefinitionIndex = 39403;

	class MovieGameStatisticComponent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::PlayerHitReason>* PlayerHitResons; // 0x10
		::System::Int32 FeverTime; // 0x18
		::System::Int32 ContinuousNicePass; // 0x1C
		::System::Int32 MissBossBullet; // 0x20
		::System::Int32 HitEnemy; // 0x24
		::System::Int32 CounterBullet; // 0x28
		::System::Int32 HitProp; // 0x2C
		::System::Single PlayTime; // 0x30
		::System::Int32 PlayerHitCount; // 0x34
		::System::Single Score; // 0x38
		::System::Int32 NicePass; // 0x3C
		::System::Int32 MissPropCount; // 0x40
		::System::Int32 EnemyEscapeCount; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMESTATISTICCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
