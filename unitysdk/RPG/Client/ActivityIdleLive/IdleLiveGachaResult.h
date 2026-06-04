#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7F6A638FBAAEC90B_3;
namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaResultAvatarMergeData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaResultItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_CREATE_OFFSET UNITYSDK_OFFSET(0xB13F020)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GETAVATARSTARUPLIST_OFFSET UNITYSDK_OFFSET(0xB13FCA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GETCOINMERGEDATA_OFFSET UNITYSDK_OFFSET(0xB141050)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GET_AVATARMERGELIST_OFFSET UNITYSDK_OFFSET(0xB141690)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GET_HASAVATARUPGRADE_OFFSET UNITYSDK_OFFSET(0xB13FA60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GET_HASSTARUP_OFFSET UNITYSDK_OFFSET(0xB141450)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GET_ISUPGRADE_OFFSET UNITYSDK_OFFSET(0xB141440)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_GET_ITEMLIST_OFFSET UNITYSDK_OFFSET(0xB141340)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xB140C30)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaResult_TypeDefinitionIndex = 70125;

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

		static ::RPG::Client::ActivityIdleLive::IdleLiveGachaResult* Create(::Class_1_7F6A638FBAAEC90B_3* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaResult*(*)(::Class_1_7F6A638FBAAEC90B_3*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT_CREATE_OFFSET))(a1, a2);
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
