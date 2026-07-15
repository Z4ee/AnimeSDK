#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_Console_Privilege_TypeDefinitionIndex = 44417;

	enum class MHYSDKC_Console_Privilege : ::System::Int32
	{
		CrossPlay = 185,
		Clubs = 188,
		Sessions = 189,
		Broadcast = 190,
		ManageProfilePrivacy = 196,
		GameDvr = 198,
		MultiplayerParties = 203,
		CloudManageSession = 207,
		CloudJoinSession = 208,
		CloudSavedGames = 209,
		SocialNetworkSharing = 220,
		UserGeneratedContent = 247,
		Communications = 252,
		Multiplayer = 254,
		AddFriends = 255,
		CommunicationRestrictionStatus = 500,
		PlayStationPlus = 501,
	};
}
