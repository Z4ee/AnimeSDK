#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcbLoader_LoaderConfig_TypeDefinitionIndex = 37866;

	struct alignas(1) CriAtomExAcbLoader_LoaderConfig
	{
		::System::Boolean shouldLoadAwbOnMemory; // 0x10
	};
}
