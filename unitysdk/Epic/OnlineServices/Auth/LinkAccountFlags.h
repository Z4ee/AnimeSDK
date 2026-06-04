#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int LinkAccountFlags_TypeDefinitionIndex = 43176;

	enum class LinkAccountFlags : ::System::Int32
	{
		NoFlags = 0,
		NintendoNsaId = 1,
	};
}
