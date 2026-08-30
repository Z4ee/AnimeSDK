#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemList; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHOOSEDELIVERYREWARDDATA_GET_DELIVERYID_OFFSET UNITYSDK_OFFSET(0x1BBFBAF0)
#define RPG_CLIENT_CHOOSEDELIVERYREWARDDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1BBFBB10)
#define RPG_CLIENT_CHOOSEDELIVERYREWARDDATA_GET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0x1BBFBB30)
#define RPG_CLIENT_CHOOSEDELIVERYREWARDDATA_ISAVATARCARDREWARD_OFFSET UNITYSDK_OFFSET(0x1BBFBB50)
#define RPG_CLIENT_CHOOSEDELIVERYREWARDDATA_SET_DELIVERYID_OFFSET UNITYSDK_OFFSET(0x1BBFBB00)
#define RPG_CLIENT_CHOOSEDELIVERYREWARDDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1BBFBB20)
#define RPG_CLIENT_CHOOSEDELIVERYREWARDDATA_SET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0x1BBFBB40)
#define RPG_CLIENT_CHOOSEDELIVERYREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBFAEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChooseDeliveryRewardData_TypeDefinitionIndex = 63583;

	class ChooseDeliveryRewardData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Proto::ItemList*>* _RewardList_k__BackingField; // 0x10
		::System::UInt32 _DeliveryID_k__BackingField; // 0x18
		::System::UInt32 _GroupID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYREWARDDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_DeliveryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYREWARDDATA_GET_DELIVERYID_OFFSET))(this);
		}

		::System::Void set_DeliveryID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYREWARDDATA_SET_DELIVERYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYREWARDDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYREWARDDATA_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Proto::ItemList*>* get_RewardList()
		{
			return ((::System::Collections::Generic::List_1<::Proto::ItemList*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYREWARDDATA_GET_REWARDLIST_OFFSET))(this);
		}

		::System::Void set_RewardList(::System::Collections::Generic::List_1<::Proto::ItemList*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Proto::ItemList*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYREWARDDATA_SET_REWARDLIST_OFFSET))(this, a1);
		}

		::System::Boolean IsAvatarCardReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYREWARDDATA_ISAVATARCARDREWARD_OFFSET))(this);
		}
	};
}
