#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_014C66952F2D60FA;
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }
namespace RPG::Client::ActivityIdleLive { class SpSlotUiData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace RPG::GameCore { class IdleLiveSpEquipSlotRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_CLEAREQUIP_OFFSET UNITYSDK_OFFSET(0xC5FD350)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_GETIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xC5FD3A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_GETRELATEDTEAMSLOTID_OFFSET UNITYSDK_OFFSET(0xC5FD400)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_GETSPSLOTUIDATA_OFFSET UNITYSDK_OFFSET(0xC5FD440)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_GET_EQUIP_OFFSET UNITYSDK_OFFSET(0xC5FD200)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_GET_RELATEDTEAMSLOTID_OFFSET UNITYSDK_OFFSET(0xC5FD220)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xC5FD260)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xC5FD1F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_GET_UNLOCKHINT_OFFSET UNITYSDK_OFFSET(0xC5FD1E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_ISSLOTHASAVATAR_OFFSET UNITYSDK_OFFSET(0xC5FD7B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_ISTEAMSLOTRELATED_OFFSET UNITYSDK_OFFSET(0xC5FD2B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC5FD8B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_SET_EQUIP_OFFSET UNITYSDK_OFFSET(0xC5FD210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_TRYGETAVATAREQUIP_OFFSET UNITYSDK_OFFSET(0xC5FD970)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_TRYGETSLOTRELATEDAVATARICON_OFFSET UNITYSDK_OFFSET(0xC5FD5B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_UPDATEEQUIP_OFFSET UNITYSDK_OFFSET(0xC5FD300)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC5FD270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA__ISSLOTHASAVATAR_B__28_0_OFFSET UNITYSDK_OFFSET(0xC5FDBB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA__TRYGETAVATAREQUIP_B__26_0_OFFSET UNITYSDK_OFFSET(0xC5FDB70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA__TRYGETSLOTRELATEDAVATARICON_B__27_0_OFFSET UNITYSDK_OFFSET(0xC5FDB90)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpEquipSlotData_TypeDefinitionIndex = 74936;

	class SpEquipSlotData : public ::System::Object
	{
	public:
		::System::String* _ImagePath; // 0x10
		::RPG::Client::ActivityIdleLive::SpecialEquip* _Equip_k__BackingField; // 0x18
		::System::UInt32 _UnlockId; // 0x20
		::RPG::Client::TextID _UnlockHint_k__BackingField; // 0x28
		::RPG::Client::TextID _Title_k__BackingField; // 0x38
		::System::UInt32 _SlotId_k__BackingField; // 0x48
		::System::UInt32 _RelatedTeamSlotId; // 0x4C

		::System::Void _ctor(::RPG::GameCore::IdleLiveSpEquipSlotRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveSpEquipSlotRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_UnlockHint()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_GET_UNLOCKHINT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::SpecialEquip* get_Equip()
		{
			return ((::RPG::Client::ActivityIdleLive::SpecialEquip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_GET_EQUIP_OFFSET))(this);
		}

		::System::Void set_Equip(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_SET_EQUIP_OFFSET))(this, a1);
		}

		::System::UInt32 get_RelatedTeamSlotID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_GET_RELATEDTEAMSLOTID_OFFSET))(this);
		}

		::System::UInt32 get_SlotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_GET_SLOTID_OFFSET))(this);
		}

		::System::Boolean IsTeamSlotRelated(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_ISTEAMSLOTRELATED_OFFSET))(this, a1);
		}

		::System::Void UpdateEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_UPDATEEQUIP_OFFSET))(this, a1);
		}

		::System::Void ClearEquip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_CLEAREQUIP_OFFSET))(this);
		}

		::System::String* GetImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_GETIMAGEPATH_OFFSET))(this);
		}

		::System::UInt32 GetRelatedTeamSlotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_GETRELATEDTEAMSLOTID_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::SpSlotUiData* GetSpSlotUiData(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::SpSlotUiData*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_GETSPSLOTUIDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_ISUNLOCKED_OFFSET))(this);
		}

		::Class_1_014C66952F2D60FA* TryGetAvatarEquip(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
		{
			return ((::Class_1_014C66952F2D60FA*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_TRYGETAVATAREQUIP_OFFSET))(this, a1);
		}

		::System::String* TryGetSlotRelatedAvatarIcon(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_TRYGETSLOTRELATEDAVATARICON_OFFSET))(this, a1);
		}

		::System::Boolean IsSlotHasAvatar(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA_ISSLOTHASAVATAR_OFFSET))(this, a1);
		}

		::System::Boolean _TryGetAvatarEquip_b__26_0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA__TRYGETAVATAREQUIP_B__26_0_OFFSET))(this, a1);
		}

		::System::Boolean _TryGetSlotRelatedAvatarIcon_b__27_0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA__TRYGETSLOTRELATEDAVATARICON_B__27_0_OFFSET))(this, a1);
		}

		::System::Boolean _IsSlotHasAvatar_b__28_0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTDATA__ISSLOTHASAVATAR_B__28_0_OFFSET))(this, a1);
		}
	};
}
