#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class QuestData; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_ADD_ONMAYBEINITIALREWARDCLAIMED_OFFSET UNITYSDK_OFFSET(0x8EF52D0)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_CLAIMINITIALREWARD_OFFSET UNITYSDK_OFFSET(0x8EF51A0)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x8EF4B10)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EF5110)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_GET_INITIALREWARDITEM_OFFSET UNITYSDK_OFFSET(0x8EF4A50)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_GET_ISINITIALREWARDCLAIMABLE_OFFSET UNITYSDK_OFFSET(0x8EF4A70)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_GET_ISINITIALREWARDCLAIMED_OFFSET UNITYSDK_OFFSET(0x8EF4A90)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_GET_NORMALREWARDITEM_OFFSET UNITYSDK_OFFSET(0x8EF4AB0)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_GET_ROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x8EF4AF0)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_GET_SPECIALREWARDEXTRAITEM_OFFSET UNITYSDK_OFFSET(0x8EF4AD0)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_GET__INITIALREWARDQUESTDATA_OFFSET UNITYSDK_OFFSET(0x8EF49B0)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_GET__INITIALREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0x8EF49A0)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_REMOVE_ONMAYBEINITIALREWARDCLAIMED_OFFSET UNITYSDK_OFFSET(0x8EF5330)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_SET_INITIALREWARDITEM_OFFSET UNITYSDK_OFFSET(0x8EF4A60)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_SET_NORMALREWARDITEM_OFFSET UNITYSDK_OFFSET(0x8EF4AC0)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_SET_ROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x8EF4B00)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_SET_SPECIALREWARDEXTRAITEM_OFFSET UNITYSDK_OFFSET(0x8EF4AE0)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x8EF4C60)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL__ONQUESTGETREWARD_OFFSET UNITYSDK_OFFSET(0x8EF5230)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitV2RewardOverviewViewModel_TypeDefinitionIndex = 49816;

	class ActivityBenefitV2RewardOverviewViewModel : public ::System::Object
	{
	public:
		::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>* OnMaybeInitialRewardClaimed; // 0x10
		::RPG::Client::ItemDisplayData* _NormalRewardItem_k__BackingField; // 0x18
		::RPG::Client::ItemDisplayData* _SpecialRewardExtraItem_k__BackingField; // 0x20
		::RPG::Client::ItemDisplayData* _InitialRewardItem_k__BackingField; // 0x28
		::System::Int32 _RoundCount_k__BackingField; // 0x30
		::System::UInt32 __InitialRewardQuestID_k__BackingField; // 0x34

		::System::Void _ctor(::System::UInt32 initialRewardQuestID, ::System::UInt32 seasonConfigID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL__CTOR_OFFSET))(this, initialRewardQuestID, seasonConfigID);
		}

		::System::UInt32 get__InitialRewardQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_GET__INITIALREWARDQUESTID_OFFSET))(this);
		}

		::RPG::Client::QuestData* get__InitialRewardQuestData()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_GET__INITIALREWARDQUESTDATA_OFFSET))(this);
		}

		::RPG::Client::ItemDisplayData* get_InitialRewardItem()
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_GET_INITIALREWARDITEM_OFFSET))(this);
		}

		::System::Void set_InitialRewardItem(::RPG::Client::ItemDisplayData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_SET_INITIALREWARDITEM_OFFSET))(this, value);
		}

		::System::Boolean get_IsInitialRewardClaimable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_GET_ISINITIALREWARDCLAIMABLE_OFFSET))(this);
		}

		::System::Boolean get_IsInitialRewardClaimed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_GET_ISINITIALREWARDCLAIMED_OFFSET))(this);
		}

		::RPG::Client::ItemDisplayData* get_NormalRewardItem()
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_GET_NORMALREWARDITEM_OFFSET))(this);
		}

		::System::Void set_NormalRewardItem(::RPG::Client::ItemDisplayData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_SET_NORMALREWARDITEM_OFFSET))(this, value);
		}

		::RPG::Client::ItemDisplayData* get_SpecialRewardExtraItem()
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_GET_SPECIALREWARDEXTRAITEM_OFFSET))(this);
		}

		::System::Void set_SpecialRewardExtraItem(::RPG::Client::ItemDisplayData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_SET_SPECIALREWARDEXTRAITEM_OFFSET))(this, value);
		}

		::System::Int32 get_RoundCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_GET_ROUNDCOUNT_OFFSET))(this);
		}

		::System::Void set_RoundCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_SET_ROUNDCOUNT_OFFSET))(this, value);
		}

		static ::RPG::Client::ActivityBenefitV2RewardOverviewViewModel* Create()
		{
			return ((::RPG::Client::ActivityBenefitV2RewardOverviewViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void ClaimInitialReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_CLAIMINITIALREWARD_OFFSET))(this);
		}

		::System::Void _OnQuestGetReward(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL__ONQUESTGETREWARD_OFFSET))(this, param);
		}

		::System::Void add_OnMaybeInitialRewardClaimed(::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_ADD_ONMAYBEINITIALREWARDCLAIMED_OFFSET))(this, value);
		}

		::System::Void remove_OnMaybeInitialRewardClaimed(::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL_REMOVE_ONMAYBEINITIALREWARDCLAIMED_OFFSET))(this, value);
		}
	};
}
