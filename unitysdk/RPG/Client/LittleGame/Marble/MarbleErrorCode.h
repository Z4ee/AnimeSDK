#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Marble
{
	inline static constexpr unsigned int MarbleErrorCode_TypeDefinitionIndex = 38921;

	enum class MarbleErrorCode : ::System::Int32
	{
		RoomNotExist = 1,
		MessageInvalid = 2,
	};
}
