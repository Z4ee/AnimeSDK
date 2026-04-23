#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_LIGHTCONEPHOTOCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0xB33CD10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_LIGHTCONEPHOTOCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xB33CE00)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildDisplayWallContext_LightConePhotoComparer_TypeDefinitionIndex = 68565;

	class TrainPartyBuildDisplayWallContext_LightConePhotoComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_LIGHTCONEPHOTOCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* itemA, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* itemB)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_LIGHTCONEPHOTOCOMPARER_COMPARE_OFFSET))(this, itemA, itemB);
		}
	};
}
