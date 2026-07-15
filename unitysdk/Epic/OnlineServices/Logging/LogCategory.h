#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Logging
{
	inline static constexpr unsigned int LogCategory_TypeDefinitionIndex = 43468;

	enum class LogCategory : ::System::Int32
	{
		Core = 0,
		Auth = 1,
		Friends = 2,
		Presence = 3,
		UserInfo = 4,
		HttpSerialization = 5,
		Ecom = 6,
		P2P = 7,
		Sessions = 8,
		RateLimiter = 9,
		PlayerDataStorage = 10,
		Analytics = 11,
		Messaging = 12,
		Connect = 13,
		Overlay = 14,
		Achievements = 15,
		Stats = 16,
		Ui = 17,
		Lobby = 18,
		Leaderboards = 19,
		Keychain = 20,
		IntegratedPlatform = 21,
		TitleStorage = 22,
		Mods = 23,
		AntiCheat = 24,
		Reports = 25,
		Sanctions = 26,
		ProgressionSnapshots = 27,
		Kws = 28,
		Rtc = 29,
		RTCAdmin = 30,
		CustomInvites = 31,
		AllCategories = 2147483647,
	};
}
