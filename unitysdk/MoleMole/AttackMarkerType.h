#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AttackMarkerType_TypeDefinitionIndex = 73879;

	enum class AttackMarkerType : ::System::Int32
	{
		MusicBattleHintMarker = 2,
		SendEventToFCMarker = 1,
		SendAbilityCustomEventMarker = 0,
		MusicBattleBonusTimeMarker = 3,
	};
}
