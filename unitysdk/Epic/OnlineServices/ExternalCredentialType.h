#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int ExternalCredentialType_TypeDefinitionIndex = 42748;

	enum class ExternalCredentialType : ::System::Int32
	{
		Epic = 0,
		SteamAppTicket = 1,
		PsnIdToken = 2,
		XblXstsToken = 3,
		DiscordAccessToken = 4,
		GogSessionTicket = 5,
		NintendoIdToken = 6,
		NintendoNsaIdToken = 7,
		UplayAccessToken = 8,
		OpenidAccessToken = 9,
		DeviceidAccessToken = 10,
		AppleIdToken = 11,
		GoogleIdToken = 12,
		OculusUseridNonce = 13,
		ItchioJwt = 14,
		ItchioKey = 15,
		EpicIdToken = 16,
		AmazonAccessToken = 17,
	};
}
