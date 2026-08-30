#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_SoundRendererType.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXAUXIN_CONFIG_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1CB96890)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAuxIn_Config_TypeDefinitionIndex = 38743;

	struct alignas(4) CriAtomExAuxIn_Config
	{
		::System::Int32 maxChannels; // 0x10
		::System::Int32 maxSamplingRate; // 0x14
		::CriWare::CriAtomEx_SoundRendererType soundRendererType; // 0x18

		static ::CriWare::CriAtomExAuxIn_Config get_Default()
		{
			return ((::CriWare::CriAtomExAuxIn_Config(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CONFIG_GET_DEFAULT_OFFSET))();
		}
	};
}
