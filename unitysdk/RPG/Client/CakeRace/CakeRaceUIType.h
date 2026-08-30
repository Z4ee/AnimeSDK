#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceUIType_TypeDefinitionIndex = 75976;

	enum class CakeRaceUIType : ::System::Int32
	{
		None = 0,
		Entrance = 1,
		FieldSelect = 2,
		FieldInfo = 3,
		FriendRank = 4,
		Match = 5,
		InviteFriend = 6,
		InviteToast = 7,
		GuessTicketShop = 8,
		CatHandbook = 9,
		ResidentReward = 10,
		Loading = 11,
		GameplayHUD = 12,
		GameplayShowCats = 13,
		GameplayShowSection = 14,
		GameplayGuess = 15,
		GameplayGuessResult = 16,
		GameplayEffect = 17,
		GameplayChampion = 18,
		GameplayRank = 19,
		GameplayTitle = 20,
		GameplayCredits = 21,
	};
}
