#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_ExPitchShifterConfig.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_ExTimeStretchConfig.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_PitchShifterMode.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_UsedVoicesInfo.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_VoicePoolId.h"
#include "unitysdk/CriWare/CriDisposable.h"

#define CRIWARE_CRIATOMEXVOICEPOOL_ATTACHDSPPITCHSHIFTER_OFFSET UNITYSDK_OFFSET(0x164DA3F0)
#define CRIWARE_CRIATOMEXVOICEPOOL_ATTACHDSPTIMESTRETCH_OFFSET UNITYSDK_OFFSET(0x164DA2B0)
#define CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_ATTACHDSPPITCHSHIFTER_OFFSET UNITYSDK_OFFSET(0x164DA4A0)
#define CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_ATTACHDSPTIMESTRETCH_OFFSET UNITYSDK_OFFSET(0x164DA360)
#define CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_DETACHDSP_OFFSET UNITYSDK_OFFSET(0x164DA5B0)
#define CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_FREE_OFFSET UNITYSDK_OFFSET(0x164DA100)
#define CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_GETNUMUSEDVOICES_OFFSET UNITYSDK_OFFSET(0x164DA220)
#define CRIWARE_CRIATOMEXVOICEPOOL_CRIWARE50F5A43B_OFFSET UNITYSDK_OFFSET(0x164D9F10)
#define CRIWARE_CRIATOMEXVOICEPOOL_DETACHDSP_OFFSET UNITYSDK_OFFSET(0x164DA530)
#define CRIWARE_CRIATOMEXVOICEPOOL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164D9FF0)
#define CRIWARE_CRIATOMEXVOICEPOOL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x164DA630)
#define CRIWARE_CRIATOMEXVOICEPOOL_GETNUMUSEDVOICES_1_OFFSET UNITYSDK_OFFSET(0x164DA180)
#define CRIWARE_CRIATOMEXVOICEPOOL_GETNUMUSEDVOICES_OFFSET UNITYSDK_OFFSET(0x164D9E80)
#define CRIWARE_CRIATOMEXVOICEPOOL_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x164D9FB0)
#define CRIWARE_CRIATOMEXVOICEPOOL_GET_MAXCHANNELS_OFFSET UNITYSDK_OFFSET(0x164D9FD0)
#define CRIWARE_CRIATOMEXVOICEPOOL_GET_MAXSAMPLINGRATE_OFFSET UNITYSDK_OFFSET(0x164D9FE0)
#define CRIWARE_CRIATOMEXVOICEPOOL_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x164D9FA0)
#define CRIWARE_CRIATOMEXVOICEPOOL_GET_NUMVOICES_OFFSET UNITYSDK_OFFSET(0x164D9FC0)
#define CRIWARE_CRIATOMEXVOICEPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x164D8310)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExVoicePool_TypeDefinitionIndex = 38773;

	class CriAtomExVoicePool : public ::CriWare::CriDisposable
	{
	public:
		// static const ::System::Int32 StandardMemoryAsrVoicePoolId = 0x0; // 0x0
		// static const ::System::Int32 StandardStreamingAsrVoicePoolId = 0x1; // 0x0
		// static const ::System::Int32 StandardMemoryNsrVoicePoolId = 0x2; // 0x0
		// static const ::System::Int32 StandardStreamingNsrVoicePoolId = 0x3; // 0x0
		::System::Int32 _numVoices; // 0x20
		::System::Int32 _maxSamplingRate; // 0x24
		::System::IntPtr _handle; // 0x28
		::System::UInt32 _identifier; // 0x30
		::System::Int32 _maxChannels; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL__CTOR_OFFSET))(this);
		}

		static ::CriWare::CriAtomExVoicePool_UsedVoicesInfo GetNumUsedVoices(::CriWare::CriAtomExVoicePool_VoicePoolId a1)
		{
			return ((::CriWare::CriAtomExVoicePool_UsedVoicesInfo(*)(::CriWare::CriAtomExVoicePool_VoicePoolId))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_GETNUMUSEDVOICES_OFFSET))(a1);
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::UInt32 get_identifier()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Int32 get_numVoices()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_GET_NUMVOICES_OFFSET))(this);
		}

		::System::Int32 get_maxChannels()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_GET_MAXCHANNELS_OFFSET))(this);
		}

		::System::Int32 get_maxSamplingRate()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_GET_MAXSAMPLINGRATE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_DISPOSE_OFFSET))(this);
		}

		::CriWare::CriAtomExVoicePool_UsedVoicesInfo GetNumUsedVoices_1()
		{
			return ((::CriWare::CriAtomExVoicePool_UsedVoicesInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_GETNUMUSEDVOICES_1_OFFSET))(this);
		}

		::System::Void AttachDspTimeStretch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_ATTACHDSPTIMESTRETCH_OFFSET))(this);
		}

		::System::Void AttachDspPitchShifter(::CriWare::CriAtomExVoicePool_PitchShifterMode a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExVoicePool_PitchShifterMode, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_ATTACHDSPPITCHSHIFTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DetachDsp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_DETACHDSP_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_FINALIZE_OFFSET))(this);
		}

		static ::System::Void CRIWARE50F5A43B(::System::Int32 a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_CRIWARE50F5A43B_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExVoicePool_GetNumUsedVoices(::System::IntPtr a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_GETNUMUSEDVOICES_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExVoicePool_Free(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_FREE_OFFSET))(a1);
		}

		static ::System::Void criAtomExVoicePool_AttachDspTimeStretch(::System::IntPtr a1, ::CriWare::CriAtomExVoicePool_ExTimeStretchConfig& a2, ::System::IntPtr a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomExVoicePool_ExTimeStretchConfig&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_ATTACHDSPTIMESTRETCH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void criAtomExVoicePool_AttachDspPitchShifter(::System::IntPtr a1, ::CriWare::CriAtomExVoicePool_ExPitchShifterConfig& a2, ::System::IntPtr a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomExVoicePool_ExPitchShifterConfig&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_ATTACHDSPPITCHSHIFTER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void criAtomExVoicePool_DetachDsp(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_DETACHDSP_OFFSET))(a1);
		}
	};
}
