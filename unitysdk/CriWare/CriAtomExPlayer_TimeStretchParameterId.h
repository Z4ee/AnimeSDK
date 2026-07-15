#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExPlayer_TimeStretchParameterId_TypeDefinitionIndex = 37903;

	enum class CriAtomExPlayer_TimeStretchParameterId : ::System::Int32
	{
		Ratio = 0,
		FrameTime = 1,
		Quality = 2,
	};
}
