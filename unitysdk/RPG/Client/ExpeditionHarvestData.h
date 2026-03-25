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

#define RPG_CLIENT_EXPEDITIONHARVESTDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x964DC50)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GETGROWTHTARGETICONPATH_OFFSET UNITYSDK_OFFSET(0x964E270)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_EXPEDITIONID_OFFSET UNITYSDK_OFFSET(0x964E3B0)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x964E490)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x964E480)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x964DD50)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x964DE00)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x964E3F0)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x964E470)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x964E4A0)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x964E3C0)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_GET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0x964E3D0)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_ISREQUIREBYGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0x964DED0)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x964E0B0)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_REGISTERUNLOCK_OFFSET UNITYSDK_OFFSET(0x964E100)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA_SET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0x964E3E0)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x964DA70)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionHarvestData_TypeDefinitionIndex = 51882;

	class ExpeditionHarvestData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardList_k__BackingField; // 0x10
		::RPG::Client::ConditionChecker* _UnlockConditionChecker; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::RPG::Client::ConditionCheckerHandle* _UnlockConditionCheckerHandle; // 0x28
		::System::UInt32 _Group_k__BackingField; // 0x30
		::System::UInt32 _RewardID_k__BackingField; // 0x34
		::RPG::Client::TextID _Name_k__BackingField; // 0x38
		::System::UInt32 _ExpeditionID_k__BackingField; // 0x48
		::System::UInt32 _Order_k__BackingField; // 0x4C

		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA__CTOR_OFFSET))(this, ID);
		}

		::System::Int32 CompareTo(::RPG::Client::ExpeditionHarvestData* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ExpeditionHarvestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_COMPARETO_OFFSET))(this, other);
		}

		::RPG::Client::Promises::IPromise* PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_PREPAREDATA_OFFSET))(this);
		}

		::System::Void RegisterUnlock(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_REGISTERUNLOCK_OFFSET))(this, callback);
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

		::System::Void set_RewardList(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA_SET_REWARDLIST_OFFSET))(this, value);
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
