#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_58;
class Class_1_4BC858D7C27E10ED_46;
class Class_1_905995C4C61F81F7_14;
class Class_1_D9F432CB1A34324B_1;
namespace RPG::Client { class MonopolyFriendRankingDisplayDataItem; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYFRIENDINFO_ADDLIKECOUNT_OFFSET UNITYSDK_OFFSET(0xC16D6E0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC16C380)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_GET_ALLPLAYERDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0xC16D8F0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_GET_LIKEDUIDSET_OFFSET UNITYSDK_OFFSET(0xC16D8D0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_INIT_OFFSET UNITYSDK_OFFSET(0xC16C270)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SET_LIKEDUIDSET_OFFSET UNITYSDK_OFFSET(0xC16D8E0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SORTFRIENDRANKDATA_OFFSET UNITYSDK_OFFSET(0xC16C9C0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCFRIENDRANK_OFFSET UNITYSDK_OFFSET(0xC16C4E0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKENOTIFY_OFFSET UNITYSDK_OFFSET(0xC16CE30)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKERSP_OFFSET UNITYSDK_OFFSET(0xC16D530)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCSOCIALINFO_OFFSET UNITYSDK_OFFSET(0xC16D210)
#define RPG_CLIENT_MONOPOLYFRIENDINFO_UNINIT_OFFSET UNITYSDK_OFFSET(0xC16C340)
#define RPG_CLIENT_MONOPOLYFRIENDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC16D940)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyFriendInfo_TypeDefinitionIndex = 61946;

	class MonopolyFriendInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>* _PlayerDisplayDataList; // 0x10
		::RPG::Client::MonopolyFriendRankingDisplayDataItem* SelfDisplayData; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _LikedUIDSet_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyFriendRankingDisplayDataItem*>* _TotalPlayerDisplayDataList; // 0x28
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

		::System::Void SyncFriendRank(::Class_1_4BC858D7C27E10ED_46* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_46*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCFRIENDRANK_OFFSET))(this, a1);
		}

		::System::Void SyncLikeNotify(::Class_1_45BB92167AED63A0_58* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_58*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKENOTIFY_OFFSET))(this, a1);
		}

		::System::Void SyncSocialInfo(::Class_1_D9F432CB1A34324B_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D9F432CB1A34324B_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCSOCIALINFO_OFFSET))(this, a1);
		}

		::System::Void SyncLikeRsp(::Class_1_905995C4C61F81F7_14* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_905995C4C61F81F7_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO_SYNCLIKERSP_OFFSET))(this, a1);
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
