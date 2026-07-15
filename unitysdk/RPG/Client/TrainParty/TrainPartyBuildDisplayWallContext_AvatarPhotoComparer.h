#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1A2A99E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2A9E40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER__GETID_OFFSET UNITYSDK_OFFSET(0x1A2A9D90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER__GETRARITY_OFFSET UNITYSDK_OFFSET(0x1A2A9CE0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildDisplayWallContext_AvatarPhotoComparer_TypeDefinitionIndex = 70897;

	class TrainPartyBuildDisplayWallContext_AvatarPhotoComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetRarity(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER__GETRARITY_OFFSET))(this, a1);
		}

		::System::UInt32 _GetID(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER__GETID_OFFSET))(this, a1);
		}
	};
}
