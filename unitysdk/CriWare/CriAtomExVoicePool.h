#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_ExPitchShifterConfig.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_ExTimeStretchConfig.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_PitchShifterMode.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_UsedVoicesInfo.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_VoicePoolId.h"
#include "unitysdk/CriWare/CriDisposable.h"

#define CRIWARE_CRIATOMEXVOICEPOOL_ATTACHDSPPITCHSHIFTER_OFFSET UNITYSDK_OFFSET(0x11A25510)
#define CRIWARE_CRIATOMEXVOICEPOOL_ATTACHDSPTIMESTRETCH_OFFSET UNITYSDK_OFFSET(0x11A253D0)
#define CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_ATTACHDSPPITCHSHIFTER_OFFSET UNITYSDK_OFFSET(0x11A255C0)
#define CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_ATTACHDSPTIMESTRETCH_OFFSET UNITYSDK_OFFSET(0x11A25480)
#define CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_DETACHDSP_OFFSET UNITYSDK_OFFSET(0x11A256D0)
#define CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_FREE_OFFSET UNITYSDK_OFFSET(0x11A25220)
#define CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_GETNUMUSEDVOICES_OFFSET UNITYSDK_OFFSET(0x11A25340)
#define CRIWARE_CRIATOMEXVOICEPOOL_CRIWARED389B244_OFFSET UNITYSDK_OFFSET(0x11A25050)
#define CRIWARE_CRIATOMEXVOICEPOOL_DETACHDSP_OFFSET UNITYSDK_OFFSET(0x11A25650)
#define CRIWARE_CRIATOMEXVOICEPOOL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A25130)
#define CRIWARE_CRIATOMEXVOICEPOOL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x11A25750)
#define CRIWARE_CRIATOMEXVOICEPOOL_GETNUMUSEDVOICES_1_OFFSET UNITYSDK_OFFSET(0x11A252A0)
#define CRIWARE_CRIATOMEXVOICEPOOL_GETNUMUSEDVOICES_OFFSET UNITYSDK_OFFSET(0x11A24FC0)
#define CRIWARE_CRIATOMEXVOICEPOOL_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x11A250F0)
#define CRIWARE_CRIATOMEXVOICEPOOL_GET_MAXCHANNELS_OFFSET UNITYSDK_OFFSET(0x11A25110)
#define CRIWARE_CRIATOMEXVOICEPOOL_GET_MAXSAMPLINGRATE_OFFSET UNITYSDK_OFFSET(0x11A25120)
#define CRIWARE_CRIATOMEXVOICEPOOL_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x11A250E0)
#define CRIWARE_CRIATOMEXVOICEPOOL_GET_NUMVOICES_OFFSET UNITYSDK_OFFSET(0x11A25100)
#define CRIWARE_CRIATOMEXVOICEPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x11A233A0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExVoicePool_TypeDefinitionIndex = 31095;

	class CriAtomExVoicePool : public ::CriWare::CriDisposable
	{
	public:
		// static const ::System::Int32 StandardMemoryAsrVoicePoolId = 0x0; // 0x0
		// static const ::System::Int32 StandardStreamingAsrVoicePoolId = 0x1; // 0x0
		// static const ::System::Int32 StandardMemoryNsrVoicePoolId = 0x2; // 0x0
		// static const ::System::Int32 StandardStreamingNsrVoicePoolId = 0x3; // 0x0
		::System::Int32 _maxSamplingRate; // 0x20
		::System::UInt32 _identifier; // 0x24
		::System::Int32 _numVoices; // 0x28
		::System::Int32 _maxChannels; // 0x2C
		::System::IntPtr _handle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL__CTOR_OFFSET))(this);
		}

		static ::CriWare::CriAtomExVoicePool_UsedVoicesInfo GetNumUsedVoices(::CriWare::CriAtomExVoicePool_VoicePoolId voicePoolId)
		{
			return ((::CriWare::CriAtomExVoicePool_UsedVoicesInfo(*)(::CriWare::CriAtomExVoicePool_VoicePoolId))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_GETNUMUSEDVOICES_OFFSET))(voicePoolId);
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

		::System::Void AttachDspPitchShifter(::CriWare::CriAtomExVoicePool_PitchShifterMode mode, ::System::Int32 windosSize, ::System::Int32 overlapTimes)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExVoicePool_PitchShifterMode, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_ATTACHDSPPITCHSHIFTER_OFFSET))(this, mode, windosSize, overlapTimes);
		}

		::System::Void DetachDsp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_DETACHDSP_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_FINALIZE_OFFSET))(this);
		}

		static ::System::Void CRIWARED389B244(::System::Int32 voice_pool_id, ::System::Int32& num_used_voices, ::System::Int32& num_pool_voices)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_CRIWARED389B244_OFFSET))(voice_pool_id, num_used_voices, num_pool_voices);
		}

		static ::System::Void criAtomExVoicePool_GetNumUsedVoices(::System::IntPtr pool, ::System::Int32& num_used_voices, ::System::Int32& num_pool_voices)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_GETNUMUSEDVOICES_OFFSET))(pool, num_used_voices, num_pool_voices);
		}

		static ::System::Void criAtomExVoicePool_Free(::System::IntPtr pool)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_FREE_OFFSET))(pool);
		}

		static ::System::Void criAtomExVoicePool_AttachDspTimeStretch(::System::IntPtr pool, ::CriWare::CriAtomExVoicePool_ExTimeStretchConfig& config, ::System::IntPtr work, ::System::Int32 work_size)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomExVoicePool_ExTimeStretchConfig&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_ATTACHDSPTIMESTRETCH_OFFSET))(pool, config, work, work_size);
		}

		static ::System::Void criAtomExVoicePool_AttachDspPitchShifter(::System::IntPtr pool, ::CriWare::CriAtomExVoicePool_ExPitchShifterConfig& config, ::System::IntPtr work, ::System::Int32 work_size)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomExVoicePool_ExPitchShifterConfig&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_ATTACHDSPPITCHSHIFTER_OFFSET))(pool, config, work, work_size);
		}

		static ::System::Void criAtomExVoicePool_DetachDsp(::System::IntPtr pool)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXVOICEPOOL_CRIATOMEXVOICEPOOL_DETACHDSP_OFFSET))(pool);
		}
	};
}
