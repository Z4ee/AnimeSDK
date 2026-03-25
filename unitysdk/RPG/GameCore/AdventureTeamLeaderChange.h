#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA86A030)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA86A080)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA86A0D0)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GET_LEADERENTITY_OFFSET UNITYSDK_OFFSET(0xA86A140)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GET_OLDLEADERENTITY_OFFSET UNITYSDK_OFFSET(0xA86A120)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xA869FD0)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_SET_LEADERENTITY_OFFSET UNITYSDK_OFFSET(0xA86A150)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_SET_OLDLEADERENTITY_OFFSET UNITYSDK_OFFSET(0xA86A130)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA86A160)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA86A170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTeamLeaderChange_TypeDefinitionIndex = 45509;

	class AdventureTeamLeaderChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* _OldLeaderEntity_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _LeaderEntity_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureTeamLeaderChange* Init(::RPG::GameCore::GameEntity* oldLeader, ::RPG::GameCore::GameEntity* leader)
		{
			return ((::RPG::GameCore::AdventureTeamLeaderChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_INIT_OFFSET))(this, oldLeader, leader);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OldLeaderEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GET_OLDLEADERENTITY_OFFSET))(this);
		}

		::System::Void set_OldLeaderEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_SET_OLDLEADERENTITY_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_LeaderEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GET_LEADERENTITY_OFFSET))(this);
		}

		::System::Void set_LeaderEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_SET_LEADERENTITY_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
