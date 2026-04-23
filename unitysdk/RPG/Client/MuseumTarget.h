#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MuseumTargetRewardType.h"
#include "unitysdk/System/Object.h"

class Class_1_53763D498DB8321D_5;
class Class_1_FB4A4ADDA7338C08_3;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class MuseumExhibitItemData; }
namespace RPG::Client { class MuseumStaffData; }
namespace RPG::Client { class MuseumTargetMission; }
namespace RPG::GameCore { class MuseumTargetRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MUSEUMTARGET_CREATE_OFFSET UNITYSDK_OFFSET(0xAB0E8D0)
#define RPG_CLIENT_MUSEUMTARGET_GET_ALLAREASPERFECTPROGRESS_OFFSET UNITYSDK_OFFSET(0xAB0E890)
#define RPG_CLIENT_MUSEUMTARGET_GET_ANYAREAPERFECTPROGRESS_OFFSET UNITYSDK_OFFSET(0xAB0E870)
#define RPG_CLIENT_MUSEUMTARGET_GET_ID_OFFSET UNITYSDK_OFFSET(0xAB0E730)
#define RPG_CLIENT_MUSEUMTARGET_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xAB0E8B0)
#define RPG_CLIENT_MUSEUMTARGET_GET_MISSIONS_OFFSET UNITYSDK_OFFSET(0xAB0E790)
#define RPG_CLIENT_MUSEUMTARGET_GET_RENEWPOINTPROGRESS_OFFSET UNITYSDK_OFFSET(0xAB0E850)
#define RPG_CLIENT_MUSEUMTARGET_GET_REWARDFUND_OFFSET UNITYSDK_OFFSET(0xAB0E830)
#define RPG_CLIENT_MUSEUMTARGET_GET_REWARDITEMDATA_OFFSET UNITYSDK_OFFSET(0xAB0E7D0)
#define RPG_CLIENT_MUSEUMTARGET_GET_REWARDITEM_OFFSET UNITYSDK_OFFSET(0xAB0E810)
#define RPG_CLIENT_MUSEUMTARGET_GET_REWARDSTAFF_OFFSET UNITYSDK_OFFSET(0xAB0E7F0)
#define RPG_CLIENT_MUSEUMTARGET_GET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0xAB0E7B0)
#define RPG_CLIENT_MUSEUMTARGET_GET_ROW_OFFSET UNITYSDK_OFFSET(0xAB0E750)
#define RPG_CLIENT_MUSEUMTARGET_GET_TRIGGERTURN_OFFSET UNITYSDK_OFFSET(0xAB0E770)
#define RPG_CLIENT_MUSEUMTARGET_SET_ALLAREASPERFECTPROGRESS_OFFSET UNITYSDK_OFFSET(0xAB0E8A0)
#define RPG_CLIENT_MUSEUMTARGET_SET_ANYAREAPERFECTPROGRESS_OFFSET UNITYSDK_OFFSET(0xAB0E880)
#define RPG_CLIENT_MUSEUMTARGET_SET_ID_OFFSET UNITYSDK_OFFSET(0xAB0E740)
#define RPG_CLIENT_MUSEUMTARGET_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xAB0E8C0)
#define RPG_CLIENT_MUSEUMTARGET_SET_MISSIONS_OFFSET UNITYSDK_OFFSET(0xAB0E7A0)
#define RPG_CLIENT_MUSEUMTARGET_SET_RENEWPOINTPROGRESS_OFFSET UNITYSDK_OFFSET(0xAB0E860)
#define RPG_CLIENT_MUSEUMTARGET_SET_REWARDFUND_OFFSET UNITYSDK_OFFSET(0xAB0E840)
#define RPG_CLIENT_MUSEUMTARGET_SET_REWARDITEMDATA_OFFSET UNITYSDK_OFFSET(0xAB0E7E0)
#define RPG_CLIENT_MUSEUMTARGET_SET_REWARDITEM_OFFSET UNITYSDK_OFFSET(0xAB0E820)
#define RPG_CLIENT_MUSEUMTARGET_SET_REWARDSTAFF_OFFSET UNITYSDK_OFFSET(0xAB0E800)
#define RPG_CLIENT_MUSEUMTARGET_SET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0xAB0E7C0)
#define RPG_CLIENT_MUSEUMTARGET_SET_ROW_OFFSET UNITYSDK_OFFSET(0xAB0E760)
#define RPG_CLIENT_MUSEUMTARGET_SET_TRIGGERTURN_OFFSET UNITYSDK_OFFSET(0xAB0E780)
#define RPG_CLIENT_MUSEUMTARGET_SYNCDATA_1_OFFSET UNITYSDK_OFFSET(0xAB0F5A0)
#define RPG_CLIENT_MUSEUMTARGET_SYNCDATA_OFFSET UNITYSDK_OFFSET(0xAB0F220)
#define RPG_CLIENT_MUSEUMTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xAB0EB00)
#define RPG_CLIENT_MUSEUMTARGET__REFRESHISFINISH_OFFSET UNITYSDK_OFFSET(0xAB0F430)
#define RPG_CLIENT_MUSEUMTARGET__SETREWARD_OFFSET UNITYSDK_OFFSET(0xAB0EBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumTarget_TypeDefinitionIndex = 61118;

