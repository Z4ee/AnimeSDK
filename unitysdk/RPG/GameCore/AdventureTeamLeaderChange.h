#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB5AECF0)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB5AED40)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB5AED90)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GET_LEADERENTITY_OFFSET UNITYSDK_OFFSET(0xB5AEE00)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GET_OLDLEADERENTITY_OFFSET UNITYSDK_OFFSET(0xB5AEDE0)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xB5AEC90)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_SET_LEADERENTITY_OFFSET UNITYSDK_OFFSET(0xB5AEE10)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_SET_OLDLEADERENTITY_OFFSET UNITYSDK_OFFSET(0xB5AEDF0)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB5AEE20)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB5AEE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTeamLeaderChange_TypeDefinitionIndex = 52159;

	class AdventureTeamLeaderChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* _LeaderEntity_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _OldLeaderEntity_k__BackingField; // 0x20

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
