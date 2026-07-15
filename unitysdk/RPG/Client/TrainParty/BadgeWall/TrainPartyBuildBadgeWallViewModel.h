#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::Client::TrainParty::BadgeWall { class TrainPartyBuildBadgeDetailViewModel; }
namespace RPG::Client::TrainParty::BadgeWall { class TrainPartyBuildBadgeSlotViewModel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1A29D210)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_GET_DETAILVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A29D5D0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_GET_SELECTEDSLOTID_OFFSET UNITYSDK_OFFSET(0x1A29D5F0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_GET_SLOTSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A29D5B0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_SET_DETAILVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A29D5E0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_SET_SELECTEDSLOTID_OFFSET UNITYSDK_OFFSET(0x1A29D600)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_SET_SLOTSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A29D5C0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A29D5A0)

namespace RPG::Client::TrainParty::BadgeWall
{
	inline static constexpr unsigned int TrainPartyBuildBadgeWallViewModel_TypeDefinitionIndex = 70981;

	class TrainPartyBuildBadgeWallViewModel : public ::System::Object
	{
	public:
		// static const ::System::UInt32 DEFAULT_SLOT_ID = 0x0; // 0x0
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeSlotViewModel*>* _SlotsViewModel_k__BackingField; // 0x10
		::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeDetailViewModel* _DetailViewModel_k__BackingField; // 0x18
		::System::UInt32 _SelectedSlotId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeWallViewModel* Create(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* a1)
		{
			return ((::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeWallViewModel*(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_CREATE_OFFSET))(a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeSlotViewModel*>* get_SlotsViewModel()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeSlotViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_GET_SLOTSVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_SlotsViewModel(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeSlotViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeSlotViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_SET_SLOTSVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeDetailViewModel* get_DetailViewModel()
		{
			return ((::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeDetailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_GET_DETAILVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_DetailViewModel(::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeDetailViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeDetailViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_SET_DETAILVIEWMODEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_SelectedSlotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_GET_SELECTEDSLOTID_OFFSET))(this);
		}

		::System::Void set_SelectedSlotId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEWALLVIEWMODEL_SET_SELECTEDSLOTID_OFFSET))(this, a1);
		}
	};
}
