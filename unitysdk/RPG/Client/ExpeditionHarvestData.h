#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client { class ConditionCheckerHandle; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EXPEDITIONHARVESTDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1B89A1F0)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GETGROWTHTARGETICONPATH_OFFSET UNITYSDK_OFFSET(0x1B89A7B0)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_EXPEDITIONID_OFFSET UNITYSDK_OFFSET(0x1B89A8E0)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x1B89A990)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1B89A980)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B89A2F0)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1B89A3A0)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B89A920)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B89A970)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1B89A9A0)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1B89A8F0)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0x1B89A900)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_ISREQUIREBYGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0x1B89A470)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x1B89A510)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_REGISTERUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B89A560)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_SET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0x1B89A910)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B899FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionHarvestData_TypeDefinitionIndex = 64026;

	class ExpeditionHarvestData : public ::System::Object
	{
	public:
		::RPG::Client::ConditionChecker* _UnlockConditionChecker; // 0x10
		::RPG::Client::ConditionCheckerHandle* _UnlockConditionCheckerHandle; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardList_k__BackingField; // 0x28
		::System::UInt32 _Group_k__BackingField; // 0x30
		::System::UInt32 _RewardID_k__BackingField; // 0x34
		::System::UInt32 _ExpeditionID_k__BackingField; // 0x38
		::System::UInt32 _Order_k__BackingField; // 0x3C
		::RPG::Client::TextID _Name_k__BackingField; // 0x40

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::Client::ExpeditionHarvestData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ExpeditionHarvestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_COMPARETO_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_PREPAREDATA_OFFSET))(this);
		}

		::System::Void RegisterUnlock(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_REGISTERUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean IsRequireByGrowthTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_ISREQUIREBYGROWTHTARGET_OFFSET))(this);
		}

		::System::String* GetGrowthTargetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_GETGROWTHTARGETICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_ExpeditionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_EXPEDITIONID_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_REWARDID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_RewardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_REWARDLIST_OFFSET))(this);
		}

		::System::Void set_RewardList(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_SET_REWARDLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_ISINPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_ISNEW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_Group()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_GROUP_OFFSET))(this);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_ORDER_OFFSET))(this);
		}
	};
}
