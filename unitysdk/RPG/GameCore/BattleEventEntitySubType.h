#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventEntitySubType_TypeDefinitionIndex = 10088;

	enum class BattleEventEntitySubType : ::System::Int32
	{
		Unknown = 0,
		TurnCountDownEvent = 1,
		ChallengerEvent = 2,
		AssistEvent = 3,
		EnterStage = 4,
		TurnPrompt = 5,
		AbyssTurnCountDownEvent = 6,
		TurnCountDownWarningEvent = 7,
		EvolveBuildCoundDownWarningEvent = 8,
		RogueMagicCoundDownWarningEvent = 9,
		Item = 10,
		ChangeAvatar = 11,
		DummyCharacter = 12,
		RogueTournTitanDayNightEvent = 13,
		SelectAvatar = 14,
		BattleVersusBarWarningEvent = 15,
		Prayer = 16,
		ElationGiftBoxEvent = 17,
		Elation = 18,
		GridFightCountDownWarningEvent = 19,
		GridFightTraitAssistEvent = 20,
		BEServant = 21,
	};
}
