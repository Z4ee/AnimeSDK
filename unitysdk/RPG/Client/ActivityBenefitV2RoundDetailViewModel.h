#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_03EB5D6C771FDB13;
class Class_2_6D901FCC8D1C685B;
namespace Proto { class ItemList; }
namespace RPG::Client { class ItemDisplayData; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_ADD_ONCLAIMREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0x8EF5EE0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_CLAIMREWARD_OFFSET UNITYSDK_OFFSET(0x8EF5CA0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x8EF5750)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EF5B50)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x8EF55C0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x8EF5430)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_GET_ISREWARDCLAIMED_OFFSET UNITYSDK_OFFSET(0x8EF5700)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x8EF56E0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x8EF54F0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_GET__PRIZE_OFFSET UNITYSDK_OFFSET(0x8EF5440)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_REMOVE_ONCLAIMREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0x8EF5F40)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0x8EF56F0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x8EF5970)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL__ONCLAIMREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0x8EF5E40)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitV2RoundDetailViewModel_TypeDefinitionIndex = 49819;

	class ActivityBenefitV2RoundDetailViewModel : public ::System::Object
	{
	public:
		::Class_2_6D901FCC8D1C685B* _Round; // 0x10
		::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>* OnClaimRewardFinished; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _Items_k__BackingField; // 0x20
		::System::Boolean IsSpecialPrize; // 0x28
		::System::Int32 _Index_k__BackingField; // 0x2C

		::System::Void _ctor(::System::Int32 roundIndex, ::Class_2_6D901FCC8D1C685B* round, ::System::Boolean isSpecialPrize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_6D901FCC8D1C685B*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL__CTOR_OFFSET))(this, roundIndex, round, isSpecialPrize);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_GET_INDEX_OFFSET))(this);
		}

		::Class_1_03EB5D6C771FDB13* get__Prize()
		{
			return ((::Class_1_03EB5D6C771FDB13*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_GET__PRIZE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_Items()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_GET_ITEMS_OFFSET))(this);
		}

		::System::Void set_Items(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_SET_ITEMS_OFFSET))(this, value);
		}

		::System::Boolean get_IsRewardClaimed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_GET_ISREWARDCLAIMED_OFFSET))(this);
		}

		static ::RPG::Client::ActivityBenefitV2RoundDetailViewModel* Create(::System::Int32 roundIndex)
		{
			return ((::RPG::Client::ActivityBenefitV2RoundDetailViewModel*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_CREATE_OFFSET))(roundIndex);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void ClaimReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_CLAIMREWARD_OFFSET))(this);
		}

		::System::Void _OnClaimRewardFinished(::System::Int32 roundIndex, ::Proto::ItemList* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL__ONCLAIMREWARDFINISHED_OFFSET))(this, roundIndex, itemList);
		}

		::System::Void add_OnClaimRewardFinished(::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_ADD_ONCLAIMREWARDFINISHED_OFFSET))(this, value);
		}

		::System::Void remove_OnClaimRewardFinished(::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_REMOVE_ONCLAIMREWARDFINISHED_OFFSET))(this, value);
		}
	};
}
