#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_NORMALITEMCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0xB33CED0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_NORMALITEMCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xB33CFE0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildDisplayWallContext_NormalItemComparer_TypeDefinitionIndex = 68562;

	class TrainPartyBuildDisplayWallContext_NormalItemComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_NORMALITEMCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* itemA, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* itemB)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_NORMALITEMCOMPARER_COMPARE_OFFSET))(this, itemA, itemB);
		}
	};
}
