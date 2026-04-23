#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExPlayback_Status.h"
#include "unitysdk/CriWare/CriAtomEx_ResumeMode.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETBEATSYNCINFO_OFFSET UNITYSDK_OFFSET(0x12BE7E50)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETCURRENTBLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x12BE7C20)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETFORMATINFO_OFFSET UNITYSDK_OFFSET(0x12BE75F0)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETNUMPLAYEDSAMPLES_OFFSET UNITYSDK_OFFSET(0x12BE7A10)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETPLAYBACKTRACKINFO_OFFSET UNITYSDK_OFFSET(0x12BE7D30)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETSEQUENCEPOSITION_OFFSET UNITYSDK_OFFSET(0x12BE7B20)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x12BE7700)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETTIMESYNCEDWITHAUDIO_OFFSET UNITYSDK_OFFSET(0x12BE7900)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETTIME_OFFSET UNITYSDK_OFFSET(0x12BE7800)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x12BE74E0)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_PAUSE_OFFSET UNITYSDK_OFFSET(0x12BE72E0)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_RESUME_OFFSET UNITYSDK_OFFSET(0x12BE73E0)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_SETBEATSYNCOFFSET_OFFSET UNITYSDK_OFFSET(0x12BE8070)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_SETNEXTBLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x12BE7F60)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_STOPWITHOUTRELEASETIME_OFFSET UNITYSDK_OFFSET(0x12BE71E0)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_STOP_OFFSET UNITYSDK_OFFSET(0x12BE7160)
#define CRIWARE_CRIATOMEXPLAYBACK_GETBEATSYNCINFO_OFFSET UNITYSDK_OFFSET(0x1626240)
#define CRIWARE_CRIATOMEXPLAYBACK_GETCURRENTBLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x1626130)
#define CRIWARE_CRIATOMEXPLAYBACK_GETFORMATINFO_OFFSET UNITYSDK_OFFSET(0x1625E00)
#define CRIWARE_CRIATOMEXPLAYBACK_GETNUMPLAYEDSAMPLES_OFFSET UNITYSDK_OFFSET(0x1626010)
#define CRIWARE_CRIATOMEXPLAYBACK_GETSEQUENCEPOSITION_OFFSET UNITYSDK_OFFSET(0x16260B0)
#define CRIWARE_CRIATOMEXPLAYBACK_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1625E90)
#define CRIWARE_CRIATOMEXPLAYBACK_GETTIMESYNCEDWITHAUDIO_OFFSET UNITYSDK_OFFSET(0x1625F90)
#define CRIWARE_CRIATOMEXPLAYBACK_GETTIME_OFFSET UNITYSDK_OFFSET(0x1625F10)
#define CRIWARE_CRIATOMEXPLAYBACK_GETTRACKINFO_OFFSET UNITYSDK_OFFSET(0x16261B0)
#define CRIWARE_CRIATOMEXPLAYBACK_GET_ID_OFFSET UNITYSDK_OFFSET(0x59D0)
#define CRIWARE_CRIATOMEXPLAYBACK_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1625E90)
#define CRIWARE_CRIATOMEXPLAYBACK_GET_TIMESYNCEDWITHAUDIO_OFFSET UNITYSDK_OFFSET(0x1625F90)
#define CRIWARE_CRIATOMEXPLAYBACK_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1625F10)
#define CRIWARE_CRIATOMEXPLAYBACK_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1625D80)
#define CRIWARE_CRIATOMEXPLAYBACK_PAUSE_1_OFFSET UNITYSDK_OFFSET(0x1626620)
#define CRIWARE_CRIATOMEXPLAYBACK_PAUSE_OFFSET UNITYSDK_OFFSET(0x1625C80)
#define CRIWARE_CRIATOMEXPLAYBACK_RESUME_OFFSET UNITYSDK_OFFSET(0x1625D00)
#define CRIWARE_CRIATOMEXPLAYBACK_SETBEATSYNCOFFSET_OFFSET UNITYSDK_OFFSET(0x1626350)
#define CRIWARE_CRIATOMEXPLAYBACK_SETNEXTBLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x16262D0)
#define CRIWARE_CRIATOMEXPLAYBACK_SET_ID_OFFSET UNITYSDK_OFFSET(0x299E0)
#define CRIWARE_CRIATOMEXPLAYBACK_STOPWITHOUTRELEASETIME_OFFSET UNITYSDK_OFFSET(0x1626500)
#define CRIWARE_CRIATOMEXPLAYBACK_STOP_1_OFFSET UNITYSDK_OFFSET(0x16263E0)
#define CRIWARE_CRIATOMEXPLAYBACK_STOP_OFFSET UNITYSDK_OFFSET(0x1625C70)
#define CRIWARE_CRIATOMEXPLAYBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x299E0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExPlayback_TypeDefinitionIndex = 36798;

	struct alignas(4) CriAtomExPlayback
	{
		// static const ::System::UInt32 invalidId = 0xFFFFFFFF; // 0x0
		::System::UInt32 _id_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK__CTOR_OFFSET))(this, id);
		}

		::System::Void Stop(::System::Boolean ignoresReleaseTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_STOP_OFFSET))(this, ignoresReleaseTime);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_PAUSE_OFFSET))(this);
		}

		::System::Void Resume(::CriWare::CriAtomEx_ResumeMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx_ResumeMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_RESUME_OFFSET))(this, mode);
		}

		::System::Boolean IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_ISPAUSED_OFFSET))(this);
		}

		/*
		::System::Boolean GetFormatInfo(::CriWare::CriAtomEx_FormatInfo& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomEx_FormatInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETFORMATINFO_OFFSET))(this, info);
		}
		*/

		::CriWare::CriAtomExPlayback_Status GetStatus()
		{
			return ((::CriWare::CriAtomExPlayback_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETSTATUS_OFFSET))(this);
		}

		::System::Int64 GetTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETTIME_OFFSET))(this);
		}

		::System::Int64 GetTimeSyncedWithAudio()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETTIMESYNCEDWITHAUDIO_OFFSET))(this);
		}

		::System::Boolean GetNumPlayedSamples(::System::Int64& numSamples, ::System::Int32& samplingRate)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETNUMPLAYEDSAMPLES_OFFSET))(this, numSamples, samplingRate);
		}

		::System::Int64 GetSequencePosition()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETSEQUENCEPOSITION_OFFSET))(this);
		}

		::System::Int32 GetCurrentBlockIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETCURRENTBLOCKINDEX_OFFSET))(this);
		}

		/*
		::System::Boolean GetTrackInfo(::CriWare::CriAtomExPlayback_TrackInfo& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomExPlayback_TrackInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETTRACKINFO_OFFSET))(this, info);
		}
		*/

		/*
		::System::Boolean GetBeatSyncInfo(::CriWare::CriAtomExBeatSync_Info& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomExBeatSync_Info&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETBEATSYNCINFO_OFFSET))(this, info);
		}
		*/

		::System::Void SetNextBlockIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_SETNEXTBLOCKINDEX_OFFSET))(this, index);
		}

		::System::Boolean SetBeatSyncOffset(::System::Int16 timeMs)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_SETBEATSYNCOFFSET_OFFSET))(this, timeMs);
		}

		::System::UInt32 get_id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GET_ID_OFFSET))(this);
		}

		::System::Void set_id(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_SET_ID_OFFSET))(this, value);
		}

		::CriWare::CriAtomExPlayback_Status get_status()
		{
			return ((::CriWare::CriAtomExPlayback_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GET_STATUS_OFFSET))(this);
		}

		::System::Int64 get_time()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GET_TIME_OFFSET))(this);
		}

		::System::Int64 get_timeSyncedWithAudio()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GET_TIMESYNCEDWITHAUDIO_OFFSET))(this);
		}

		::System::Void Stop_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_STOP_1_OFFSET))(this);
		}

		::System::Void StopWithoutReleaseTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_STOPWITHOUTRELEASETIME_OFFSET))(this);
		}

		::System::Void Pause_1(::System::Boolean sw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_PAUSE_1_OFFSET))(this, sw);
		}

		static ::System::Void criAtomExPlayback_Stop(::System::UInt32 id)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_STOP_OFFSET))(id);
		}

		static ::System::Void criAtomExPlayback_StopWithoutReleaseTime(::System::UInt32 id)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_STOPWITHOUTRELEASETIME_OFFSET))(id);
		}

		static ::System::Void criAtomExPlayback_Pause(::System::UInt32 id, ::System::Boolean sw)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_PAUSE_OFFSET))(id, sw);
		}

		static ::System::Void criAtomExPlayback_Resume(::System::UInt32 id, ::CriWare::CriAtomEx_ResumeMode mode)
		{
			return ((::System::Void(*)(::System::UInt32, ::CriWare::CriAtomEx_ResumeMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_RESUME_OFFSET))(id, mode);
		}

		static ::System::Boolean criAtomExPlayback_IsPaused(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_ISPAUSED_OFFSET))(id);
		}

		static ::CriWare::CriAtomExPlayback_Status criAtomExPlayback_GetStatus(::System::UInt32 id)
		{
			return ((::CriWare::CriAtomExPlayback_Status(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETSTATUS_OFFSET))(id);
		}

		/*
		static ::System::Boolean criAtomExPlayback_GetFormatInfo(::System::UInt32 id, ::CriWare::CriAtomEx_FormatInfo& info)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::CriWare::CriAtomEx_FormatInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETFORMATINFO_OFFSET))(id, info);
		}
		*/

		static ::System::Int64 criAtomExPlayback_GetTime(::System::UInt32 id)
		{
			return ((::System::Int64(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETTIME_OFFSET))(id);
		}

		static ::System::Int64 criAtomExPlayback_GetTimeSyncedWithAudio(::System::UInt32 id)
		{
			return ((::System::Int64(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETTIMESYNCEDWITHAUDIO_OFFSET))(id);
		}

		static ::System::Boolean criAtomExPlayback_GetNumPlayedSamples(::System::UInt32 id, ::System::Int64& num_samples, ::System::Int32& sampling_rate)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETNUMPLAYEDSAMPLES_OFFSET))(id, num_samples, sampling_rate);
		}

		static ::System::Int64 criAtomExPlayback_GetSequencePosition(::System::UInt32 id)
		{
			return ((::System::Int64(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETSEQUENCEPOSITION_OFFSET))(id);
		}

		static ::System::Void criAtomExPlayback_SetNextBlockIndex(::System::UInt32 id, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_SETNEXTBLOCKINDEX_OFFSET))(id, index);
		}

		static ::System::Int32 criAtomExPlayback_GetCurrentBlockIndex(::System::UInt32 id)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETCURRENTBLOCKINDEX_OFFSET))(id);
		}

		/*
		static ::System::Boolean criAtomExPlayback_GetPlaybackTrackInfo(::System::UInt32 id, ::CriWare::CriAtomExPlayback_TrackInfo& info)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::CriWare::CriAtomExPlayback_TrackInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETPLAYBACKTRACKINFO_OFFSET))(id, info);
		}
		*/

		/*
		static ::System::Boolean criAtomExPlayback_GetBeatSyncInfo(::System::UInt32 id, ::CriWare::CriAtomExBeatSync_Info& info)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::CriWare::CriAtomExBeatSync_Info&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETBEATSYNCINFO_OFFSET))(id, info);
		}
		*/

		static ::System::Boolean criAtomExPlayback_SetBeatSyncOffset(::System::UInt32 id, ::System::Int16 timeMs)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_SETBEATSYNCOFFSET_OFFSET))(id, timeMs);
		}
	};
}
