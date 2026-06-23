#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AttackMarkerType_TypeDefinitionIndex = 80692;

	enum class AttackMarkerType : ::System::Int32
	{
		SendEventToFCMarker = 1,
		MusicBattleBonusTimeMarker = 3,
		MusicBattleHintMarker = 2,
		SendAbilityCustomEventMarker = 0,
	};
}
