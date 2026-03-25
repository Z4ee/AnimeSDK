#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEX_SPEAKERANGLES8CH_DEFAULT_OFFSET UNITYSDK_OFFSET(0x119FDA80)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_SpeakerAngles8ch_TypeDefinitionIndex = 30990;

	struct alignas(4) CriAtomEx_SpeakerAngles8ch
	{
		::System::Single frontLeft; // 0x10
		::System::Single frontRight; // 0x14
		::System::Single frontCenter; // 0x18
		::System::Single lowFrequency; // 0x1C
		::System::Single surroundLeft; // 0x20
		::System::Single surroundRight; // 0x24
		::System::Single surroundBackLeft; // 0x28
		::System::Single surroundBackRight; // 0x2C

		static ::CriWare::CriAtomEx_SpeakerAngles8ch Default()
		{
			return ((::CriWare::CriAtomEx_SpeakerAngles8ch(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SPEAKERANGLES8CH_DEFAULT_OFFSET))();
		}
	};
}
