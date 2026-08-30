#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExVoicePool.h"
#include "unitysdk/CriWare/CriAtomExWaveVoicePool_Config.h"

#define CRIWARE_CRIATOMEXWAVEVOICEPOOL_CRIATOMEXVOICEPOOL_ALLOCATEWAVEVOICEPOOL_OFFSET UNITYSDK_OFFSET(0x1D3768A0)
#define CRIWARE_CRIATOMEXWAVEVOICEPOOL_CRIWAREEDDDA553_OFFSET UNITYSDK_OFFSET(0x1D376710)
#define CRIWARE_CRIATOMEXWAVEVOICEPOOL_SETDEFAULTCONFIGFORWAVEVOICEPOOL_OFFSET UNITYSDK_OFFSET(0x1D376700)
#define CRIWARE_CRIATOMEXWAVEVOICEPOOL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D3769C0)
#define CRIWARE_CRIATOMEXWAVEVOICEPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D376820)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExWaveVoicePool_TypeDefinitionIndex = 38784;

	class CriAtomExWaveVoicePool : public ::CriWare::CriAtomExVoicePool
	{
	public:
		::System::Void _ctor(::CriWare::CriAtomExWaveVoicePool_Config a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExWaveVoicePool_Config))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXWAVEVOICEPOOL__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXWAVEVOICEPOOL__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void SetDefaultConfigForWaveVoicePool(::CriWare::CriAtomExWaveVoicePool_Config& a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExWaveVoicePool_Config&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXWAVEVOICEPOOL_SETDEFAULTCONFIGFORWAVEVOICEPOOL_OFFSET))(a1);
		}

		static ::System::IntPtr criAtomExVoicePool_AllocateWaveVoicePool(::CriWare::CriAtomExWaveVoicePool_Config& a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExWaveVoicePool_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXWAVEVOICEPOOL_CRIATOMEXVOICEPOOL_ALLOCATEWAVEVOICEPOOL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CRIWAREEDDDA553(::CriWare::CriAtomExWaveVoicePool_Config& a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExWaveVoicePool_Config&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXWAVEVOICEPOOL_CRIWAREEDDDA553_OFFSET))(a1);
		}
	};
}
