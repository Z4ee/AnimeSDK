#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AttackMarkerType_TypeDefinitionIndex = 57560;

	enum class AttackMarkerType : ::System::Int32
	{
		SendAbilityCustomEventMarker = 0,
		SendEventToFCMarker = 1,
		MusicBattleBonusTimeMarker = 3,
		MusicBattleHintMarker = 2,
	};
}
