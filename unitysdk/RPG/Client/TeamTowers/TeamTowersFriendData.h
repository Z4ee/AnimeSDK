#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace RPG::Client { class FriendRankingInfo; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1A3A7F70)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_ENDLESSBESTROUND_OFFSET UNITYSDK_OFFSET(0x1A3A8590)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_HASENDLESSRECORD_OFFSET UNITYSDK_OFFSET(0x1A3A8670)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1A3A8270)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_ISMARKED_OFFSET UNITYSDK_OFFSET(0x1A3A84C0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_ISONLINE_OFFSET UNITYSDK_OFFSET(0x1A3A8400)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A3A8220)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_LOGOUTTIMESPAN_OFFSET UNITYSDK_OFFSET(0x1A3A8460)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x1A3A81B0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x1A3A8310)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1A3A86D0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x1A3A8520)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x1A3A8160)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_OVERRIDERANK_OFFSET UNITYSDK_OFFSET(0x1A3A8730)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A7F60)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersFriendData_TypeDefinitionIndex = 78550;

	class TeamTowersFriendData : public ::System::Object
	{
	public:
		::RPG::Client::PlayerBriefDisplayData* _PlayerBriefDisplayData; // 0x10
		::RPG::Client::FriendRankingInfo* _RankingInfo; // 0x18
		::System::UInt32 _OverrideRank; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TeamTowers::TeamTowersFriendData* Create(::System::UInt32 a1, ::RPG::Client::FriendRankingInfo* a2)
		{
			return ((::RPG::Client::TeamTowers::TeamTowersFriendData*(*)(::System::UInt32, ::RPG::Client::FriendRankingInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_UID_OFFSET))(this);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_NICKNAME_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Boolean get_IsOnline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_ISONLINE_OFFSET))(this);
		}

		::System::TimeSpan get_LogoutTimeSpan()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_LOGOUTTIMESPAN_OFFSET))(this);
		}

		::System::Boolean get_IsMarked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_ISMARKED_OFFSET))(this);
		}

		::System::String* get_Signature()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_SIGNATURE_OFFSET))(this);
		}

		::System::UInt32 get_EndlessBestRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_ENDLESSBESTROUND_OFFSET))(this);
		}

		::System::Boolean get_HasEndlessRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_HASENDLESSRECORD_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void OverrideRank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDDATA_OVERRIDERANK_OFFSET))(this, a1);
		}
	};
}
