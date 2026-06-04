#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityLocalLegendRewardType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityLocalLegendRewardGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB19C1C0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA_GET_REWARDGROUPLIST_OFFSET UNITYSDK_OFFSET(0xB19C260)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA_HASUNTAKENREWARD_1_OFFSET UNITYSDK_OFFSET(0xB19B8C0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA_HASUNTAKENREWARD_OFFSET UNITYSDK_OFFSET(0xB19B6D0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA_SET_REWARDGROUPLIST_OFFSET UNITYSDK_OFFSET(0xB19C270)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB19C240)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendRewardData_TypeDefinitionIndex = 57563;

	class ActivityLocalLegendRewardData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityLocalLegendRewardGroup*>* _RewardGroupList_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityLocalLegendRewardData* Create(::System::Collections::Generic::List_1<::RPG::Client::ActivityLocalLegendRewardGroup*>* a1)
		{
			return ((::RPG::Client::ActivityLocalLegendRewardData*(*)(::System::Collections::Generic::List_1<::RPG::Client::ActivityLocalLegendRewardGroup*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA_CREATE_OFFSET))(a1);
		}

		::System::Boolean HasUntakenReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA_HASUNTAKENREWARD_OFFSET))(this);
		}

		::System::Boolean HasUntakenReward_1(::RPG::GameCore::ActivityLocalLegendRewardType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActivityLocalLegendRewardType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA_HASUNTAKENREWARD_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityLocalLegendRewardGroup*>* get_RewardGroupList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityLocalLegendRewardGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA_GET_REWARDGROUPLIST_OFFSET))(this);
		}

		::System::Void set_RewardGroupList(::System::Collections::Generic::List_1<::RPG::Client::ActivityLocalLegendRewardGroup*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityLocalLegendRewardGroup*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA_SET_REWARDGROUPLIST_OFFSET))(this, a1);
		}
	};
}
