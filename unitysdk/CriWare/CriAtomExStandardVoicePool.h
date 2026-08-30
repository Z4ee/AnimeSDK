#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExStandardVoicePool_Config.h"
#include "unitysdk/CriWare/CriAtomExVoicePool.h"

#define CRIWARE_CRIATOMEXSTANDARDVOICEPOOL_CRIATOMEXVOICEPOOL_ALLOCATESTANDARDVOICEPOOL_OFFSET UNITYSDK_OFFSET(0x1D374F70)
#define CRIWARE_CRIATOMEXSTANDARDVOICEPOOL_CRIWARE69557BDA_OFFSET UNITYSDK_OFFSET(0x1D374DE0)
#define CRIWARE_CRIATOMEXSTANDARDVOICEPOOL_SETDEFAULTCONFIGFORSTANDARDVOICEPOOL_OFFSET UNITYSDK_OFFSET(0x1D374DD0)
#define CRIWARE_CRIATOMEXSTANDARDVOICEPOOL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D375090)
#define CRIWARE_CRIATOMEXSTANDARDVOICEPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D374EF0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExStandardVoicePool_TypeDefinitionIndex = 38782;

	class CriAtomExStandardVoicePool : public ::CriWare::CriAtomExVoicePool
	{
	public:
		::System::Void _ctor(::CriWare::CriAtomExStandardVoicePool_Config a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExStandardVoicePool_Config))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSTANDARDVOICEPOOL__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSTANDARDVOICEPOOL__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void SetDefaultConfigForStandardVoicePool(::CriWare::CriAtomExStandardVoicePool_Config& a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExStandardVoicePool_Config&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSTANDARDVOICEPOOL_SETDEFAULTCONFIGFORSTANDARDVOICEPOOL_OFFSET))(a1);
		}

		static ::System::IntPtr criAtomExVoicePool_AllocateStandardVoicePool(::CriWare::CriAtomExStandardVoicePool_Config& a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExStandardVoicePool_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSTANDARDVOICEPOOL_CRIATOMEXVOICEPOOL_ALLOCATESTANDARDVOICEPOOL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CRIWARE69557BDA(::CriWare::CriAtomExStandardVoicePool_Config& a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExStandardVoicePool_Config&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSTANDARDVOICEPOOL_CRIWARE69557BDA_OFFSET))(a1);
		}
	};
}
