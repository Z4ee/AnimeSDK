#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"

class Class_1_993C91F8E48A9E53;
class Class_1_CE9B29BCEEDBFC4A;
namespace RPG::Client { class FriendRankingInfo; }
namespace RPG::Client { class MatchPlayRecord; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MULTIPLAYERCAREERDATA_ADD_ONMATCHPLAYDATAUPDATED_OFFSET UNITYSDK_OFFSET(0xAAF0080)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_CLEARMATCHPLAYDATAUPDATEDLISTENER_OFFSET UNITYSDK_OFFSET(0xAAF0FE0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xAAF0F40)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_FRIENDRANKINGINFOPROMISED_OFFSET UNITYSDK_OFFSET(0xAAF0140)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_GETSELFRANKINGINFO_OFFSET UNITYSDK_OFFSET(0xAAF1030)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_GETSORTEDFRIENDRANKINGINFOLIST_OFFSET UNITYSDK_OFFSET(0xAAF1070)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_GET__ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xAAF0330)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_MATCHPLAYDATAREFRESHED_OFFSET UNITYSDK_OFFSET(0xAAF0570)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_REMOVE_ONMATCHPLAYDATAUPDATED_OFFSET UNITYSDK_OFFSET(0xAAF00E0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATEFRIENDRANKINGLIST_OFFSET UNITYSDK_OFFSET(0xAAF07B0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATEMATCHPLAYDATA_OFFSET UNITYSDK_OFFSET(0xAAF0700)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATESELFRANKINGINFO_OFFSET UNITYSDK_OFFSET(0xAAF0D90)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAAF0040)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__ENSURESORTED_OFFSET UNITYSDK_OFFSET(0xAAF0D30)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__ONGETFRIENDRANKINGINFORSP_OFFSET UNITYSDK_OFFSET(0xAAF1300)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__SENDGETFRIENDRANKINGINFOREQ_OFFSET UNITYSDK_OFFSET(0xAAF0450)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__SENDGETMATCHPLAYDATAREQ_OFFSET UNITYSDK_OFFSET(0xAAF05F0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__SORTANDSETRANKS_OFFSET UNITYSDK_OFFSET(0xAAF1130)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiplayerCareerData_TypeDefinitionIndex = 61072;

	class MultiplayerCareerData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _RANK_REQUEST_INTERVAL = 0x3C; // 0x0
		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*>* _FriendRankingInfoPromise; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* _RankInfoList; // 0x18
		::RPG::Client::FriendRankingInfo* _SelfRankingInfo; // 0x20
		::RPG::Client::Promises::Promise_1<::RPG::Client::MatchPlayRecord*>* _MatchPlayDataPromise; // 0x28
		::System::Action_1<::RPG::Client::MatchPlayRecord*>* OnMatchPlayDataUpdated; // 0x30
		::RPG::Client::MatchPlayRecord* _MatchPlayData; // 0x38
		::System::UInt32 _RankRspTimeStamp; // 0x40
		::Enum_3_A35B38E5F9115A76_2 _GameMode; // 0x44
		::System::Boolean _needsSort; // 0x48

		::System::Void _ctor(::Enum_3_A35B38E5F9115A76_2 gameMode)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA__CTOR_OFFSET))(this, gameMode);
		}

		::System::Void add_OnMatchPlayDataUpdated(::System::Action_1<::RPG::Client::MatchPlayRecord*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MatchPlayRecord*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_ADD_ONMATCHPLAYDATAUPDATED_OFFSET))(this, value);
		}

		::System::Void remove_OnMatchPlayDataUpdated(::System::Action_1<::RPG::Client::MatchPlayRecord*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MatchPlayRecord*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_REMOVE_ONMATCHPLAYDATAUPDATED_OFFSET))(this, value);
		}

		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*>* FriendRankingInfoPromised()
		{
			return ((::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_FRIENDRANKINGINFOPROMISED_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::MatchPlayRecord*>* MatchPlayDataRefreshed()
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::MatchPlayRecord*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_MATCHPLAYDATAREFRESHED_OFFSET))(this);
		}

		::System::Void UpdateMatchPlayData(::Class_1_993C91F8E48A9E53* matchPlayData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_993C91F8E48A9E53*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATEMATCHPLAYDATA_OFFSET))(this, matchPlayData);
		}

		::System::Void UpdateFriendRankingList(::System::Collections::Generic::IEnumerable_1<::Class_1_CE9B29BCEEDBFC4A*>* rankingList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_CE9B29BCEEDBFC4A*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATEFRIENDRANKINGLIST_OFFSET))(this, rankingList);
		}

		::System::Void UpdateSelfRankingInfo(::Class_1_CE9B29BCEEDBFC4A* rankingInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CE9B29BCEEDBFC4A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATESELFRANKINGINFO_OFFSET))(this, rankingInfo);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_CLEAR_OFFSET))(this);
		}

		::System::Void ClearMatchPlayDataUpdatedListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_CLEARMATCHPLAYDATAUPDATEDLISTENER_OFFSET))(this);
		}

		::RPG::Client::FriendRankingInfo* GetSelfRankingInfo()
		{
			return ((::RPG::Client::FriendRankingInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_GETSELFRANKINGINFO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* GetSortedFriendRankingInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_GETSORTEDFRIENDRANKINGINFOLIST_OFFSET))(this);
		}

		::System::Void _SendGetFriendRankingInfoReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA__SENDGETFRIENDRANKINGINFOREQ_OFFSET))(this);
		}

		::System::Void _SendGetMatchPlayDataReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA__SENDGETMATCHPLAYDATAREQ_OFFSET))(this);
		}

		::System::Void _EnsureSorted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA__ENSURESORTED_OFFSET))(this);
		}

		::System::Void _SortAndSetRanks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA__SORTANDSETRANKS_OFFSET))(this);
		}

		::System::Void _OnGetFriendRankingInfoRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA__ONGETFRIENDRANKINGINFORSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Boolean get__IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_GET__ISEXPIRED_OFFSET))(this);
		}
	};
}
