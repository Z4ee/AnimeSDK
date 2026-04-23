#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_E14A0A1A8B1F847C_14;
namespace RPG::Client { class TreasureDungeonLevel; }
namespace System { class String; }

#define RPG_CLIENT_TREASUREDUNGEONEXITPARAM_SYNC_OFFSET UNITYSDK_OFFSET(0xB3857A0)
#define RPG_CLIENT_TREASUREDUNGEONEXITPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB3863D0)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonExitParam_TypeDefinitionIndex = 62869;

	class TreasureDungeonExitParam : public ::System::Object
	{
	public:
		::System::String* AttackExIcon; // 0x10
		::System::UInt32 CurFloor; // 0x18
		::System::UInt32 AttackAdd; // 0x1C
		::System::UInt32 TotalUltraItemFound; // 0x20
		::System::UInt32 MaxFloor; // 0x24
		::RPG::Client::TextID AttackExName; // 0x28
		::System::UInt32 DefenceAdd; // 0x38
		::System::UInt32 TotalAttackItemFound; // 0x3C
		::System::UInt32 TotalEnemyKilled; // 0x40
		::System::UInt32 TotalExploreUsed; // 0x44
		::System::UInt32 TotalTrialAvatarFound; // 0x48
		::System::UInt32 TotalBuffFound; // 0x4C
		::System::UInt32 TotalDefenceItemFound; // 0x50
		::System::Boolean IsWin; // 0x54
		::System::Boolean IsFinish; // 0x55
		::System::Boolean IsAllDead; // 0x56
		::System::UInt32 AttackExAdd; // 0x58
		::System::UInt32 GroupID; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONEXITPARAM__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_E14A0A1A8B1F847C_14* notify, ::RPG::Client::TreasureDungeonLevel* level)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_14*, ::RPG::Client::TreasureDungeonLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONEXITPARAM_SYNC_OFFSET))(this, notify, level);
		}
	};
}
