#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_ResourceUsage_TypeDefinitionIndex = 37822;

	struct alignas(4) CriAtomEx_ResourceUsage
	{
		::System::UInt32 useCount; // 0x10
		::System::UInt32 limit; // 0x14
	};
}
