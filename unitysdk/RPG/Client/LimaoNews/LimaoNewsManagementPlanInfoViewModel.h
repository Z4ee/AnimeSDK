#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsManagementPlanInfoItemViewModelState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::LimaoNews { class LimaoNewsManagementPlanInfoItemViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfferingService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanStateRefreshMessage; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xD46A560)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD46A820)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD46AAA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xD46AAC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_LOCKDESC_OFFSET UNITYSDK_OFFSET(0xD46AB00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_PLANDESCWAITING_OFFSET UNITYSDK_OFFSET(0xD46AA60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_PLANTITLE_OFFSET UNITYSDK_OFFSET(0xD46AA40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xD46AA80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_STATE_OFFSET UNITYSDK_OFFSET(0xD46AAE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_REGISTERREFRESHCALLBACK_OFFSET UNITYSDK_OFFSET(0xD46A710)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD46AAB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0xD46AAD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_PLANDESCWAITING_OFFSET UNITYSDK_OFFSET(0xD46AA70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_PLANTITLE_OFFSET UNITYSDK_OFFSET(0xD46AA50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0xD46AA90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_STATE_OFFSET UNITYSDK_OFFSET(0xD46AAF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_UNREGISTERREFRESHCALLBACK_OFFSET UNITYSDK_OFFSET(0xD46A760)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD46A6F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL__GETLOCKDESC_OFFSET UNITYSDK_OFFSET(0xD46A8E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL__ONPLANSTATEREFRESHMESSAGE_OFFSET UNITYSDK_OFFSET(0xD46A7B0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsManagementPlanInfoViewModel_TypeDefinitionIndex = 79104;

	class LimaoNewsManagementPlanInfoViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsOfferingService* _OfferingService; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*>* _Items_k__BackingField; // 0x28
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x30
		::System::String* _ImagePath_k__BackingField; // 0x38
		::System::Action* _RefreshCallback; // 0x40
		::RPG::Client::TextID _PlanDescWaiting_k__BackingField; // 0x48
		::RPG::Client::TextID _PlanTitle_k__BackingField; // 0x58
		::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState _State_k__BackingField; // 0x68
		::System::UInt32 _RewardID_k__BackingField; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoViewModel* Create(::RPG::Client::TextID a1, ::RPG::Client::TextID a2, ::System::UInt32 a3, ::System::String* a4, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*>* a5, ::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState a6, ::Class_1_5F4D64A4B97E38F9* a7, ::RPG::Client::LimaoNews::LimaoNewsOfferingService* a8)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoViewModel*(*)(::RPG::Client::TextID, ::RPG::Client::TextID, ::System::UInt32, ::System::String*, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*>*, ::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState, ::Class_1_5F4D64A4B97E38F9*, ::RPG::Client::LimaoNews::LimaoNewsOfferingService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void RegisterRefreshCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_REGISTERREFRESHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnregisterRefreshCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_UNREGISTERREFRESHCALLBACK_OFFSET))(this);
		}

		::System::Void _OnPlanStateRefreshMessage(::RPG::Client::LimaoNews::LimaoNewsPlanStateRefreshMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPlanStateRefreshMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL__ONPLANSTATEREFRESHMESSAGE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::TextID _GetLockDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL__GETLOCKDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_PlanTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_PLANTITLE_OFFSET))(this);
		}

		::System::Void set_PlanTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_PLANTITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PlanDescWaiting()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_PLANDESCWAITING_OFFSET))(this);
		}

		::System::Void set_PlanDescWaiting(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_PLANDESCWAITING_OFFSET))(this, a1);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_REWARDID_OFFSET))(this);
		}

		::System::Void set_RewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_REWARDID_OFFSET))(this, a1);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_IMAGEPATH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*>* get_Items()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_ITEMS_OFFSET))(this);
		}

		::System::Void set_Items(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_ITEMS_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState get_State()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_SET_STATE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_LockDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTPLANINFOVIEWMODEL_GET_LOCKDESC_OFFSET))(this);
		}
	};
}
