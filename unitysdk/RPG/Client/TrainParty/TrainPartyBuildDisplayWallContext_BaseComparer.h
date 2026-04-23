#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSlotInfo; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_BASECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0xB33C900)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_BASECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xB33BDB0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildDisplayWallContext_BaseComparer_TypeDefinitionIndex = 68561;

	class TrainPartyBuildDisplayWallContext_BaseComparer : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* _CurrentSlot; // 0x10

		::System::Void _ctor(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* currentSlot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_BASECOMPARER__CTOR_OFFSET))(this, currentSlot);
		}

		::System::Int32 Compare(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* itemA, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* itemB)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_BASECOMPARER_COMPARE_OFFSET))(this, itemA, itemB);
		}
	};
}
