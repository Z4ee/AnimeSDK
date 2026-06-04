#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"

class Class_1_993C91F8E48A9E53;
class Class_1_F3622139E5E134C0_1;
namespace RPG::Client { class FriendRankingInfo; }
namespace RPG::Client { class MatchPlayRecord; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MULTIPLAYERCAREERDATA_ADD_ONMATCHPLAYDATAUPDATED_OFFSET UNITYSDK_OFFSET(0xC1BE3C0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_CLEARMATCHPLAYDATAUPDATEDLISTENER_OFFSET UNITYSDK_OFFSET(0xC1BF3E0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xC1BF340)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_FRIENDRANKINGINFOPROMISED_OFFSET UNITYSDK_OFFSET(0xC1BE480)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_GETSELFRANKINGINFO_OFFSET UNITYSDK_OFFSET(0xC1BF430)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_GETSORTEDFRIENDRANKINGINFOLIST_OFFSET UNITYSDK_OFFSET(0xC1BF470)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_GET__ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xC1BE690)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_MATCHPLAYDATAREFRESHED_OFFSET UNITYSDK_OFFSET(0xC1BE8D0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_REMOVE_ONMATCHPLAYDATAUPDATED_OFFSET UNITYSDK_OFFSET(0xC1BE420)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATEFRIENDRANKINGLIST_OFFSET UNITYSDK_OFFSET(0xC1BEB20)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATEMATCHPLAYDATA_OFFSET UNITYSDK_OFFSET(0xC1BEA60)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATESELFRANKINGINFO_OFFSET UNITYSDK_OFFSET(0xC1BF160)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC1BE380)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__ENSURESORTED_OFFSET UNITYSDK_OFFSET(0xC1BF100)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__ONGETFRIENDRANKINGINFORSP_OFFSET UNITYSDK_OFFSET(0xC1BF740)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__SENDGETFRIENDRANKINGINFOREQ_OFFSET UNITYSDK_OFFSET(0xC1BE7B0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__SENDGETMATCHPLAYDATAREQ_OFFSET UNITYSDK_OFFSET(0xC1BE950)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA__SORTANDSETRANKS_OFFSET UNITYSDK_OFFSET(0xC1BF530)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiplayerCareerData_TypeDefinitionIndex = 61996;

	class MultiplayerCareerData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _RANK_REQUEST_INTERVAL = 0x3C; // 0x0
		::RPG::Client::MatchPlayRecord* _MatchPlayData; // 0x10
		::RPG::Client::FriendRankingInfo* _SelfRankingInfo; // 0x18
		::RPG::Client::Promises::Promise_1<::RPG::Client::MatchPlayRecord*>* _MatchPlayDataPromise; // 0x20
		::System::Action_1<::RPG::Client::MatchPlayRecord*>* OnMatchPlayDataUpdated; // 0x28
		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*>* _FriendRankingInfoPromise; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* _RankInfoList; // 0x38
		::System::Boolean _needsSort; // 0x40
		::Enum_3_A35B38E5F9115A76_2 _GameMode; // 0x44
		::System::UInt32 _RankRspTimeStamp; // 0x48

		::System::Void _ctor(::Enum_3_A35B38E5F9115A76_2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void add_OnMatchPlayDataUpdated(::System::Action_1<::RPG::Client::MatchPlayRecord*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MatchPlayRecord*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_ADD_ONMATCHPLAYDATAUPDATED_OFFSET))(this, a1);
		}

		::System::Void remove_OnMatchPlayDataUpdated(::System::Action_1<::RPG::Client::MatchPlayRecord*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MatchPlayRecord*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_REMOVE_ONMATCHPLAYDATAUPDATED_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*>* FriendRankingInfoPromised()
		{
			return ((::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_FRIENDRANKINGINFOPROMISED_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::MatchPlayRecord*>* MatchPlayDataRefreshed()
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::MatchPlayRecord*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_MATCHPLAYDATAREFRESHED_OFFSET))(this);
		}

		::System::Void UpdateMatchPlayData(::Class_1_993C91F8E48A9E53* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_993C91F8E48A9E53*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATEMATCHPLAYDATA_OFFSET))(this, a1);
		}

		::System::Void UpdateFriendRankingList(::System::Collections::Generic::IEnumerable_1<::Class_1_F3622139E5E134C0_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_F3622139E5E134C0_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATEFRIENDRANKINGLIST_OFFSET))(this, a1);
		}

		::System::Void UpdateSelfRankingInfo(::Class_1_F3622139E5E134C0_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3622139E5E134C0_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_UPDATESELFRANKINGINFO_OFFSET))(this, a1);
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

		::System::Void _OnGetFriendRankingInfoRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA__ONGETFRIENDRANKINGINFORSP_OFFSET))(this, a1, a2);
		}

		::System::Boolean get__IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA_GET__ISEXPIRED_OFFSET))(this);
		}
	};
}
