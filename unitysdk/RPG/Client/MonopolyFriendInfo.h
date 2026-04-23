#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_56;
class Class_1_4BC858D7C27E10ED_45;
class Class_1_905995C4C61F81F7_14;
class Class_1_D9F432CB1A34324B_1;
namespace RPG::Client { class MonopolyFriendRankingDisplayDataItem; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYFRIENDINFO_ADDLIKECOUNT_OFFSET UNITYSDK_OFFSET(0xAAA0CD0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA9FAE0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_GET_ALLPLAYERDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0xAAA0ED0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_GET_LIKEDUIDSET_OFFSET UNITYSDK_OFFSET(0xAAA0EB0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_INIT_OFFSET UNITYSDK_OFFSET(0xAA9F9D0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SET_LIKEDUIDSET_OFFSET UNITYSDK_OFFSET(0xAAA0EC0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SORTFRIENDRANKDATA_OFFSET UNITYSDK_OFFSET(0xAAA0040)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCFRIENDRANK_OFFSET UNITYSDK_OFFSET(0xAA9FC10)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKENOTIFY_OFFSET UNITYSDK_OFFSET(0xAAA0430)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKERSP_OFFSET UNITYSDK_OFFSET(0xAAA0B20)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCSOCIALINFO_OFFSET UNITYSDK_OFFSET(0xAAA0810)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_UNINIT_OFFSET UNITYSDK_OFFSET(0xAA9FAA0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xAAA0F20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyFriendInfo_TypeDefinitionIndex = 61012;

	class MonopolyFriendInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _LikedUIDSet_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>* _TotalPlayerDisplayDataList; // 0x18
		::RPG::Client::MonopolyFriendRankingDisplayDataItem* SelfDisplayData; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>* _PlayerDisplayDataList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>* _DailyPlayerDisplayDataList; // 0x30
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

		::System::Void SyncFriendRank(::Class_1_4BC858D7C27E10ED_45* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCFRIENDRANK_OFFSET))(this, rsp);
		}

		::System::Void SyncLikeNotify(::Class_1_45BB92167AED63A0_56* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_56*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKENOTIFY_OFFSET))(this, ntf);
		}

		::System::Void SyncSocialInfo(::Class_1_D9F432CB1A34324B_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D9F432CB1A34324B_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCSOCIALINFO_OFFSET))(this, info);
		}

		::System::Void SyncLikeRsp(::Class_1_905995C4C61F81F7_14* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_905995C4C61F81F7_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKERSP_OFFSET))(this, rsp);
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
