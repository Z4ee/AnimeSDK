#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_19;
class Class_1_DE49214D160C3B72_1;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class CakeRaceFriendRankingData; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEFRIENDINFO_ADDLIKECOUNT_OFFSET UNITYSDK_OFFSET(0x9237890)
#define RPG_CLIENT_CAKERACEFRIENDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92364E0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_FRIENDRANKINGINFOPROMISED_OFFSET UNITYSDK_OFFSET(0x9237AE0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET_LIKEDUIDSET_OFFSET UNITYSDK_OFFSET(0x9237A70)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET_LIKEREWARDCURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9237AC0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET_LIKEREWARDMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x92372B0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET_RANKINGDATALIST_OFFSET UNITYSDK_OFFSET(0x9237A90)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET_SELFRANKINGDATA_OFFSET UNITYSDK_OFFSET(0x9237AA0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET__ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x9237DA0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET__LIKEREWARDTIMEONCECOUNT_OFFSET UNITYSDK_OFFSET(0x92371A0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9236460)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SET_LIKEDUIDSET_OFFSET UNITYSDK_OFFSET(0x9237A80)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SET_LIKEREWARDCURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9237AD0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SET_SELFRANKINGDATA_OFFSET UNITYSDK_OFFSET(0x9237AB0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SYNCACCUMULATECOIN_OFFSET UNITYSDK_OFFSET(0x9237760)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SYNCLIKEDATA_OFFSET UNITYSDK_OFFSET(0x92373C0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SYNCLIKEUIDLIST_OFFSET UNITYSDK_OFFSET(0x9236A60)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SYNCRANKDATA_OFFSET UNITYSDK_OFFSET(0x9236720)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x92365B0)
#define RPG_CLIENT_CAKERACEFRIENDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x92381B0)
#define RPG_CLIENT_CAKERACEFRIENDINFO__GETFRIENDRANKINGINFOLIST_OFFSET UNITYSDK_OFFSET(0x9237EC0)
#define RPG_CLIENT_CAKERACEFRIENDINFO__ONFRIENDLISTREFRESHED_OFFSET UNITYSDK_OFFSET(0x9238100)
#define RPG_CLIENT_CAKERACEFRIENDINFO__SORTFRIENDRANK_OFFSET UNITYSDK_OFFSET(0x9236F80)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceFriendInfo_TypeDefinitionIndex = 51139;

	class CakeRaceFriendInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _RANK_REQUEST_INTERVAL = 0x3C; // 0x0
		::RPG::Client::Promises::Promise* _FriendRankingInfoPromise; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceFriendRankingData*>* _RankingDataList; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _LikedUidSet_k__BackingField; // 0x20
		::RPG::Client::CakeRaceFriendRankingData* _SelfRankingData_k__BackingField; // 0x28
		::System::UInt32 _RankRspTimeStamp; // 0x30
		::System::UInt32 _LikeRewardCurrentCount_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_DE49214D160C3B72_1* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DE49214D160C3B72_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SYNC_OFFSET))(this, rsp);
		}

		::System::Void SyncRankData(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_19*>* rankingInfoList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_19*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SYNCRANKDATA_OFFSET))(this, rankingInfoList);
		}

		::System::Void SyncLikeUidList(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* uidList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SYNCLIKEUIDLIST_OFFSET))(this, uidList);
		}

		::System::Void SyncLikeData(::System::Collections::Generic::IList_1<::System::UInt32>* uidList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SYNCLIKEDATA_OFFSET))(this, uidList);
		}

		::System::Void SyncAccumulateCoin(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SYNCACCUMULATECOIN_OFFSET))(this, value);
		}

		::System::Void _SortFriendRank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO__SORTFRIENDRANK_OFFSET))(this);
		}

		::System::Void AddLikeCount(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_ADDLIKECOUNT_OFFSET))(this, uid);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_LikedUidSet()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_GET_LIKEDUIDSET_OFFSET))(this);
		}

		::System::Void set_LikedUidSet(::System::Collections::Generic::HashSet_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SET_LIKEDUIDSET_OFFSET))(this, value);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceFriendRankingData*>* get_RankingDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceFriendRankingData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_GET_RANKINGDATALIST_OFFSET))(this);
		}

		::RPG::Client::CakeRaceFriendRankingData* get_SelfRankingData()
		{
			return ((::RPG::Client::CakeRaceFriendRankingData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_GET_SELFRANKINGDATA_OFFSET))(this);
		}

		::System::Void set_SelfRankingData(::RPG::Client::CakeRaceFriendRankingData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFriendRankingData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SET_SELFRANKINGDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_LikeRewardCurrentCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_GET_LIKEREWARDCURRENTCOUNT_OFFSET))(this);
		}

		::System::Void set_LikeRewardCurrentCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SET_LIKEREWARDCURRENTCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get__LikeRewardTimeOnceCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_GET__LIKEREWARDTIMEONCECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_LikeRewardMaxCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_GET_LIKEREWARDMAXCOUNT_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* FriendRankingInfoPromised()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_FRIENDRANKINGINFOPROMISED_OFFSET))(this);
		}

		::System::Void _OnFriendListRefreshed(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO__ONFRIENDLISTREFRESHED_OFFSET))(this, obj);
		}

		::System::Void _GetFriendRankingInfoList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO__GETFRIENDRANKINGINFOLIST_OFFSET))(this);
		}

		::System::Boolean get__IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_GET__ISEXPIRED_OFFSET))(this);
		}
	};
}
