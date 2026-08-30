#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYBadgeItem; }

#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xE241030)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_GET_BADGE_OFFSET UNITYSDK_OFFSET(0xE2410F0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xE2410D0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_SET_BADGE_OFFSET UNITYSDK_OFFSET(0xE241100)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xE2410E0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xE2410C0)

namespace RPG::Client::TrainParty::BadgeWall
{
	inline static constexpr unsigned int TrainPartyBuildBadgeSlotViewModel_TypeDefinitionIndex = 74280;

	class TrainPartyBuildBadgeSlotViewModel : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* _Badge_k__BackingField; // 0x10
		::System::UInt32 _SlotID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeSlotViewModel* Create(::System::UInt32 a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* a2)
		{
			return ((::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeSlotViewModel*(*)(::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::UInt32 get_SlotID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_GET_SLOTID_OFFSET))(this);
		}

		::System::Void set_SlotID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_SET_SLOTID_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* get_Badge()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_GET_BADGE_OFFSET))(this);
		}

		::System::Void set_Badge(::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_SET_BADGE_OFFSET))(this, a1);
		}
	};
}
