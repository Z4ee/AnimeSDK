#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSlotInfo; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5F44B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__DISPLAYCLASS32_0__FETCHDIYITEMSBYSLOTINFO_B__0_OFFSET UNITYSDK_OFFSET(0xA5F4CD0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildManager___c__DisplayClass32_0_TypeDefinitionIndex = 61094;

	class TrainPartyBuildManager___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* targetSlot; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _FetchDiyItemsBySlotInfo_b__0(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* itemA, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* itemB)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__DISPLAYCLASS32_0__FETCHDIYITEMSBYSLOTINFO_B__0_OFFSET))(this, itemA, itemB);
		}
	};
}
