#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniUIGame::SimpleParkour
{
	inline static constexpr unsigned int ENodeType_TypeDefinitionIndex = 80957;

	enum class ENodeType : ::System::Int32
	{
		Tap = 0,
		HoldPress = 4,
		Dodge = 1,
		HoldSegment = 6,
		Hold = 2,
		Touch = 3,
		HoldRelease = 5,
	};
}
