#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingEffectRemoveReason_TypeDefinitionIndex = 73892;

	enum class ChenLingEffectRemoveReason : ::System::Int32
	{
		Unknown = 0,
		ManualRelease = 1,
		AutoLifetimeFinish = 2,
		OwnerEntityMissing = 3,
		AsyncRequestInvalid = 4,
		ServiceDisposed = 5,
		DisposeCleanup = 6,
	};
}
