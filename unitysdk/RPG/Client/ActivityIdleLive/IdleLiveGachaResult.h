#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7F6A638FBAAEC90B_3;
namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaResultAvatarMergeData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaResultItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_CREATE_OFFSET UNITYSDK_OFFSET(0x9B57C80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GETAVATARSTARUPLIST_OFFSET UNITYSDK_OFFSET(0x9B58800)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GETCOINMERGEDATA_OFFSET UNITYSDK_OFFSET(0x9B59AD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GET_AVATARMERGELIST_OFFSET UNITYSDK_OFFSET(0x9B5A020)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GET_HASAVATARUPGRADE_OFFSET UNITYSDK_OFFSET(0x9B58610)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GET_HASSTARUP_OFFSET UNITYSDK_OFFSET(0x9B59E30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GET_ISUPGRADE_OFFSET UNITYSDK_OFFSET(0x9B59E20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GET_ITEMLIST_OFFSET UNITYSDK_OFFSET(0x9B59DA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x9B596B0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaResult_TypeDefinitionIndex = 69313;

	class IdleLiveGachaResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaResultItemData*>* _ItemList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaResultAvatarMergeData*>* _AvatarMergeList; // 0x18
		::System::Boolean _IsUpgrade; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveGachaResult* Create(::Class_1_7F6A638FBAAEC90B_3* rsp, ::System::Boolean isUpgrade)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaResult*(*)(::Class_1_7F6A638FBAAEC90B_3*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_CREATE_OFFSET))(rsp, isUpgrade);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAvatarStarUpList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GETAVATARSTARUPLIST_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveGachaResultItemData* GetCoinMergeData()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaResultItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GETCOINMERGEDATA_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaResultItemData*>* get_ItemList()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaResultItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GET_ITEMLIST_OFFSET))(this);
		}

		::System::Boolean get_IsUpgrade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GET_ISUPGRADE_OFFSET))(this);
		}

		::System::Boolean get_HasStarUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GET_HASSTARUP_OFFSET))(this);
		}

		::System::Boolean get_HasAvatarUpgrade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GET_HASAVATARUPGRADE_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaResultAvatarMergeData*>* get_AvatarMergeList()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ActivityIdleLive::IdleLiveGachaResultAvatarMergeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GET_AVATARMERGELIST_OFFSET))(this);
		}
	};
}
