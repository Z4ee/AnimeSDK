#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_ResumeMode_TypeDefinitionIndex = 37797;

	enum class CriAtomEx_ResumeMode : ::System::Int32
	{
		AllPlayback = 0,
		PausedPlayback = 1,
		PreparedPlayback = 2,
	};
}
