#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MusicBattleMarkerNodeType_TypeDefinitionIndex = 80826;

	enum class MusicBattleMarkerNodeType : ::System::Int32
	{
		ColorfulNode = 2,
		RedNode = 0,
		YellowNode = 1,
	};
}
