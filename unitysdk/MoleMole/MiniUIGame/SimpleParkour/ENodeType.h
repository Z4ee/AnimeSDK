#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniUIGame::SimpleParkour
{
	inline static constexpr unsigned int ENodeType_TypeDefinitionIndex = 48278;

	enum class ENodeType : ::System::Int32
	{
		Touch = 3,
		HoldRelease = 5,
		HoldPress = 4,
		Hold = 2,
		Dodge = 1,
		HoldSegment = 6,
		Tap = 0,
	};
}
