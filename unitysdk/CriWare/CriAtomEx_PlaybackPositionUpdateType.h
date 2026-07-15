#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_PlaybackPositionUpdateType_TypeDefinitionIndex = 37804;

	enum class CriAtomEx_PlaybackPositionUpdateType : ::System::Int32
	{
		Default = -1,
		Follow = 0,
		Fixed = 1,
	};
}
