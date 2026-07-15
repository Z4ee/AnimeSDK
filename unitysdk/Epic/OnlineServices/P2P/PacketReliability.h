#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int PacketReliability_TypeDefinitionIndex = 43409;

	enum class PacketReliability : ::System::Int32
	{
		UnreliableUnordered = 0,
		ReliableUnordered = 1,
		ReliableOrdered = 2,
	};
}
