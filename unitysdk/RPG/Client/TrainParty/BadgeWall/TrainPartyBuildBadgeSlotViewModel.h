#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYBadgeItem; }

#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xB331700)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_GETBADGE_OFFSET UNITYSDK_OFFSET(0xB331790)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xB3318E0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xB3318C0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xB331900)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xB3318D0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB331780)

namespace RPG::Client::TrainParty::BadgeWall
{
	inline static constexpr unsigned int TrainPartyBuildBadgeSlotViewModel_TypeDefinitionIndex = 68647;

	class TrainPartyBuildBadgeSlotViewModel : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x10
		::System::UInt32 _SlotID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeSlotViewModel* Create(::System::UInt32 slotID)
		{
			return ((::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeSlotViewModel*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_CREATE_OFFSET))(slotID);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* GetBadge()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_GETBADGE_OFFSET))(this);
		}

		::System::UInt32 get_SlotID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_GET_SLOTID_OFFSET))(this);
		}

		::System::Void set_SlotID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_SET_SLOTID_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGESLOTVIEWMODEL_SET_POSITION_OFFSET))(this, value);
		}
	};
}
