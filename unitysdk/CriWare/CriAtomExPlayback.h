#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExPlayback_Status.h"
#include "unitysdk/CriWare/CriAtomEx_ResumeMode.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETBEATSYNCINFO_OFFSET UNITYSDK_OFFSET(0x146A4D40)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETCURRENTBLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x146A4B10)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETFORMATINFO_OFFSET UNITYSDK_OFFSET(0x146A44E0)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETNUMPLAYEDSAMPLES_OFFSET UNITYSDK_OFFSET(0x146A4900)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETPLAYBACKTRACKINFO_OFFSET UNITYSDK_OFFSET(0x146A4C20)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETSEQUENCEPOSITION_OFFSET UNITYSDK_OFFSET(0x146A4A10)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x146A45F0)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETTIMESYNCEDWITHAUDIO_OFFSET UNITYSDK_OFFSET(0x146A47F0)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETTIME_OFFSET UNITYSDK_OFFSET(0x146A46F0)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x146A43D0)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_PAUSE_OFFSET UNITYSDK_OFFSET(0x146A41D0)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_RESUME_OFFSET UNITYSDK_OFFSET(0x146A42D0)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_SETBEATSYNCOFFSET_OFFSET UNITYSDK_OFFSET(0x146A4F60)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_SETNEXTBLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x146A4E50)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_STOPWITHOUTRELEASETIME_OFFSET UNITYSDK_OFFSET(0x146A40D0)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_STOP_OFFSET UNITYSDK_OFFSET(0x146A4050)
#define CRIWARE_CRIATOMEXPLAYBACK_GETBEATSYNCINFO_OFFSET UNITYSDK_OFFSET(0x2BD64A0)
#define CRIWARE_CRIATOMEXPLAYBACK_GETCURRENTBLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x2BD6390)
#define CRIWARE_CRIATOMEXPLAYBACK_GETFORMATINFO_OFFSET UNITYSDK_OFFSET(0x2BD6060)
#define CRIWARE_CRIATOMEXPLAYBACK_GETNUMPLAYEDSAMPLES_OFFSET UNITYSDK_OFFSET(0x2BD6270)
#define CRIWARE_CRIATOMEXPLAYBACK_GETSEQUENCEPOSITION_OFFSET UNITYSDK_OFFSET(0x2BD6310)
#define CRIWARE_CRIATOMEXPLAYBACK_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x2BD60F0)
#define CRIWARE_CRIATOMEXPLAYBACK_GETTIMESYNCEDWITHAUDIO_OFFSET UNITYSDK_OFFSET(0x2BD61F0)
#define CRIWARE_CRIATOMEXPLAYBACK_GETTIME_OFFSET UNITYSDK_OFFSET(0x2BD6170)
#define CRIWARE_CRIATOMEXPLAYBACK_GETTRACKINFO_OFFSET UNITYSDK_OFFSET(0x2BD6410)
#define CRIWARE_CRIATOMEXPLAYBACK_GET_ID_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define CRIWARE_CRIATOMEXPLAYBACK_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x2BD60F0)
#define CRIWARE_CRIATOMEXPLAYBACK_GET_TIMESYNCEDWITHAUDIO_OFFSET UNITYSDK_OFFSET(0x2BD61F0)
#define CRIWARE_CRIATOMEXPLAYBACK_GET_TIME_OFFSET UNITYSDK_OFFSET(0x2BD6170)
#define CRIWARE_CRIATOMEXPLAYBACK_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x2BD5FE0)
#define CRIWARE_CRIATOMEXPLAYBACK_PAUSE_1_OFFSET UNITYSDK_OFFSET(0x2BD6880)
#define CRIWARE_CRIATOMEXPLAYBACK_PAUSE_OFFSET UNITYSDK_OFFSET(0x2BD5EE0)
#define CRIWARE_CRIATOMEXPLAYBACK_RESUME_OFFSET UNITYSDK_OFFSET(0x2BD5F60)
#define CRIWARE_CRIATOMEXPLAYBACK_SETBEATSYNCOFFSET_OFFSET UNITYSDK_OFFSET(0x2BD65B0)
#define CRIWARE_CRIATOMEXPLAYBACK_SETNEXTBLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x2BD6530)
#define CRIWARE_CRIATOMEXPLAYBACK_SET_ID_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define CRIWARE_CRIATOMEXPLAYBACK_STOPWITHOUTRELEASETIME_OFFSET UNITYSDK_OFFSET(0x2BD6760)
#define CRIWARE_CRIATOMEXPLAYBACK_STOP_1_OFFSET UNITYSDK_OFFSET(0x2BD6640)
#define CRIWARE_CRIATOMEXPLAYBACK_STOP_OFFSET UNITYSDK_OFFSET(0x2BD5ED0)
#define CRIWARE_CRIATOMEXPLAYBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x2C4C0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExPlayback_TypeDefinitionIndex = 37098;

	struct alignas(4) CriAtomExPlayback
	{
		// static const ::System::UInt32 invalidId = 0xFFFFFFFF; // 0x0
		::System::UInt32 _id_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK__CTOR_OFFSET))(this, a1);
		}

		::System::Void Stop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_STOP_OFFSET))(this, a1);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_PAUSE_OFFSET))(this);
		}

		::System::Void Resume(::CriWare::CriAtomEx_ResumeMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx_ResumeMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_RESUME_OFFSET))(this, a1);
		}

		::System::Boolean IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_ISPAUSED_OFFSET))(this);
		}

		/*
		::System::Boolean GetFormatInfo(::CriWare::CriAtomEx_FormatInfo& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomEx_FormatInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETFORMATINFO_OFFSET))(this, a1);
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

		::System::Boolean GetNumPlayedSamples(::System::Int64& a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETNUMPLAYEDSAMPLES_OFFSET))(this, a1, a2);
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
		::System::Boolean GetTrackInfo(::CriWare::CriAtomExPlayback_TrackInfo& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomExPlayback_TrackInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETTRACKINFO_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Boolean GetBeatSyncInfo(::CriWare::CriAtomExBeatSync_Info& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomExBeatSync_Info&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETBEATSYNCINFO_OFFSET))(this, a1);
		}
		*/

		::System::Void SetNextBlockIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_SETNEXTBLOCKINDEX_OFFSET))(this, a1);
		}

		::System::Boolean SetBeatSyncOffset(::System::Int16 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_SETBEATSYNCOFFSET_OFFSET))(this, a1);
		}

		::System::UInt32 get_id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GET_ID_OFFSET))(this);
		}

		::System::Void set_id(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_SET_ID_OFFSET))(this, a1);
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

		::System::Void Pause_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_PAUSE_1_OFFSET))(this, a1);
		}

		static ::System::Void criAtomExPlayback_Stop(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_STOP_OFFSET))(a1);
		}

		static ::System::Void criAtomExPlayback_StopWithoutReleaseTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_STOPWITHOUTRELEASETIME_OFFSET))(a1);
		}

		static ::System::Void criAtomExPlayback_Pause(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_PAUSE_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExPlayback_Resume(::System::UInt32 a1, ::CriWare::CriAtomEx_ResumeMode a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::CriWare::CriAtomEx_ResumeMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_RESUME_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExPlayback_IsPaused(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_ISPAUSED_OFFSET))(a1);
		}

		static ::CriWare::CriAtomExPlayback_Status criAtomExPlayback_GetStatus(::System::UInt32 a1)
		{
			return ((::CriWare::CriAtomExPlayback_Status(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETSTATUS_OFFSET))(a1);
		}

		/*
		static ::System::Boolean criAtomExPlayback_GetFormatInfo(::System::UInt32 a1, ::CriWare::CriAtomEx_FormatInfo& a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::CriWare::CriAtomEx_FormatInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETFORMATINFO_OFFSET))(a1, a2);
		}
		*/

		static ::System::Int64 criAtomExPlayback_GetTime(::System::UInt32 a1)
		{
			return ((::System::Int64(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETTIME_OFFSET))(a1);
		}

		static ::System::Int64 criAtomExPlayback_GetTimeSyncedWithAudio(::System::UInt32 a1)
		{
			return ((::System::Int64(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETTIMESYNCEDWITHAUDIO_OFFSET))(a1);
		}

		static ::System::Boolean criAtomExPlayback_GetNumPlayedSamples(::System::UInt32 a1, ::System::Int64& a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETNUMPLAYEDSAMPLES_OFFSET))(a1, a2, a3);
		}

		static ::System::Int64 criAtomExPlayback_GetSequencePosition(::System::UInt32 a1)
		{
			return ((::System::Int64(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETSEQUENCEPOSITION_OFFSET))(a1);
		}

		static ::System::Void criAtomExPlayback_SetNextBlockIndex(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_SETNEXTBLOCKINDEX_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExPlayback_GetCurrentBlockIndex(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETCURRENTBLOCKINDEX_OFFSET))(a1);
		}

		/*
		static ::System::Boolean criAtomExPlayback_GetPlaybackTrackInfo(::System::UInt32 a1, ::CriWare::CriAtomExPlayback_TrackInfo& a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::CriWare::CriAtomExPlayback_TrackInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETPLAYBACKTRACKINFO_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean criAtomExPlayback_GetBeatSyncInfo(::System::UInt32 a1, ::CriWare::CriAtomExBeatSync_Info& a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::CriWare::CriAtomExBeatSync_Info&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETBEATSYNCINFO_OFFSET))(a1, a2);
		}
		*/

		static ::System::Boolean criAtomExPlayback_SetBeatSyncOffset(::System::UInt32 a1, ::System::Int16 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_SETBEATSYNCOFFSET_OFFSET))(a1, a2);
		}
	};
}
