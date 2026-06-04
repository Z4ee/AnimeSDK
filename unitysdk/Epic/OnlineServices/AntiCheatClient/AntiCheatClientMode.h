#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int AntiCheatClientMode_TypeDefinitionIndex = 43328;

	enum class AntiCheatClientMode : ::System::Int32
	{
		Invalid = 0,
		ClientServer = 1,
		PeerToPeer = 2,
	};
}
