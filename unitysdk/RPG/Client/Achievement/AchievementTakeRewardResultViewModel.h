#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_79B49C00C46243B4;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::Achievement { class IAchievementBatchRewardListViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xC4A11D0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL_GET_HCOINICONPATH_OFFSET UNITYSDK_OFFSET(0xC4A1430)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL_GET_HCOINTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xC4A1410)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL_GET_LISTVIEWITEMS_OFFSET UNITYSDK_OFFSET(0xC4A1470)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0xC4A1450)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL_SET_HCOINICONPATH_OFFSET UNITYSDK_OFFSET(0xC4A1440)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL_SET_HCOINTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xC4A1420)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL_SET_LISTVIEWITEMS_OFFSET UNITYSDK_OFFSET(0xC4A1480)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL_SET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0xC4A1460)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL__BUILDLISTVIEW_OFFSET UNITYSDK_OFFSET(0xC4A1980)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL__BUILDREWARDINFO_OFFSET UNITYSDK_OFFSET(0xC4A1490)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL__BUILD_OFFSET UNITYSDK_OFFSET(0xC4A13B0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC4A13A0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL__MERGEREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xC4A2130)

namespace RPG::Client::Achievement
{
	inline static constexpr unsigned int AchievementTakeRewardResultViewModel_TypeDefinitionIndex = 80736;

	class AchievementTakeRewardResultViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItems_k__BackingField; // 0x10
		::System::String* _HCoinIconPath_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::Achievement::IAchievementBatchRewardListViewModel*>* _ListViewItems_k__BackingField; // 0x20
		::System::UInt32 _HCoinTotalCount_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::Achievement::AchievementTakeRewardResultViewModel* Create(::Class_1_79B49C00C46243B4* a1)
		{
			return ((::RPG::Client::Achievement::AchievementTakeRewardResultViewModel*(*)(::Class_1_79B49C00C46243B4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_HCoinTotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL_GET_HCOINTOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_HCoinTotalCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL_SET_HCOINTOTALCOUNT_OFFSET))(this, a1);
		}

		::System::String* get_HCoinIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL_GET_HCOINICONPATH_OFFSET))(this);
		}

		::System::Void set_HCoinIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL_SET_HCOINICONPATH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_RewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL_GET_REWARDITEMS_OFFSET))(this);
		}

		::System::Void set_RewardItems(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL_SET_REWARDITEMS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Achievement::IAchievementBatchRewardListViewModel*>* get_ListViewItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Achievement::IAchievementBatchRewardListViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL_GET_LISTVIEWITEMS_OFFSET))(this);
		}

		::System::Void set_ListViewItems(::System::Collections::Generic::List_1<::RPG::Client::Achievement::IAchievementBatchRewardListViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Achievement::IAchievementBatchRewardListViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL_SET_LISTVIEWITEMS_OFFSET))(this, a1);
		}

		::System::Void _Build(::Class_1_79B49C00C46243B4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_79B49C00C46243B4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL__BUILD_OFFSET))(this, a1);
		}

		::System::Void _BuildRewardInfo(::Class_1_79B49C00C46243B4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_79B49C00C46243B4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL__BUILDREWARDINFO_OFFSET))(this, a1);
		}

		::System::Void _MergeRewardItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL__MERGEREWARDITEMS_OFFSET))(this);
		}

		::System::Void _BuildListView(::Class_1_79B49C00C46243B4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_79B49C00C46243B4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTTAKEREWARDRESULTVIEWMODEL__BUILDLISTVIEW_OFFSET))(this, a1);
		}
	};
}
