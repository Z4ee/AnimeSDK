#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExSoundObject_Config_TypeDefinitionIndex = 37909;

	struct alignas(1) CriAtomExSoundObject_Config
	{
		::System::Boolean enableVoiceLimitScope; // 0x10
		::System::Boolean enableCategoryCueLimitScope; // 0x11
	};
}
