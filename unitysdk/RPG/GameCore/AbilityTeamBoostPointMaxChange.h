#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA811370)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE_GETCHANGETEAM_OFFSET UNITYSDK_OFFSET(0xA811450)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xA811490)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA811400)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA8113C0)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xA7D99E0)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA8114D0)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA8114E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityTeamBoostPointMaxChange_TypeDefinitionIndex = 45474;

	class AbilityTeamBoostPointMaxChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* ModifySourceEntity; // 0x18
		::System::String* Reason; // 0x20
		::RPG::GameCore::TeamType _ChangeTeam; // 0x28
		::System::UInt32 _SourceEntityRuntimeID; // 0x2C
		::RPG::GameCore::FixPoint _ChangeValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityTeamBoostPointMaxChange* Init(::System::UInt32 nSourceRuntimeID, ::RPG::GameCore::TeamType eTeam, ::RPG::GameCore::FixPoint fChangeValue, ::System::String* sReason, ::RPG::GameCore::GameEntity* pModifySourceEntity)
		{
			return ((::RPG::GameCore::AbilityTeamBoostPointMaxChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::TeamType, ::RPG::GameCore::FixPoint, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE_INIT_OFFSET))(this, nSourceRuntimeID, eTeam, fChangeValue, sReason, pModifySourceEntity);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::TeamType GetChangeTeam()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE_GETCHANGETEAM_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
