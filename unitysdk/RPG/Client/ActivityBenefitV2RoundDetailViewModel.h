#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_03EB5D6C771FDB13;
namespace Proto { class ItemList; }
namespace RPG::Client { class ActivityBenefitV2Round; }
namespace RPG::Client { class ItemDisplayData; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_ADD_ONCLAIMREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0x194CE680)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_CLAIMREWARD_OFFSET UNITYSDK_OFFSET(0x194CE430)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x194CDE60)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x194CE2B0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x194CDD00)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x194CDB80)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_GET_ISREWARDCLAIMED_OFFSET UNITYSDK_OFFSET(0x194CDDF0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x194CDDD0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x194CDC80)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_GET__PRIZE_OFFSET UNITYSDK_OFFSET(0x194CDB90)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_REMOVE_ONCLAIMREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0x194CE6E0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0x194CDDE0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x194CE120)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL__ONCLAIMREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0x194CE5D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitV2RoundDetailViewModel_TypeDefinitionIndex = 58680;

	class ActivityBenefitV2RoundDetailViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _Items_k__BackingField; // 0x10
		::RPG::Client::ActivityBenefitV2Round* _Round; // 0x18
		::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>* OnClaimRewardFinished; // 0x20
		::System::Int32 _Index_k__BackingField; // 0x28
		::System::Boolean IsSpecialPrize; // 0x2C

		::System::Void _ctor(::System::Int32 a1, ::RPG::Client::ActivityBenefitV2Round* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::ActivityBenefitV2Round*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
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

		::System::Void set_Items(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_SET_ITEMS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRewardClaimed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_GET_ISREWARDCLAIMED_OFFSET))(this);
		}

		static ::RPG::Client::ActivityBenefitV2RoundDetailViewModel* Create(::System::Int32 a1)
		{
			return ((::RPG::Client::ActivityBenefitV2RoundDetailViewModel*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_CREATE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void ClaimReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_CLAIMREWARD_OFFSET))(this);
		}

		::System::Void _OnClaimRewardFinished(::System::Int32 a1, ::Proto::ItemList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL__ONCLAIMREWARDFINISHED_OFFSET))(this, a1, a2);
		}

		::System::Void add_OnClaimRewardFinished(::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_ADD_ONCLAIMREWARDFINISHED_OFFSET))(this, a1);
		}

		::System::Void remove_OnClaimRewardFinished(::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDDETAILVIEWMODEL_REMOVE_ONCLAIMREWARDFINISHED_OFFSET))(this, a1);
		}
	};
}
