#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAuxIn_Config.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/System/Nullable_1.h"

namespace CriWare { class CriAudioReadStream; }
namespace System { class String; }

#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_CREATE_OFFSET UNITYSDK_OFFSET(0x11A102E0)
#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_DESTROY_OFFSET UNITYSDK_OFFSET(0x11A104C0)
#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_GETFORMAT_OFFSET UNITYSDK_OFFSET(0x11A108F0)
#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETBUSSENDLEVELBYNAME_OFFSET UNITYSDK_OFFSET(0x11A10C70)
#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETFORMAT_OFFSET UNITYSDK_OFFSET(0x11A107D0)
#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETFREQUENCYRATIO_OFFSET UNITYSDK_OFFSET(0x11A10B30)
#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETINPUTREADSTREAM_OFFSET UNITYSDK_OFFSET(0x11A10DC0)
#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x11A10A10)
#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_START_OFFSET UNITYSDK_OFFSET(0x11A105C0)
#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_STOP_OFFSET UNITYSDK_OFFSET(0x11A106C0)
#define CRIWARE_CRIATOMEXAUXIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A103E0)
#define CRIWARE_CRIATOMEXAUXIN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x11A10370)
#define CRIWARE_CRIATOMEXAUXIN_GETFORMAT_OFFSET UNITYSDK_OFFSET(0x11A10860)
#define CRIWARE_CRIATOMEXAUXIN_SETBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x11A10BC0)
#define CRIWARE_CRIATOMEXAUXIN_SETFORMAT_OFFSET UNITYSDK_OFFSET(0x11A10740)
#define CRIWARE_CRIATOMEXAUXIN_SETFREQUENCYRATIO_OFFSET UNITYSDK_OFFSET(0x11A10AA0)
#define CRIWARE_CRIATOMEXAUXIN_SETINPUTREADSTREAM_OFFSET UNITYSDK_OFFSET(0x11A10D20)
#define CRIWARE_CRIATOMEXAUXIN_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x11A10980)
#define CRIWARE_CRIATOMEXAUXIN_START_OFFSET UNITYSDK_OFFSET(0x11A10540)
#define CRIWARE_CRIATOMEXAUXIN_STOP_OFFSET UNITYSDK_OFFSET(0x11A10640)
#define CRIWARE_CRIATOMEXAUXIN__CTOR_OFFSET UNITYSDK_OFFSET(0x11A10170)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAuxIn_TypeDefinitionIndex = 31068;

	class CriAtomExAuxIn : public ::CriWare::CriDisposable
	{
	public:
		// static const ::System::String* errorInvalidHandle; // 0x0
		::CriWare::CriAudioReadStream* inputReadStream; // 0x20
		::System::IntPtr handle; // 0x28

		::System::Void _ctor(::System::Nullable_1<::CriWare::CriAtomExAuxIn_Config> config)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::CriWare::CriAtomExAuxIn_Config>))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN__CTOR_OFFSET))(this, config);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_DISPOSE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_STOP_OFFSET))(this);
		}

		::System::Void SetFormat(::System::Int32 numChannels, ::System::Int32 samplingRate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_SETFORMAT_OFFSET))(this, numChannels, samplingRate);
		}

		::System::Void GetFormat(::System::Int32& numChannels, ::System::Int32& samplingRate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_GETFORMAT_OFFSET))(this, numChannels, samplingRate);
		}

		::System::Void SetVolume(::System::Single volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_SETVOLUME_OFFSET))(this, volume);
		}

		::System::Void SetFrequencyRatio(::System::Single frequencyRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_SETFREQUENCYRATIO_OFFSET))(this, frequencyRatio);
		}

		::System::Void SetBusSendLevel(::System::String* busName, ::System::Single level)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_SETBUSSENDLEVEL_OFFSET))(this, busName, level);
		}

		::System::Void SetInputReadStream(::CriWare::CriAudioReadStream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAudioReadStream*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_SETINPUTREADSTREAM_OFFSET))(this, stream);
		}

		static ::System::IntPtr criAtomAuxIn_Create(::CriWare::CriAtomExAuxIn_Config& config, ::System::IntPtr work, ::System::Int32 work_size)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExAuxIn_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_CREATE_OFFSET))(config, work, work_size);
		}

		static ::System::Void criAtomAuxIn_Destroy(::System::IntPtr aux_in)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_DESTROY_OFFSET))(aux_in);
		}

		static ::System::Void criAtomAuxIn_Start(::System::IntPtr aux_in)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_START_OFFSET))(aux_in);
		}

		static ::System::Void criAtomAuxIn_Stop(::System::IntPtr aux_in)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_STOP_OFFSET))(aux_in);
		}

		static ::System::Void criAtomAuxIn_SetVolume(::System::IntPtr aux_in, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETVOLUME_OFFSET))(aux_in, volume);
		}

		static ::System::Void criAtomAuxIn_SetFrequencyRatio(::System::IntPtr aux_in, ::System::Single ratio)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETFREQUENCYRATIO_OFFSET))(aux_in, ratio);
		}

		static ::System::Void criAtomAuxIn_SetBusSendLevelByName(::System::IntPtr aux_in, ::System::String* bus_name, ::System::Single level)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETBUSSENDLEVELBYNAME_OFFSET))(aux_in, bus_name, level);
		}

		static ::System::Void criAtomAuxIn_SetFormat(::System::IntPtr aux_in, ::System::Int32 num_channels, ::System::Int32 sampling_rate)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETFORMAT_OFFSET))(aux_in, num_channels, sampling_rate);
		}

		static ::System::Void criAtomAuxIn_GetFormat(::System::IntPtr aux_in, ::System::Int32& num_channels, ::System::Int32& sampling_rate)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_GETFORMAT_OFFSET))(aux_in, num_channels, sampling_rate);
		}

		static ::System::Void criAtomAuxIn_SetInputReadStream(::System::IntPtr aux_in, ::System::IntPtr stream_cbfunc, ::System::IntPtr stream_ptr)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETINPUTREADSTREAM_OFFSET))(aux_in, stream_cbfunc, stream_ptr);
		}
	};
}
