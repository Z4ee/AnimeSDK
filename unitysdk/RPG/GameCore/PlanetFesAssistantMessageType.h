#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAssistantMessageType_TypeDefinitionIndex = 11801;

	enum class PlanetFesAssistantMessageType : ::System::Int32
	{
		LargeBonusAppear = 1,
		LittleOrMiddleBonusAppear = 2,
		PlanetFesLandAvailableForPurchase = 3,
		CanPlanetFesLevelUp = 4,
		CanPlanetFesSkillLevelUp = 5,
		PlanetFesEventProgressLeft = 6,
		PlanetFesBusinessDayFinished = 7,
		GetMissionReward = 8,
		TakenMission = 9,
		PamCargo = 10,
		AvatarEvent = 11,
		CanGacha = 12,
		CanCollectCoin = 13,
		CanAvatarLevelUp = 14,
		ReachPlanetFesLevel = 15,
	};
}
