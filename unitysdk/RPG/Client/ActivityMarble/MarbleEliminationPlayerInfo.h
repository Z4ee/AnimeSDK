#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleEliminationRoundInfo; }
namespace RPG::Client::ActivityMarble { class MarblePvePlayer; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x9C02560)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x9C021F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO_INITFROM_OFFSET UNITYSDK_OFFSET(0x9C02160)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x9C02570)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9C02150)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleEliminationPlayerInfo_TypeDefinitionIndex = 68941;

	class MarbleEliminationPlayerInfo : public ::System::Object
	{
	public:
		::System::Boolean _IsWin_k__BackingField; // 0x10
		::System::Boolean IsFromLeft; // 0x11
		::System::UInt32 _PlayerID; // 0x14

		::System::Void _ctor(::System::UInt32 playerID, ::System::Boolean isWin)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO__CTOR_OFFSET))(this, playerID, isWin);
		}

		::System::Void InitFrom(::RPG::Client::ActivityMarble::MarbleEliminationRoundInfo* lastRoundInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleEliminationRoundInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO_INITFROM_OFFSET))(this, lastRoundInfo);
		}

		::RPG::Client::ActivityMarble::MarblePvePlayer* get_Player()
		{
			return ((::RPG::Client::ActivityMarble::MarblePvePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO_GET_PLAYER_OFFSET))(this);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO_SET_ISWIN_OFFSET))(this, value);
		}
	};
}
