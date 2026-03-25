#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExRawPcmVoicePool_RawPcmFormat.h"
#include "unitysdk/CriWare/CriAtomExRawPcmVoicePool_RawPcmVoicePoolConfig.h"
#include "unitysdk/CriWare/CriAtomExVoicePool.h"

#define CRIWARE_CRIATOMEXRAWPCMVOICEPOOL_CRIATOMEXVOICEPOOL_ALLOCATERAWPCMVOICEPOOL_OFFSET UNITYSDK_OFFSET(0x11A233D0)
#define CRIWARE_CRIATOMEXRAWPCMVOICEPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x11A23230)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExRawPcmVoicePool_TypeDefinitionIndex = 31107;

	class CriAtomExRawPcmVoicePool : public ::CriWare::CriAtomExVoicePool
	{
	public:
		::System::Void _ctor(::System::Int32 numVoices, ::System::Int32 maxChannels, ::System::Int32 maxSamplingRate, ::CriWare::CriAtomExRawPcmVoicePool_RawPcmFormat format, ::System::UInt32 identifier)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::CriWare::CriAtomExRawPcmVoicePool_RawPcmFormat, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXRAWPCMVOICEPOOL__CTOR_OFFSET))(this, numVoices, maxChannels, maxSamplingRate, format, identifier);
		}

		static ::System::IntPtr criAtomExVoicePool_AllocateRawPcmVoicePool(::CriWare::CriAtomExRawPcmVoicePool_RawPcmVoicePoolConfig& config, ::System::IntPtr work, ::System::Int32 work_size)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExRawPcmVoicePool_RawPcmVoicePoolConfig&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXRAWPCMVOICEPOOL_CRIATOMEXVOICEPOOL_ALLOCATERAWPCMVOICEPOOL_OFFSET))(config, work, work_size);
		}
	};
}
