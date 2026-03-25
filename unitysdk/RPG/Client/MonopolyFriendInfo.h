#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_396498540E1E1109;
class Class_1_735612C94F558EAE_55;
class Class_1_964D3E99C6883FD7_14;
class Class_1_99BD961747420BEB_41;
namespace RPG::Client { class MonopolyFriendRankingDisplayDataItem; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYFRIENDINFO_ADDLIKECOUNT_OFFSET UNITYSDK_OFFSET(0x9D5B260)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D5A070)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_GET_ALLPLAYERDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0x9D5B460)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_GET_LIKEDUIDSET_OFFSET UNITYSDK_OFFSET(0x9D5B440)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9D59F60)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SET_LIKEDUIDSET_OFFSET UNITYSDK_OFFSET(0x9D5B450)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SORTFRIENDRANKDATA_OFFSET UNITYSDK_OFFSET(0x9D5A5D0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCFRIENDRANK_OFFSET UNITYSDK_OFFSET(0x9D5A1A0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKENOTIFY_OFFSET UNITYSDK_OFFSET(0x9D5A9C0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKERSP_OFFSET UNITYSDK_OFFSET(0x9D5B0B0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCSOCIALINFO_OFFSET UNITYSDK_OFFSET(0x9D5ADA0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_UNINIT_OFFSET UNITYSDK_OFFSET(0x9D5A030)
#define RPG_CLIENT_MONOPOLYFRIENDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9D5B4B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyFriendInfo_TypeDefinitionIndex = 53868;

	class MonopolyFriendInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>* _PlayerDisplayDataList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>* _TotalPlayerDisplayDataList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>* _DailyPlayerDisplayDataList; // 0x20
		::RPG::Client::MonopolyFriendRankingDisplayDataItem* SelfDisplayData; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _LikedUIDSet_k__BackingField; // 0x30
		::System::Boolean IsDaily; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_UNINIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncFriendRank(::Class_1_99BD961747420BEB_41* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCFRIENDRANK_OFFSET))(this, rsp);
		}

		::System::Void SyncLikeNotify(::Class_1_735612C94F558EAE_55* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_55*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKENOTIFY_OFFSET))(this, ntf);
		}

		::System::Void SyncSocialInfo(::Class_1_396498540E1E1109* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_396498540E1E1109*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCSOCIALINFO_OFFSET))(this, info);
		}

		::System::Void SyncLikeRsp(::Class_1_964D3E99C6883FD7_14* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_964D3E99C6883FD7_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKERSP_OFFSET))(this, rsp);
		}

		::System::Void AddLikeCount(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_ADDLIKECOUNT_OFFSET))(this, uid);
		}

		::System::Void SortFriendRankData(::System::Boolean isDaily)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SORTFRIENDRANKDATA_OFFSET))(this, isDaily);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_LikedUIDSet()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_GET_LIKEDUIDSET_OFFSET))(this);
		}

		::System::Void set_LikedUIDSet(::System::Collections::Generic::HashSet_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SET_LIKEDUIDSET_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>* get_AllPlayerDisplayDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_GET_ALLPLAYERDISPLAYDATALIST_OFFSET))(this);
		}
	};
}
