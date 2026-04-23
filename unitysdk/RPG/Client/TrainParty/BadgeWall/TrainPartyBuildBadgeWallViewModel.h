#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty::BadgeWall { class TrainPartyBuildBadgeDetailViewModel; }
namespace RPG::Client::TrainParty::BadgeWall { class TrainPartyBuildBadgeSlotViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xB331910)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_GET_DETAILVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB331BE0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_GET_SELECTEDSLOTID_OFFSET UNITYSDK_OFFSET(0xB331C00)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_GET_SLOTSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB331BC0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_SET_DETAILVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB331BF0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_SET_SELECTEDSLOTID_OFFSET UNITYSDK_OFFSET(0xB331C10)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_SET_SLOTSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB331BD0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB331BB0)

namespace RPG::Client::TrainParty::BadgeWall
{
	inline static constexpr unsigned int TrainPartyBuildBadgeWallViewModel_TypeDefinitionIndex = 68648;

	class TrainPartyBuildBadgeWallViewModel : public ::System::Object
	{
	public:
		// static const ::System::UInt32 DEFAULT_SLOT_ID = 0x0; // 0x0
		::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeDetailViewModel* _DetailViewModel_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeSlotViewModel*>* _SlotsViewModel_k__BackingField; // 0x18
		::System::UInt32 _SelectedSlotId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeWallViewModel* Create()
		{
			return ((::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeWallViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_CREATE_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeSlotViewModel*>* get_SlotsViewModel()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeSlotViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_GET_SLOTSVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_SlotsViewModel(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeSlotViewModel*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeSlotViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_SET_SLOTSVIEWMODEL_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeDetailViewModel* get_DetailViewModel()
		{
			return ((::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeDetailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_GET_DETAILVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_DetailViewModel(::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeDetailViewModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeDetailViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_SET_DETAILVIEWMODEL_OFFSET))(this, value);
		}

		::System::UInt32 get_SelectedSlotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_GET_SELECTEDSLOTID_OFFSET))(this);
		}

		::System::Void set_SelectedSlotId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_SET_SELECTEDSLOTID_OFFSET))(this, value);
		}
	};
}
