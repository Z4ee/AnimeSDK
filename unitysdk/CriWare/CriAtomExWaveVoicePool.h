#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExVoicePool.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_VoicePoolConfig.h"

#define CRIWARE_CRIATOMEXWAVEVOICEPOOL_CRIATOMEXVOICEPOOL_ALLOCATEWAVEVOICEPOOL_OFFSET UNITYSDK_OFFSET(0x11A25940)
#define CRIWARE_CRIATOMEXWAVEVOICEPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x11A257C0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExWaveVoicePool_TypeDefinitionIndex = 31106;

	class CriAtomExWaveVoicePool : public ::CriWare::CriAtomExVoicePool
	{
	public:
		::System::Void _ctor(::System::Int32 numVoices, ::System::Int32 maxChannels, ::System::Int32 maxSamplingRate, ::System::Boolean streamingFlag, ::System::UInt32 identifier)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXWAVEVOICEPOOL__CTOR_OFFSET))(this, numVoices, maxChannels, maxSamplingRate, streamingFlag, identifier);
		}

		static ::System::IntPtr criAtomExVoicePool_AllocateWaveVoicePool(::CriWare::CriAtomExVoicePool_VoicePoolConfig& config, ::System::IntPtr work, ::System::Int32 work_size)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExVoicePool_VoicePoolConfig&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXWAVEVOICEPOOL_CRIATOMEXVOICEPOOL_ALLOCATEWAVEVOICEPOOL_OFFSET))(config, work, work_size);
		}
	};
}
