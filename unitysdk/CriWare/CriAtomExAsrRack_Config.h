#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_SoundRendererType.h"
#include "unitysdk/CriWare/CriAtom_SpeakerMapping.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXASRRACK_CONFIG_DEFAULT_OFFSET UNITYSDK_OFFSET(0x164C0FA0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAsrRack_Config_TypeDefinitionIndex = 38620;

	struct alignas(8) CriAtomExAsrRack_Config
	{
		::System::Single serverFrequency; // 0x10
		::System::Int32 numBuses; // 0x14
		::System::Int32 outputChannels; // 0x18
		::CriWare::CriAtom_SpeakerMapping speakerMapping; // 0x1C
		::System::Int32 outputSamplingRate; // 0x20
		::CriWare::CriAtomEx_SoundRendererType soundRendererType; // 0x24
		::System::Int32 outputRackId; // 0x28
		::System::IntPtr context; // 0x30

		static ::CriWare::CriAtomExAsrRack_Config Default()
		{
			return ((::CriWare::CriAtomExAsrRack_Config(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CONFIG_DEFAULT_OFFSET))();
		}
	};
}
