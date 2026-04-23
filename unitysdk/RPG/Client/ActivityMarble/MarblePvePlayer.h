#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleSealTeamSelection; }
namespace RPG::GameCore { class MarbleMatchPlayerRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_CREATEPVEHEROPLAYER_OFFSET UNITYSDK_OFFSET(0x9C03F40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_CREATEPVEPLAYER_1_OFFSET UNITYSDK_OFFSET(0x9C12CE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_CREATEPVEPLAYER_OFFSET UNITYSDK_OFFSET(0x9C10BB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GETMARBLESEALTEAM_OFFSET UNITYSDK_OFFSET(0x9C12D60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x9C12ED0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9C12FF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9C12FB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9C12FD0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_ISME_OFFSET UNITYSDK_OFFSET(0x9C12E20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x9C022A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PLAYERNAMESTR_OFFSET UNITYSDK_OFFSET(0x9C12F20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PLAYERNAME_OFFSET UNITYSDK_OFFSET(0x9C12EF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x9C12EE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9C12CD0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x9C12C90)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePvePlayer_TypeDefinitionIndex = 68948;

	class MarblePvePlayer : public ::System::Object
	{
	public:
		::RPG::Client::ActivityMarble::MarbleSealTeamSelection* _TeamSelection; // 0x10
		::RPG::GameCore::MarbleMatchPlayerRow* Row; // 0x18
		::System::UInt32 _ActivityID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 playerID, ::System::UInt32 activityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER__CTOR_OFFSET))(this, playerID, activityID);
		}

		::System::Void _ctor_1(::RPG::GameCore::MarbleMatchPlayerRow* row, ::System::UInt32 activityID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleMatchPlayerRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER__CTOR_1_OFFSET))(this, row, activityID);
		}

		static ::RPG::Client::ActivityMarble::MarblePvePlayer* CreatePvePlayer(::System::UInt32 playerID)
		{
			return ((::RPG::Client::ActivityMarble::MarblePvePlayer*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_CREATEPVEPLAYER_OFFSET))(playerID);
		}

		static ::RPG::Client::ActivityMarble::MarblePvePlayer* CreatePvePlayer_1(::RPG::GameCore::MarbleMatchPlayerRow* row)
		{
			return ((::RPG::Client::ActivityMarble::MarblePvePlayer*(*)(::RPG::GameCore::MarbleMatchPlayerRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_CREATEPVEPLAYER_1_OFFSET))(row);
		}

		static ::RPG::Client::ActivityMarble::MarblePvePlayer* CreatePveHeroPlayer()
		{
			return ((::RPG::Client::ActivityMarble::MarblePvePlayer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_CREATEPVEHEROPLAYER_OFFSET))();
		}

		::RPG::Client::ActivityMarble::MarbleSealTeamSelection* GetMarbleSealTeam()
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamSelection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GETMARBLESEALTEAM_OFFSET))(this);
		}

		::System::UInt32 get_PlayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PLAYERID_OFFSET))(this);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::Void set_ActivityID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_ACTIVITYID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_PlayerName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PLAYERNAME_OFFSET))(this);
		}

		::System::String* get_PlayerNameStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PLAYERNAMESTR_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_IMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_DESC_OFFSET))(this);
		}

		::System::Boolean get_IsMe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_ISME_OFFSET))(this);
		}
	};
}
