#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityBenefitV2RoundListViewModel_Round_StateType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

class Class_1_CC0F8AEEF044EF7C;
class Class_2_6D901FCC8D1C685B;
namespace RPG::Client { class ItemDisplayData; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_ADD_ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0x8EF7920)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_ADD_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x8EF6E60)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EF6970)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_DRAW_OFFSET UNITYSDK_OFFSET(0x8EF7780)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GETREMAININGTIMEBEFOREUNLOCK_OFFSET UNITYSDK_OFFSET(0x8EF7350)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_ISSPECIALPRIZE_OFFSET UNITYSDK_OFFSET(0x8EF6F20)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0x8EF6F90)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_SHOULDSHOWUNLOCKING_OFFSET UNITYSDK_OFFSET(0x8EF7200)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_STATE_OFFSET UNITYSDK_OFFSET(0x8EF6E40)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET__SEASONCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x8EF6D90)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_REMOVE_ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0x8EF7980)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_REMOVE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x8EF6EC0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_SETUNLOCKINGSEEN_OFFSET UNITYSDK_OFFSET(0x8EF7610)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_SET_STATE_OFFSET UNITYSDK_OFFSET(0x8EF6E50)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_SYNCONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0x8EF6D30)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__CHECKSHOULDSHOWUNLOCKING_OFFSET UNITYSDK_OFFSET(0x8EF7210)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x8EF6560)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__GETSTATEFROMMODEL_OFFSET UNITYSDK_OFFSET(0x8EF7BF0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__ONMODELPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x8EF79E0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x8EF7120)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitV2RoundListViewModel_Round_TypeDefinitionIndex = 49821;

	class ActivityBenefitV2RoundListViewModel_Round : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItems; // 0x10
		::System::Action* OnStateChanged; // 0x18
		::System::Action* OnDrawFinished; // 0x20
		::Class_2_6D901FCC8D1C685B* _Model; // 0x28
		::System::UInt32 _SeasonConfigID; // 0x30
		::System::Int32 Index; // 0x34
		::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType _State_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 seasonConfigID, ::System::Int32 index, ::Class_2_6D901FCC8D1C685B* model)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::Class_2_6D901FCC8D1C685B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__CTOR_OFFSET))(this, seasonConfigID, index, model);
		}

		::Class_1_CC0F8AEEF044EF7C* get__SeasonConfigData()
		{
			return ((::Class_1_CC0F8AEEF044EF7C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET__SEASONCONFIGDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType get_State()
		{
			return ((::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_SET_STATE_OFFSET))(this, value);
		}

		::System::Void add_OnStateChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_ADD_ONSTATECHANGED_OFFSET))(this, value);
		}

		::System::Void remove_OnStateChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_REMOVE_ONSTATECHANGED_OFFSET))(this, value);
		}

		::System::Boolean get_IsSpecialPrize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_ISSPECIALPRIZE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_RewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_REWARDITEMS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ShouldShowUnlocking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_SHOULDSHOWUNLOCKING_OFFSET))(this);
		}

		::System::Boolean _CheckShouldShowUnlocking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__CHECKSHOULDSHOWUNLOCKING_OFFSET))(this);
		}

		::System::Nullable_1<::System::TimeSpan> GetRemainingTimeBeforeUnlock()
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GETREMAININGTIMEBEFOREUNLOCK_OFFSET))(this);
		}

		::System::Void SetUnlockingSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_SETUNLOCKINGSEEN_OFFSET))(this);
		}

		::System::Void Draw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_DRAW_OFFSET))(this);
		}

		::System::Void SyncOnDrawFinished(::Class_2_6D901FCC8D1C685B* model)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6D901FCC8D1C685B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_SYNCONDRAWFINISHED_OFFSET))(this, model);
		}

		::System::Void add_OnDrawFinished(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_ADD_ONDRAWFINISHED_OFFSET))(this, value);
		}

		::System::Void remove_OnDrawFinished(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_REMOVE_ONDRAWFINISHED_OFFSET))(this, value);
		}

		::System::Void _OnModelPropertyChanged(::System::Object* _, ::System::ComponentModel::PropertyChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__ONMODELPROPERTYCHANGED_OFFSET))(this, _, e);
		}

		::System::Void _RefreshState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__REFRESHSTATE_OFFSET))(this);
		}

		::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType _GetStateFromModel()
		{
			return ((::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__GETSTATEFROMMODEL_OFFSET))(this);
		}
	};
}
