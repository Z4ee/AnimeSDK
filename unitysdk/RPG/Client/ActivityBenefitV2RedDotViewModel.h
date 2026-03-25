#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2C7FF40AF5A167E1;
namespace Proto { class ItemList; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_ADD_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x8EF3F60)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x8EF3F10)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EF37A0)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_GET__SEASON_OFFSET UNITYSDK_OFFSET(0x8EF4170)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_ISALLREWARDCLAIMED_OFFSET UNITYSDK_OFFSET(0x8EF3B30)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_ISANYREWARDCLAIMABLE_OFFSET UNITYSDK_OFFSET(0x8EF3CC0)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_ISINITIALREWARDCLAIMABLE_OFFSET UNITYSDK_OFFSET(0x8EF4940)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_REMOVE_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x8EF4250)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_VISITREWARDINGROUNDS_OFFSET UNITYSDK_OFFSET(0x8EF4590)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x8EF42B0)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL__ONCLAIMREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0x8EF4520)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL__ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0x8EF44C0)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL__ONGETDATAFINISHED_OFFSET UNITYSDK_OFFSET(0x8EF4470)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitV2RedDotViewModel_TypeDefinitionIndex = 49815;

	class ActivityBenefitV2RedDotViewModel : public ::System::Object
	{
	public:
		::System::Action* OnChanged; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL__CTOR_OFFSET))(this);
		}

		::Class_2_2C7FF40AF5A167E1* get__Season()
		{
			return ((::Class_2_2C7FF40AF5A167E1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_GET__SEASON_OFFSET))(this);
		}

		::System::Void add_OnChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_ADD_ONCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_OnChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_REMOVE_ONCHANGED_OFFSET))(this, value);
		}

		static ::RPG::Client::ActivityBenefitV2RedDotViewModel* Create()
		{
			return ((::RPG::Client::ActivityBenefitV2RedDotViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnGetDataFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL__ONGETDATAFINISHED_OFFSET))(this);
		}

		::System::Void _OnDrawFinished(::System::Int32 roundIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL__ONDRAWFINISHED_OFFSET))(this, roundIndex);
		}

		::System::Void _OnClaimRewardFinished(::System::Int32 roundIndex, ::Proto::ItemList* rewardItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL__ONCLAIMREWARDFINISHED_OFFSET))(this, roundIndex, rewardItems);
		}

		::System::Void VisitRewardingRounds(::System::Func_2<::System::Int32, ::System::Boolean>* visit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_VISITREWARDINGROUNDS_OFFSET))(this, visit);
		}

		::System::Boolean IsInitialRewardClaimable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_ISINITIALREWARDCLAIMABLE_OFFSET))(this);
		}

		::System::Boolean IsAnyRewardClaimable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_ISANYREWARDCLAIMABLE_OFFSET))(this);
		}

		::System::Boolean IsAllRewardClaimed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_ISALLREWARDCLAIMED_OFFSET))(this);
		}
	};
}
