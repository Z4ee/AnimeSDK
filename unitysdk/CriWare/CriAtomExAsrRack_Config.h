#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAsrRack_SpeakerMapping.h"
#include "unitysdk/CriWare/CriAtomEx_SoundRendererType.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAsrRack_Config_TypeDefinitionIndex = 37085;

	struct alignas(8) CriAtomExAsrRack_Config
	{
		::System::Single serverFrequency; // 0x10
		::System::Int32 numBuses; // 0x14
		::System::Int32 outputChannels; // 0x18
		::CriWare::CriAtomExAsrRack_SpeakerMapping speakerMapping; // 0x1C
		::System::Int32 outputSamplingRate; // 0x20
		::CriWare::CriAtomEx_SoundRendererType soundRendererType; // 0x24
		::System::Int32 outputRackId; // 0x28
		::System::IntPtr context; // 0x30
	};
}
