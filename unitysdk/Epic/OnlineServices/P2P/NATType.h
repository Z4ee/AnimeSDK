#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int NATType_TypeDefinitionIndex = 43385;

	enum class NATType : ::System::Int32
	{
		Unknown = 0,
		Open = 1,
		Moderate = 2,
		Strict = 3,
	};
}
