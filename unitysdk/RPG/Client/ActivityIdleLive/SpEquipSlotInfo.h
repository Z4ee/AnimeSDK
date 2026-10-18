#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_7A8F7ACF0C7369F4;
namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotData; }
namespace RPG::Client::ActivityIdleLive { class SpSlotUiData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_CANCELPREREPLACEDEQUIPS_OFFSET UNITYSDK_OFFSET(0xC517560)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_CLEARALLSPEQUIPS_OFFSET UNITYSDK_OFFSET(0xC515E00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETALLEQUIPPEDSLOTS_OFFSET UNITYSDK_OFFSET(0xC515CA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETALLEQUIPPEDSPEQUIPS_OFFSET UNITYSDK_OFFSET(0xC515FE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETALLSLOTSEQUPPEDBYAVATAR_OFFSET UNITYSDK_OFFSET(0xC5156A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETALLSPEQUIPSLOTUIDATAS_OFFSET UNITYSDK_OFFSET(0xC516560)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETEQUIPBELONGEDONEBASEDINDEX_OFFSET UNITYSDK_OFFSET(0xC5169A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETEQUIPMENTMODIFIERSOURCE_OFFSET UNITYSDK_OFFSET(0xC517780)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETSLOTIDBYTEAMSLOT_OFFSET UNITYSDK_OFFSET(0xC5158B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xC5155B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_HASUNLOCKEDSLOT_OFFSET UNITYSDK_OFFSET(0xC515AC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_ISEQUIPWORN_OFFSET UNITYSDK_OFFSET(0xC513810)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_ISSLOTALLEQUIPPED_OFFSET UNITYSDK_OFFSET(0xC514170)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_PREREPLACEEQUIP_OFFSET UNITYSDK_OFFSET(0xC517050)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xC5155C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETEMPTYSLOTID_OFFSET UNITYSDK_OFFSET(0xC516DC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETEQUIPBELONGEDSLOT_OFFSET UNITYSDK_OFFSET(0xC516880)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETSLOTBYID_OFFSET UNITYSDK_OFFSET(0xC5159C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETSPEQUIPSTATUSIFTAKEOFFEQUIP_OFFSET UNITYSDK_OFFSET(0xC5147C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETSPEQUIPSTATUSIFWEAREQUIP_OFFSET UNITYSDK_OFFSET(0xC514470)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETWORNEQUIPBYAVATAR_OFFSET UNITYSDK_OFFSET(0xC4F9240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETWORNEQUIPBYEQUIPID_OFFSET UNITYSDK_OFFSET(0xC516770)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYREPLACEEQUIPBYLIST_OFFSET UNITYSDK_OFFSET(0xC5172A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYREPLACEEQUIP_OFFSET UNITYSDK_OFFSET(0xC5171C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_WEAREQUIP_OFFSET UNITYSDK_OFFSET(0xC517470)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__CANTAKEOFFEQUIP_OFFSET UNITYSDK_OFFSET(0xC516B90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__CANWEARNEWEQUIP_OFFSET UNITYSDK_OFFSET(0xC516BF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC515610)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__GETFIRSTEMPTYSLOT_OFFSET UNITYSDK_OFFSET(0xC516C60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__INCREASEVERSION_OFFSET UNITYSDK_OFFSET(0xC5155D0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpEquipSlotInfo_TypeDefinitionIndex = 75237;

	class SpEquipSlotInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>* _SpEquipSlots; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::SpecialEquip*>* _PreUpdatedEquips; // 0x18
		::System::UInt32 _Version_k__BackingField; // 0x20

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_SET_VERSION_OFFSET))(this, a1);
		}

		::System::Void _IncreaseVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__INCREASEVERSION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>* GetAllSlotsEquppedByAvatar(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETALLSLOTSEQUPPEDBYAVATAR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSlotIdByTeamSlot(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETSLOTIDBYTEAMSLOT_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::SpEquipSlotData* TryGetSlotById(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::SpEquipSlotData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETSLOTBYID_OFFSET))(this, a1);
		}

		::System::Boolean HasUnlockedSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_HASUNLOCKEDSLOT_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>* GetAllEquippedSlots()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETALLEQUIPPEDSLOTS_OFFSET))(this);
		}

		::System::Void ClearAllSpEquips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_CLEARALLSPEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>* GetAllEquippedSpEquips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETALLEQUIPPEDSPEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpSlotUiData*>* GetAllSpEquipSlotUiDatas(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpSlotUiData*>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETALLSPEQUIPSLOTUIDATAS_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::SpecialEquip* TryGetWornEquipByEquipId(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::SpecialEquip*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETWORNEQUIPBYEQUIPID_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::SpEquipSlotData* TryGetEquipBelongedSlot(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::SpEquipSlotData*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETEQUIPBELONGEDSLOT_OFFSET))(this, a1);
		}

		::System::Boolean IsEquipWorn(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_ISEQUIPWORN_OFFSET))(this, a1);
		}

		::System::Int32 GetEquipBelongedOneBasedIndex(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETEQUIPBELONGEDONEBASEDINDEX_OFFSET))(this, a1);
		}

		::System::Boolean _CanTakeOffEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__CANTAKEOFFEQUIP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* TryGetSpEquipStatusIfTakeOffEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETSPEQUIPSTATUSIFTAKEOFFEQUIP_OFFSET))(this, a1);
		}

		::System::Boolean _CanWearNewEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__CANWEARNEWEQUIP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* TryGetSpEquipStatusIfWearEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETSPEQUIPSTATUSIFWEAREQUIP_OFFSET))(this, a1);
		}

		::System::UInt32 TryGetEmptySlotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETEMPTYSLOTID_OFFSET))(this);
		}

		::System::Boolean IsSlotAllEquipped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_ISSLOTALLEQUIPPED_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::SpEquipSlotData* _GetFirstEmptySlot()
		{
			return ((::RPG::Client::ActivityIdleLive::SpEquipSlotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO__GETFIRSTEMPTYSLOT_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::SpecialEquip* TryGetWornEquipByAvatar(::System::UInt32 a1, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a2)
		{
			return ((::RPG::Client::ActivityIdleLive::SpecialEquip*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYGETWORNEQUIPBYAVATAR_OFFSET))(this, a1, a2);
		}

		::System::Void PreReplaceEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_PREREPLACEEQUIP_OFFSET))(this, a1);
		}

		::System::Void TryReplaceEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYREPLACEEQUIP_OFFSET))(this, a1);
		}

		::System::Void TryReplaceEquipByList(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_TRYREPLACEEQUIPBYLIST_OFFSET))(this, a1);
		}

		::System::Void WearEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_WEAREQUIP_OFFSET))(this, a1, a2);
		}

		::System::Void CancelPreReplacedEquips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_CANCELPREREPLACEDEQUIPS_OFFSET))(this);
		}

		::Class_2_7A8F7ACF0C7369F4* GetEquipmentModifierSource(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a2)
		{
			return ((::Class_2_7A8F7ACF0C7369F4*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO_GETEQUIPMENTMODIFIERSOURCE_OFFSET))(this, a1, a2);
		}
	};
}
