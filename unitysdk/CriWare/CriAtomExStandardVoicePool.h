#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExVoicePool.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_VoicePoolConfig.h"

#define CRIWARE_CRIATOMEXSTANDARDVOICEPOOL_CRIATOMEXVOICEPOOL_ALLOCATESTANDARDVOICEPOOL_OFFSET UNITYSDK_OFFSET(0x146AF420)
#define CRIWARE_CRIATOMEXSTANDARDVOICEPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x146AF2A0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExStandardVoicePool_TypeDefinitionIndex = 37125;

	class CriAtomExStandardVoicePool : public ::CriWare::CriAtomExVoicePool
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSTANDARDVOICEPOOL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::IntPtr criAtomExVoicePool_AllocateStandardVoicePool(::CriWare::CriAtomExVoicePool_VoicePoolConfig& a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExVoicePool_VoicePoolConfig&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSTANDARDVOICEPOOL_CRIATOMEXVOICEPOOL_ALLOCATESTANDARDVOICEPOOL_OFFSET))(a1, a2, a3);
		}
	};
}
