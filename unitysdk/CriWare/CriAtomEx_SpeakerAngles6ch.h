#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEX_SPEAKERANGLES6CH_DEFAULT_OFFSET UNITYSDK_OFFSET(0x14689520)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_SpeakerAngles6ch_TypeDefinitionIndex = 37009;

	struct alignas(4) CriAtomEx_SpeakerAngles6ch
	{
		::System::Single frontLeft; // 0x10
		::System::Single frontRight; // 0x14
		::System::Single frontCenter; // 0x18
		::System::Single lowFrequency; // 0x1C
		::System::Single surroundLeft; // 0x20
		::System::Single surroundRight; // 0x24

		static ::CriWare::CriAtomEx_SpeakerAngles6ch Default()
		{
			return ((::CriWare::CriAtomEx_SpeakerAngles6ch(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SPEAKERANGLES6CH_DEFAULT_OFFSET))();
		}
	};
}
