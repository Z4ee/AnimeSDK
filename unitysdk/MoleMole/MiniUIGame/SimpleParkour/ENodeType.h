#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniUIGame::SimpleParkour
{
	inline static constexpr unsigned int ENodeType_TypeDefinitionIndex = 44172;

	enum class ENodeType : ::System::Int32
	{
		Touch = 3,
		Tap = 0,
		Dodge = 1,
		HoldPress = 4,
		HoldSegment = 6,
		HoldRelease = 5,
		Hold = 2,
	};
}
