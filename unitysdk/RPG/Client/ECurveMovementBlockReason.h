#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ECurveMovementBlockReason_TypeDefinitionIndex = 65495;

	enum class ECurveMovementBlockReason : ::System::Int32
	{
		Unknown = 0,
		EndOfPath = 1,
		OtherMovementObject = 2,
		Disconnect = 3,
	};
}
