#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0xB33C3D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xB33C810)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER__GETID_OFFSET UNITYSDK_OFFSET(0xB33C760)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER__GETRARITY_OFFSET UNITYSDK_OFFSET(0xB33C6B0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildDisplayWallContext_AvatarPhotoComparer_TypeDefinitionIndex = 68564;

	class TrainPartyBuildDisplayWallContext_AvatarPhotoComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* itemA, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* itemB)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER_COMPARE_OFFSET))(this, itemA, itemB);
		}

		::System::UInt32 _GetRarity(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* item)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER__GETRARITY_OFFSET))(this, item);
		}

		::System::UInt32 _GetID(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* item)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER__GETID_OFFSET))(this, item);
		}
	};
}
