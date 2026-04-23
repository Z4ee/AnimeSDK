#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_A876DD4596D1288D;
class Class_1_D17272E82AE804C2_210;
namespace RPG::Client { class ChimeraTeamData; }
namespace RPG::Client { class ChimeraTeamRowWrapper; }
namespace RPG::Client { class ChimeraTeamTalkRowWrapper; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERATEAMRANKMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0840A0)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER_GETCHIMERATEAMDATA_OFFSET UNITYSDK_OFFSET(0xA084780)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER_GETCURRENTROUNDTEAMTALKROWDATA_OFFSET UNITYSDK_OFFSET(0xA084B00)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER_GETRANKTEAMDATA_OFFSET UNITYSDK_OFFSET(0xA084860)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER_GETTEAMROWDATA_OFFSET UNITYSDK_OFFSET(0xA084940)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER_GETTEAMTALKROWDATA_OFFSET UNITYSDK_OFFSET(0xA084A20)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER_GET_LASTTEAMDATALIST_OFFSET UNITYSDK_OFFSET(0xA085260)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER_GET_PLAYERFINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0xA0852D0)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER_GET_PLAYERHISTORYBESTRANK_OFFSET UNITYSDK_OFFSET(0xA085420)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER_GET__PLAYERTEAMICON_OFFSET UNITYSDK_OFFSET(0xA0851B0)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER_GET__PLAYERTEAMNAME_OFFSET UNITYSDK_OFFSET(0xA0850B0)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xA083740)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER_SET_PLAYERHISTORYBESTRANK_OFFSET UNITYSDK_OFFSET(0xA085430)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER_SYNCPLAYERBESTRANK_OFFSET UNITYSDK_OFFSET(0xA084720)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER_SYNCPLAYERFINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0xA084600)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER_SYNCSERVERTEAMINFO_OFFSET UNITYSDK_OFFSET(0xA0841D0)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER_SYNCTEAMFINISHWORK_OFFSET UNITYSDK_OFFSET(0xA084260)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA085440)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER__INITTEAMDATALIST_OFFSET UNITYSDK_OFFSET(0xA083B10)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER__INITTEAMROWLIST_OFFSET UNITYSDK_OFFSET(0xA0837B0)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER__INITTEAMTALKROWLIST_OFFSET UNITYSDK_OFFSET(0xA083960)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER__SORTTEAMDATA_OFFSET UNITYSDK_OFFSET(0xA083F10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTeamRankManager_TypeDefinitionIndex = 58445;

	class ChimeraTeamRankManager : public ::System::Object
	{
	public:
		// static const ::System::UInt32 PLAYER_TEAM_ID = 0x2710; // 0x0
		::Class_1_A876DD4596D1288D* _Recorder; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>* TeamDataList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamTalkRowWrapper*>* _TeamTalkRowList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamRowWrapper*>* _TeamRowList; // 0x28
		::System::UInt32 _PlayerHistoryBestRank_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncServerTeamInfo(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_210*>* chimeraTeams, ::System::UInt32 finishWorkCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_210*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER_SYNCSERVERTEAMINFO_OFFSET))(this, chimeraTeams, finishWorkCnt);
		}

		::System::Void SyncPlayerBestRank(::System::UInt32 playerBestRank)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER_SYNCPLAYERBESTRANK_OFFSET))(this, playerBestRank);
		}

		::System::Void SyncTeamFinishWork(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_210*>* chimeraTeams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_210*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER_SYNCTEAMFINISHWORK_OFFSET))(this, chimeraTeams);
		}

		::System::Void SyncPlayerFinishWorkCnt(::System::UInt32 finishWorkCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER_SYNCPLAYERFINISHWORKCNT_OFFSET))(this, finishWorkCnt);
		}

		::RPG::Client::ChimeraTeamData* GetChimeraTeamData(::System::UInt32 teamID)
		{
			return ((::RPG::Client::ChimeraTeamData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER_GETCHIMERATEAMDATA_OFFSET))(this, teamID);
		}

		::RPG::Client::ChimeraTeamData* GetRankTeamData(::System::UInt32 rank)
		{
			return ((::RPG::Client::ChimeraTeamData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER_GETRANKTEAMDATA_OFFSET))(this, rank);
		}

		::RPG::Client::ChimeraTeamRowWrapper* GetTeamRowData(::System::UInt32 teamID)
		{
			return ((::RPG::Client::ChimeraTeamRowWrapper*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER_GETTEAMROWDATA_OFFSET))(this, teamID);
		}

		::RPG::Client::ChimeraTeamTalkRowWrapper* GetTeamTalkRowData(::System::UInt32 talkID)
		{
			return ((::RPG::Client::ChimeraTeamTalkRowWrapper*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER_GETTEAMTALKROWDATA_OFFSET))(this, talkID);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::ChimeraTeamTalkRowWrapper*>* GetCurrentRoundTeamTalkRowData(::System::UInt32 teamID)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::ChimeraTeamTalkRowWrapper*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER_GETCURRENTROUNDTEAMTALKROWDATA_OFFSET))(this, teamID);
		}

		::System::Void _SortTeamData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER__SORTTEAMDATA_OFFSET))(this);
		}

		::System::Void _InitTeamRowList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER__INITTEAMROWLIST_OFFSET))(this);
		}

		::System::Void _InitTeamTalkRowList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER__INITTEAMTALKROWLIST_OFFSET))(this);
		}

		::System::Void _InitTeamDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER__INITTEAMDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>* get_LastTeamDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER_GET_LASTTEAMDATALIST_OFFSET))(this);
		}

		::System::UInt32 get_PlayerFinishWorkCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER_GET_PLAYERFINISHWORKCNT_OFFSET))(this);
		}

		::System::UInt32 get_PlayerHistoryBestRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER_GET_PLAYERHISTORYBESTRANK_OFFSET))(this);
		}

		::System::Void set_PlayerHistoryBestRank(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER_SET_PLAYERHISTORYBESTRANK_OFFSET))(this, value);
		}

		::RPG::Client::TextID get__PlayerTeamName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER_GET__PLAYERTEAMNAME_OFFSET))(this);
		}

		::System::String* get__PlayerTeamIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER_GET__PLAYERTEAMICON_OFFSET))(this);
		}
	};
}
