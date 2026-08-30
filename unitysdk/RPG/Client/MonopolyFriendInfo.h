#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_67;
class Class_1_6CB2450063991035_14;
class Class_1_905995C4C61F81F7_13;
class Class_1_D9F432CB1A34324B_1;
namespace RPG::Client { class MonopolyFriendRankingDisplayDataItem; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYFRIENDINFO_ADDLIKECOUNT_OFFSET UNITYSDK_OFFSET(0x1C2A73F0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C2A5CC0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_GET_ALLPLAYERDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0x1C2A7600)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_GET_LIKEDUIDSET_OFFSET UNITYSDK_OFFSET(0x1C2A75E0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1C2A5BB0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SET_LIKEDUIDSET_OFFSET UNITYSDK_OFFSET(0x1C2A75F0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SORTFRIENDRANKDATA_OFFSET UNITYSDK_OFFSET(0x1C2A6440)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCFRIENDRANK_OFFSET UNITYSDK_OFFSET(0x1C2A5E20)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKENOTIFY_OFFSET UNITYSDK_OFFSET(0x1C2A68B0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKERSP_OFFSET UNITYSDK_OFFSET(0x1C2A7240)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCSOCIALINFO_OFFSET UNITYSDK_OFFSET(0x1C2A6DD0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_UNINIT_OFFSET UNITYSDK_OFFSET(0x1C2A5C80)
#define RPG_CLIENT_MONOPOLYFRIENDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A7650)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyFriendInfo_TypeDefinitionIndex = 66296;

	class MonopolyFriendInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>* _DailyPlayerDisplayDataList; // 0x10
		::RPG::Client::MonopolyFriendRankingDisplayDataItem* SelfDisplayData; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>* _TotalPlayerDisplayDataList; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _LikedUIDSet_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>* _PlayerDisplayDataList; // 0x30
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

		::System::Void SyncFriendRank(::Class_1_6CB2450063991035_14* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CB2450063991035_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCFRIENDRANK_OFFSET))(this, a1);
		}

		::System::Void SyncLikeNotify(::Class_1_45BB92167AED63A0_67* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_67*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKENOTIFY_OFFSET))(this, a1);
		}

		::System::Void SyncSocialInfo(::Class_1_D9F432CB1A34324B_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D9F432CB1A34324B_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCSOCIALINFO_OFFSET))(this, a1);
		}

		::System::Void SyncLikeRsp(::Class_1_905995C4C61F81F7_13* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_905995C4C61F81F7_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKERSP_OFFSET))(this, a1);
		}

		::System::Void AddLikeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_ADDLIKECOUNT_OFFSET))(this, a1);
		}

		::System::Void SortFriendRankData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SORTFRIENDRANKDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_LikedUIDSet()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_GET_LIKEDUIDSET_OFFSET))(this);
		}

		::System::Void set_LikedUIDSet(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SET_LIKEDUIDSET_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>* get_AllPlayerDisplayDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_GET_ALLPLAYERDISPLAYDATALIST_OFFSET))(this);
		}
	};
}
