#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/BpChangeReason.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xCCB40B0)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTCHANGE_GETCHANGETEAM_OFFSET UNITYSDK_OFFSET(0xCCB4190)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xCCB41D0)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCCB4140)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCCB4100)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xCCB4020)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xCCB4210)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTCHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCCB4220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityTeamBoostPointChange_TypeDefinitionIndex = 52820;

	class AbilityTeamBoostPointChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* ModifySourceEntity; // 0x18
		::RPG::GameCore::TeamType _ChangeTeam; // 0x20
		::RPG::GameCore::BpChangeReason Reason; // 0x24
		::System::UInt32 _SourceEntityRuntimeID; // 0x28
		::RPG::GameCore::FixPoint _ChangeValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTEAMBOOSTPOINTCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityTeamBoostPointChange* Init(::System::UInt32 a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::BpChangeReason a4, ::RPG::GameCore::GameEntity* a5)
		{
			return ((::RPG::GameCore::AbilityTeamBoostPointChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::TeamType, ::RPG::GameCore::FixPoint, ::RPG::GameCore::BpChangeReason, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTEAMBOOSTPOINTCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTEAMBOOSTPOINTCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTEAMBOOSTPOINTCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTEAMBOOSTPOINTCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::TeamType GetChangeTeam()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTEAMBOOSTPOINTCHANGE_GETCHANGETEAM_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTEAMBOOSTPOINTCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTEAMBOOSTPOINTCHANGE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
