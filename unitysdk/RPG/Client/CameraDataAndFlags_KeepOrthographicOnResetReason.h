#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags_KeepOrthographicOnResetReason_TypeDefinitionIndex = 65022;

	enum class CameraDataAndFlags_KeepOrthographicOnResetReason : ::System::Int32
	{
		None = 0,
		Task = 1,
	};
}
