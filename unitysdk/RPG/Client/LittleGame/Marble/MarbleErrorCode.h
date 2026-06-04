#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Marble
{
	inline static constexpr unsigned int MarbleErrorCode_TypeDefinitionIndex = 39689;

	enum class MarbleErrorCode : ::System::Int32
	{
		RoomNotExist = 1,
		MessageInvalid = 2,
	};
}
