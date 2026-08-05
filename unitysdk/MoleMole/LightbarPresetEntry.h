#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_LIGHTBARPRESETENTRY_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x19BF71C0)

namespace MoleMole
{
	inline static constexpr unsigned int LightbarPresetEntry_TypeDefinitionIndex = 47139;

	struct alignas(4) LightbarPresetEntry
	{
		::System::Single breathPeriod; // 0x10
		::System::Single breathVMin; // 0x14
		::System::Single breathVMax; // 0x18
		::System::Single hueSpread; // 0x1C
		::System::Single hueCyclePeriod; // 0x20
		::System::Single fadeDuration; // 0x24

		static ::MoleMole::LightbarPresetEntry get_Default()
		{
			return ((::MoleMole::LightbarPresetEntry(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTBARPRESETENTRY_GET_DEFAULT_OFFSET))();
		}
	};
}
