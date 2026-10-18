#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE533B70)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE_GETCHANGETEAM_OFFSET UNITYSDK_OFFSET(0xE533C50)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE533C90)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE533C00)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE533BC0)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE533AE0)
#define RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE533CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityTeamBoostPointMaxChange_TypeDefinitionIndex = 56574;

	class AbilityTeamBoostPointMaxChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::String* Reason; // 0x18
		::RPG::GameCore::GameEntity* ModifySourceEntity; // 0x20
		::RPG::GameCore::FixPoint _ChangeValue; // 0x28
		::System::UInt32 _SourceEntityRuntimeID; // 0x30
		::RPG::GameCore::TeamType _ChangeTeam; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityTeamBoostPointMaxChange* Init(::System::UInt32 a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::FixPoint a3, ::System::String* a4, ::RPG::GameCore::GameEntity* a5)
		{
			return ((::RPG::GameCore::AbilityTeamBoostPointMaxChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::TeamType, ::RPG::GameCore::FixPoint, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYTEAMBOOSTPOINTMAXCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
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
	};
}