	class MuseumTarget : public ::System::Object
	{
	public:
		::RPG::GameCore::MuseumTargetRow* _Row_k__BackingField; // 0x10
		::RPG::Client::ItemData* _RewardItemData_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumTargetMission*>* _Missions_k__BackingField; // 0x20
		::RPG::Client::MuseumStaffData* _RewardStaff_k__BackingField; // 0x28
		::RPG::Client::MuseumExhibitItemData* _RewardItem_k__BackingField; // 0x30
		::RPG::GameCore::MuseumTargetRewardType _RewardType_k__BackingField; // 0x38
		::System::UInt32 _RewardFund_k__BackingField; // 0x3C
		::System::Boolean _IsFinish_k__BackingField; // 0x40
		::System::UInt32 _TriggerTurn_k__BackingField; // 0x44
		::System::UInt32 _ID_k__BackingField; // 0x48
		::System::UInt32 _AllAreasPerfectProgress_k__BackingField; // 0x4C
		::System::UInt32 _RenewPointProgress_k__BackingField; // 0x50
		::System::UInt32 _AnyAreaPerfectProgress_k__BackingField; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::MuseumTargetRow* get_Row()
		{
			return ((::RPG::GameCore::MuseumTargetRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MuseumTargetRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumTargetRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_SET_ROW_OFFSET))(this, value);
		}

		::System::UInt32 get_TriggerTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_GET_TRIGGERTURN_OFFSET))(this);
		}

		::System::Void set_TriggerTurn(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_SET_TRIGGERTURN_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumTargetMission*>* get_Missions()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumTargetMission*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_GET_MISSIONS_OFFSET))(this);
		}

		::System::Void set_Missions(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumTargetMission*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumTargetMission*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_SET_MISSIONS_OFFSET))(this, value);
		}

		::RPG::GameCore::MuseumTargetRewardType get_RewardType()
		{
			return ((::RPG::GameCore::MuseumTargetRewardType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_GET_REWARDTYPE_OFFSET))(this);
		}

		::System::Void set_RewardType(::RPG::GameCore::MuseumTargetRewardType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumTargetRewardType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_SET_REWARDTYPE_OFFSET))(this, value);
		}

		::RPG::Client::ItemData* get_RewardItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_GET_REWARDITEMDATA_OFFSET))(this);
		}

		::System::Void set_RewardItemData(::RPG::Client::ItemData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_SET_REWARDITEMDATA_OFFSET))(this, value);
		}

		::RPG::Client::MuseumStaffData* get_RewardStaff()
		{
			return ((::RPG::Client::MuseumStaffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_GET_REWARDSTAFF_OFFSET))(this);
		}

		::System::Void set_RewardStaff(::RPG::Client::MuseumStaffData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumStaffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_SET_REWARDSTAFF_OFFSET))(this, value);
		}

		::RPG::Client::MuseumExhibitItemData* get_RewardItem()
		{
			return ((::RPG::Client::MuseumExhibitItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_GET_REWARDITEM_OFFSET))(this);
		}

		::System::Void set_RewardItem(::RPG::Client::MuseumExhibitItemData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumExhibitItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_SET_REWARDITEM_OFFSET))(this, value);
		}

		::System::UInt32 get_RewardFund()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_GET_REWARDFUND_OFFSET))(this);
		}

		::System::Void set_RewardFund(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_SET_REWARDFUND_OFFSET))(this, value);
		}

		::System::UInt32 get_RenewPointProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_GET_RENEWPOINTPROGRESS_OFFSET))(this);
		}

		::System::Void set_RenewPointProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_SET_RENEWPOINTPROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_AnyAreaPerfectProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_GET_ANYAREAPERFECTPROGRESS_OFFSET))(this);
		}

		::System::Void set_AnyAreaPerfectProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_SET_ANYAREAPERFECTPROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_AllAreasPerfectProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_GET_ALLAREASPERFECTPROGRESS_OFFSET))(this);
		}

		::System::Void set_AllAreasPerfectProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_SET_ALLAREASPERFECTPROGRESS_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_SET_ISFINISH_OFFSET))(this, value);
		}

		static ::RPG::Client::MuseumTarget* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::MuseumTarget*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_CREATE_OFFSET))(id);
		}

		::System::Void SyncData(::Class_1_53763D498DB8321D_5* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_53763D498DB8321D_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_SYNCDATA_OFFSET))(this, proto);
		}

		::System::Void SyncData_1(::Class_1_FB4A4ADDA7338C08_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB4A4ADDA7338C08_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET_SYNCDATA_1_OFFSET))(this, proto);
		}

		::System::Void _SetReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET__SETREWARD_OFFSET))(this);
		}

		::System::Void _RefreshIsFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGET__REFRESHISFINISH_OFFSET))(this);
		}
	};
}
