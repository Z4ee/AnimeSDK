#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageStateType_TypeDefinitionIndex = 13870;

	enum class MessageStateType : ::System::Int32
	{
		Unknown = 0,
		Normal = 1,
		WaitingReply = 2,
		Finished = 3,
		HasMission = 4,
	};
}
