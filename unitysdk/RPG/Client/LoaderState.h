#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LoaderState_TypeDefinitionIndex = 39215;

	enum class LoaderState : ::System::Int32
	{
		None = 0,
		WillLoad = 1,
		WillUnload = 2,
		InUse = 3,
	};
}
