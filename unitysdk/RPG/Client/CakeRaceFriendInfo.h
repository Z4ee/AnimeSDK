#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_79A623255817C58C_1;
class Class_1_D1E0AD3915BCCF29_19;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class CakeRaceFriendRankingData; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEFRIENDINFO_ADDLIKECOUNT_OFFSET UNITYSDK_OFFSET(0xB4974A0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB496030)
#define RPG_CLIENT_CAKERACEFRIENDINFO_FRIENDRANKINGINFOPROMISED_OFFSET UNITYSDK_OFFSET(0xB47FBF0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET_LIKEDUIDSET_OFFSET UNITYSDK_OFFSET(0xB497690)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET_LIKEREWARDCURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0xB4976E0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET_LIKEREWARDMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xB496EC0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET_RANKINGDATALIST_OFFSET UNITYSDK_OFFSET(0xB4976B0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET_SELFRANKINGDATA_OFFSET UNITYSDK_OFFSET(0xB4976C0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET__ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xB497700)
#define RPG_CLIENT_CAKERACEFRIENDINFO_GET__LIKEREWARDTIMEONCECOUNT_OFFSET UNITYSDK_OFFSET(0xB496DB0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB495FB0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SET_LIKEDUIDSET_OFFSET UNITYSDK_OFFSET(0xB4976A0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SET_LIKEREWARDCURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0xB4976F0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SET_SELFRANKINGDATA_OFFSET UNITYSDK_OFFSET(0xB4976D0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SYNCACCUMULATECOIN_OFFSET UNITYSDK_OFFSET(0xB497370)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SYNCLIKEDATA_OFFSET UNITYSDK_OFFSET(0xB496FD0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SYNCLIKEUIDLIST_OFFSET UNITYSDK_OFFSET(0xB496630)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SYNCRANKDATA_OFFSET UNITYSDK_OFFSET(0xB4962A0)
#define RPG_CLIENT_CAKERACEFRIENDINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xB496130)
#define RPG_CLIENT_CAKERACEFRIENDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB497B30)
#define RPG_CLIENT_CAKERACEFRIENDINFO__GETFRIENDRANKINGINFOLIST_OFFSET UNITYSDK_OFFSET(0xB497820)
#define RPG_CLIENT_CAKERACEFRIENDINFO__ONFRIENDLISTREFRESHED_OFFSET UNITYSDK_OFFSET(0xB497A60)
#define RPG_CLIENT_CAKERACEFRIENDINFO__SORTFRIENDRANK_OFFSET UNITYSDK_OFFSET(0xB496B50)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceFriendInfo_TypeDefinitionIndex = 58975;

	class CakeRaceFriendInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _RANK_REQUEST_INTERVAL = 0x3C; // 0x0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _LikedUidSet_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceFriendRankingData*>* _RankingDataList; // 0x18
		::RPG::Client::Promises::Promise* _FriendRankingInfoPromise; // 0x20
		::RPG::Client::CakeRaceFriendRankingData* _SelfRankingData_k__BackingField; // 0x28
		::System::UInt32 _LikeRewardCurrentCount_k__BackingField; // 0x30
		::System::UInt32 _RankRspTimeStamp; // 0x34

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

		::System::Void Sync(::Class_1_79A623255817C58C_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_79A623255817C58C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncRankData(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_19*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_19*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SYNCRANKDATA_OFFSET))(this, a1);
		}

		::System::Void SyncLikeUidList(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SYNCLIKEUIDLIST_OFFSET))(this, a1);
		}

		::System::Void SyncLikeData(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SYNCLIKEDATA_OFFSET))(this, a1);
		}

		::System::Void SyncAccumulateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SYNCACCUMULATECOIN_OFFSET))(this, a1);
		}

		::System::Void _SortFriendRank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO__SORTFRIENDRANK_OFFSET))(this);
		}

		::System::Void AddLikeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_ADDLIKECOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_LikedUidSet()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_GET_LIKEDUIDSET_OFFSET))(this);
		}

		::System::Void set_LikedUidSet(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SET_LIKEDUIDSET_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceFriendRankingData*>* get_RankingDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceFriendRankingData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_GET_RANKINGDATALIST_OFFSET))(this);
		}

		::RPG::Client::CakeRaceFriendRankingData* get_SelfRankingData()
		{
			return ((::RPG::Client::CakeRaceFriendRankingData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_GET_SELFRANKINGDATA_OFFSET))(this);
		}

		::System::Void set_SelfRankingData(::RPG::Client::CakeRaceFriendRankingData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFriendRankingData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SET_SELFRANKINGDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_LikeRewardCurrentCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_GET_LIKEREWARDCURRENTCOUNT_OFFSET))(this);
		}

		::System::Void set_LikeRewardCurrentCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO_SET_LIKEREWARDCURRENTCOUNT_OFFSET))(this, a1);
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

		::System::Void _OnFriendListRefreshed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO__ONFRIENDLISTREFRESHED_OFFSET))(this, a1);
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
