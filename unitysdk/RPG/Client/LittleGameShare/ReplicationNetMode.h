#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ReplicationNetMode_TypeDefinitionIndex = 35335;

	enum class ReplicationNetMode : ::System::Byte
	{
		Standalone = 0x0,
		DedicatedServer = 0x1,
		ListenServer = 0x2,
		Client = 0x3,
		Max = 0x4,
	};
}
