#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYREBATEREWARDTAKENRESULT_GET_REBATEID_OFFSET UNITYSDK_OFFSET(0xC59F830)
#define RPG_CLIENT_ACTIVITYREBATEREWARDTAKENRESULT_GET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0xC59F850)
#define RPG_CLIENT_ACTIVITYREBATEREWARDTAKENRESULT_SET_REBATEID_OFFSET UNITYSDK_OFFSET(0xC59F840)
#define RPG_CLIENT_ACTIVITYREBATEREWARDTAKENRESULT_SET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0xC59F860)
#define RPG_CLIENT_ACTIVITYREBATEREWARDTAKENRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xC59F870)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRebateRewardTakenResult_TypeDefinitionIndex = 61904;

	class ActivityRebateRewardTakenResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardList_k__BackingField; // 0x10
		::System::UInt32 _RebateID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEREWARDTAKENRESULT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_RebateID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEREWARDTAKENRESULT_GET_REBATEID_OFFSET))(this);
		}

		::System::Void set_RebateID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEREWARDTAKENRESULT_SET_REBATEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_RewardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEREWARDTAKENRESULT_GET_REWARDLIST_OFFSET))(this);
		}

		::System::Void set_RewardList(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEREWARDTAKENRESULT_SET_REWARDLIST_OFFSET))(this, a1);
		}
	};
}
