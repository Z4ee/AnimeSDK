#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceReplayRecord_MessageType_TypeDefinitionIndex = 74137;

	enum class CakeRaceReplayRecord_MessageType : ::System::Int32
	{
		SyncNotify = 0,
		Response = 1,
	};
}
