#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEX_CUBOIDEXTENT_DEFAULT_OFFSET UNITYSDK_OFFSET(0x164AA8B0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_CuboidExtent_TypeDefinitionIndex = 38672;

	struct alignas(4) CriAtomEx_CuboidExtent
	{
		::System::Single width; // 0x10
		::System::Single height; // 0x14
		::System::Single depth; // 0x18

		static ::CriWare::CriAtomEx_CuboidExtent Default()
		{
			return ((::CriWare::CriAtomEx_CuboidExtent(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CUBOIDEXTENT_DEFAULT_OFFSET))();
		}
	};
}
