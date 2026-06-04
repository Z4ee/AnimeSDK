#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExVoicePool.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_VoicePoolConfig.h"

#define CRIWARE_CRIATOMEXWAVEVOICEPOOL_CRIATOMEXVOICEPOOL_ALLOCATEWAVEVOICEPOOL_OFFSET UNITYSDK_OFFSET(0x146B09D0)
#define CRIWARE_CRIATOMEXWAVEVOICEPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x146B0850)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExWaveVoicePool_TypeDefinitionIndex = 37126;

	class CriAtomExWaveVoicePool : public ::CriWare::CriAtomExVoicePool
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXWAVEVOICEPOOL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::IntPtr criAtomExVoicePool_AllocateWaveVoicePool(::CriWare::CriAtomExVoicePool_VoicePoolConfig& a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExVoicePool_VoicePoolConfig&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXWAVEVOICEPOOL_CRIATOMEXVOICEPOOL_ALLOCATEWAVEVOICEPOOL_OFFSET))(a1, a2, a3);
		}
	};
}
