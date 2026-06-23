#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MusicBattleMarkerNodeType_TypeDefinitionIndex = 82093;

	enum class MusicBattleMarkerNodeType : ::System::Int32
	{
		RedNode = 0,
		YellowNode = 1,
		ColorfulNode = 2,
	};
}
