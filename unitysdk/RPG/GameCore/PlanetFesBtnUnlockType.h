#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesBtnUnlockType_TypeDefinitionIndex = 11804;

	enum class PlanetFesBtnUnlockType : ::System::Int32
	{
		None = 0,
		BtnQuestPanel = 1,
		BtnManage = 2,
		BtnGachaEntrance = 3,
		BtnAvatarEntrance = 4,
		BtnAlbumEntrance = 5,
		BtnGachaTabAlbum = 6,
		BtnSkillEntrance = 7,
		LinkAvatar = 8,
		BtnSwitchAvatar = 9,
		BtnAchievementEntrance = 10,
	};
}
