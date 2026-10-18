#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BadgePlayType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_BADGECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0xE2D4B00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_BADGECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xE2D4D50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_BADGECOMPARER__GETPLAYTYPEORDER_OFFSET UNITYSDK_OFFSET(0xE2D4CF0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildDisplayWallContext_BadgeComparer_TypeDefinitionIndex = 74295;

	class TrainPartyBuildDisplayWallContext_BadgeComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_BADGECOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_BADGECOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 _GetPlayTypeOrder(::RPG::GameCore::BadgePlayType a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::BadgePlayType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_BADGECOMPARER__GETPLAYTYPEORDER_OFFSET))(a1);
		}
	};
}
