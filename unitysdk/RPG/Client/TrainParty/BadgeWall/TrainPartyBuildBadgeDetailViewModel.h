#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYBadgeItem; }
namespace System { class String; }

#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEDETAILVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xB3312D0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEDETAILVIEWMODEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB3316C0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEDETAILVIEWMODEL_GET_TIP_OFFSET UNITYSDK_OFFSET(0xB3316E0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEDETAILVIEWMODEL_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB3316D0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEDETAILVIEWMODEL_SET_TIP_OFFSET UNITYSDK_OFFSET(0xB3316F0)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEDETAILVIEWMODEL_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0xB331350)
#define RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEDETAILVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB331340)

namespace RPG::Client::TrainParty::BadgeWall
{
	inline static constexpr unsigned int TrainPartyBuildBadgeDetailViewModel_TypeDefinitionIndex = 68646;

	class TrainPartyBuildBadgeDetailViewModel : public ::System::Object
	{
	public:
		::System::String* _Desc_k__BackingField; // 0x10
		::System::String* _Tip_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEDETAILVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeDetailViewModel* Create()
		{
			return ((::RPG::Client::TrainParty::BadgeWall::TrainPartyBuildBadgeDetailViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEDETAILVIEWMODEL_CREATE_OFFSET))();
		}

		::System::Void UpdateData(::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* badgeItem)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEDETAILVIEWMODEL_UPDATEDATA_OFFSET))(this, badgeItem);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEDETAILVIEWMODEL_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEDETAILVIEWMODEL_SET_DESC_OFFSET))(this, value);
		}

		::System::String* get_Tip()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEDETAILVIEWMODEL_GET_TIP_OFFSET))(this);
		}

		::System::Void set_Tip(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_BADGEWALL_TRAINPARTYBUILDBADGEDETAILVIEWMODEL_SET_TIP_OFFSET))(this, value);
		}
	};
}
