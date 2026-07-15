#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAnimTypeEnum_TypeDefinitionIndex = 15610;

	enum class PlanetFesAnimTypeEnum : ::System::Int32
	{
		Unkown = 0,
		OnIdle = 1,
		OnLevelUp = 2,
		OnStarUp = 3,
		OnGotDeliver = 4,
		OnAvatarEvent = 5,
		OnStartWork = 6,
		OnGenBuff = 7,
		OnSingleClick = 8,
		OnMultiClick = 9,
		OnEnterManage = 10,
		OnNewAvatar = 10,
	};
}
