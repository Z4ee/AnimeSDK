#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfState_TypeDefinitionIndex = 62654;

	enum class SilverWolfState : ::System::Int32
	{
		SilverWolfStateLock = 0,
		SilverWolfStatePremission = 1,
		SilverWolfStateUnlock = 2,
	};
}
