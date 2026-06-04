#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleEliminationRoundInfo; }
namespace RPG::Client::ActivityMarble { class MarblePvePlayer; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xB19F500)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0xB19F190)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO_INITFROM_OFFSET UNITYSDK_OFFSET(0xB19F100)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xB19F510)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB19F0F0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleEliminationPlayerInfo_TypeDefinitionIndex = 69753;

	class MarbleEliminationPlayerInfo : public ::System::Object
	{
	public:
		::System::UInt32 _PlayerID; // 0x10
		::System::Boolean _IsWin_k__BackingField; // 0x14
		::System::Boolean IsFromLeft; // 0x15

		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void InitFrom(::RPG::Client::ActivityMarble::MarbleEliminationRoundInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleEliminationRoundInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO_INITFROM_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarblePvePlayer* get_Player()
		{
			return ((::RPG::Client::ActivityMarble::MarblePvePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO_GET_PLAYER_OFFSET))(this);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONPLAYERINFO_SET_ISWIN_OFFSET))(this, a1);
		}
	};
}
