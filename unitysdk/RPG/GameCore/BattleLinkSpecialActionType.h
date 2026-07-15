#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLinkSpecialActionType_TypeDefinitionIndex = 23869;

	enum class BattleLinkSpecialActionType : ::System::Int32
	{
		None = 0,
		ArcherRin = 1,
		SaberGilgamesh = 2,
	};
}
