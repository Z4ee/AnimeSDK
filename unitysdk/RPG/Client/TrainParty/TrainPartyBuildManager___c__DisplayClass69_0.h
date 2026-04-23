#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSlotInfo; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__DISPLAYCLASS69_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB347580)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__DISPLAYCLASS69_0__GETBUILDDIYITEMSBYSLOT_B__0_OFFSET UNITYSDK_OFFSET(0xB348480)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildManager___c__DisplayClass69_0_TypeDefinitionIndex = 68572;

	class TrainPartyBuildManager___c__DisplayClass69_0 : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* targetSlot; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__DISPLAYCLASS69_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetBuildDiyItemsBySlot_b__0(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* itemA, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* itemB)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__DISPLAYCLASS69_0__GETBUILDDIYITEMSBYSLOT_B__0_OFFSET))(this, itemA, itemB);
		}
	};
}
