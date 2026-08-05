#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelZeroGetRoomIndexNode_RoomFormat_TypeDefinitionIndex = 84733;

	enum class LDLevelZeroGetRoomIndexNode_RoomFormat : ::System::Int32
	{
		ROOM_CURRENT = 1,
		ROOM_CURRENT_TOTAL = 0,
		ROOM_TOTAL = 2,
	};
}
