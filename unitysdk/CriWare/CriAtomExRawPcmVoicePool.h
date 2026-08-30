#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExRawPcmVoicePool_RawPcmFormat.h"
#include "unitysdk/CriWare/CriAtomExRawPcmVoicePool_RawPcmVoicePoolConfig.h"
#include "unitysdk/CriWare/CriAtomExVoicePool.h"

#define CRIWARE_CRIATOMEXRAWPCMVOICEPOOL_CRIATOMEXVOICEPOOL_ALLOCATERAWPCMVOICEPOOL_OFFSET UNITYSDK_OFFSET(0x1D3743A0)
#define CRIWARE_CRIATOMEXRAWPCMVOICEPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D374200)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExRawPcmVoicePool_TypeDefinitionIndex = 38786;

	class CriAtomExRawPcmVoicePool : public ::CriWare::CriAtomExVoicePool
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::CriWare::CriAtomExRawPcmVoicePool_RawPcmFormat a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::CriWare::CriAtomExRawPcmVoicePool_RawPcmFormat, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXRAWPCMVOICEPOOL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::IntPtr criAtomExVoicePool_AllocateRawPcmVoicePool(::CriWare::CriAtomExRawPcmVoicePool_RawPcmVoicePoolConfig& a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExRawPcmVoicePool_RawPcmVoicePoolConfig&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXRAWPCMVOICEPOOL_CRIATOMEXVOICEPOOL_ALLOCATERAWPCMVOICEPOOL_OFFSET))(a1, a2, a3);
		}
	};
}
