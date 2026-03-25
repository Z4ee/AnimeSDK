#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExVoicePool.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_VoicePoolConfig.h"

#define CRIWARE_CRIATOMEXSTANDARDVOICEPOOL_CRIATOMEXVOICEPOOL_ALLOCATESTANDARDVOICEPOOL_OFFSET UNITYSDK_OFFSET(0x11A243E0)
#define CRIWARE_CRIATOMEXSTANDARDVOICEPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x11A24260)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExStandardVoicePool_TypeDefinitionIndex = 31105;

	class CriAtomExStandardVoicePool : public ::CriWare::CriAtomExVoicePool
	{
	public:
		::System::Void _ctor(::System::Int32 numVoices, ::System::Int32 maxChannels, ::System::Int32 maxSamplingRate, ::System::Boolean streamingFlag, ::System::UInt32 identifier)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSTANDARDVOICEPOOL__CTOR_OFFSET))(this, numVoices, maxChannels, maxSamplingRate, streamingFlag, identifier);
		}

		static ::System::IntPtr criAtomExVoicePool_AllocateStandardVoicePool(::CriWare::CriAtomExVoicePool_VoicePoolConfig& config, ::System::IntPtr work, ::System::Int32 work_size)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExVoicePool_VoicePoolConfig&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSTANDARDVOICEPOOL_CRIATOMEXVOICEPOOL_ALLOCATESTANDARDVOICEPOOL_OFFSET))(config, work, work_size);
		}
	};
}
