#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELCREATEPLAYERTEAMFINISH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD194B0)
#define RPG_GAMECORE_LEVELCREATEPLAYERTEAMFINISH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD19500)
#define RPG_GAMECORE_LEVELCREATEPLAYERTEAMFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD19550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCreatePlayerTeamFinish_TypeDefinitionIndex = 56907;

	class LevelCreatePlayerTeamFinish : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCREATEPLAYERTEAMFINISH__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCREATEPLAYERTEAMFINISH_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCREATEPLAYERTEAMFINISH_GETSOURCERUNTIMEID_OFFSET))(this);
		}
	};
}
