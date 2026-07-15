#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExPlayback_Status_TypeDefinitionIndex = 37898;

	enum class CriAtomExPlayback_Status : ::System::Int32
	{
		Prep = 1,
		Playing = 2,
		Removed = 3,
	};
}
