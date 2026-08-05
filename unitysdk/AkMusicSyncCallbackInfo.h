#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackInfo.h"
#include "unitysdk/AkCallbackType.h"

namespace System { class String; }

#define AKMUSICSYNCCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FAF4770)
#define AKMUSICSYNCCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1FAF46D0)
#define AKMUSICSYNCCALLBACKINFO_GET_MUSICSYNCTYPE_OFFSET UNITYSDK_OFFSET(0x1FAF4E40)
#define AKMUSICSYNCCALLBACKINFO_GET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x1FAF4940)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_FBARDURATION_OFFSET UNITYSDK_OFFSET(0x1FAF4CC0)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_FBEATDURATION_OFFSET UNITYSDK_OFFSET(0x1FAF4C40)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_FGRIDDURATION_OFFSET UNITYSDK_OFFSET(0x1FAF4D40)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_FGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x1FAF4DC0)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_IACTIVEDURATION_OFFSET UNITYSDK_OFFSET(0x1FAF4AC0)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_ICURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x1FAF49C0)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_IPOSTEXITDURATION_OFFSET UNITYSDK_OFFSET(0x1FAF4B40)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_IPREENTRYDURATION_OFFSET UNITYSDK_OFFSET(0x1FAF4A40)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_IREMAININGLOOKAHEADTIME_OFFSET UNITYSDK_OFFSET(0x1FAF4BC0)
#define AKMUSICSYNCCALLBACKINFO_GET_USERCUENAME_OFFSET UNITYSDK_OFFSET(0x1FAF4EC0)
#define AKMUSICSYNCCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1FAF46E0)
#define AKMUSICSYNCCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAF4FB0)
#define AKMUSICSYNCCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAF4640)

inline static constexpr unsigned int AkMusicSyncCallbackInfo_TypeDefinitionIndex = 33631;

class AkMusicSyncCallbackInfo : public ::AkCallbackInfo
{
public:
	::System::IntPtr swigCPtr; // 0x20

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMusicSyncCallbackInfo* obj)
	{
		return ((::System::IntPtr(*)(::AkMusicSyncCallbackInfo*))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Dispose(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO_DISPOSE_OFFSET))(this, disposing);
	}

	::System::UInt32 get_playingID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO_GET_PLAYINGID_OFFSET))(this);
	}

	::System::Int32 get_segmentInfo_iCurrentPosition()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_ICURRENTPOSITION_OFFSET))(this);
	}

	::System::Int32 get_segmentInfo_iPreEntryDuration()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_IPREENTRYDURATION_OFFSET))(this);
	}

	::System::Int32 get_segmentInfo_iActiveDuration()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_IACTIVEDURATION_OFFSET))(this);
	}

	::System::Int32 get_segmentInfo_iPostExitDuration()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_IPOSTEXITDURATION_OFFSET))(this);
	}

	::System::Int32 get_segmentInfo_iRemainingLookAheadTime()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_IREMAININGLOOKAHEADTIME_OFFSET))(this);
	}

	::System::Single get_segmentInfo_fBeatDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_FBEATDURATION_OFFSET))(this);
	}

	::System::Single get_segmentInfo_fBarDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_FBARDURATION_OFFSET))(this);
	}

	::System::Single get_segmentInfo_fGridDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_FGRIDDURATION_OFFSET))(this);
	}

	::System::Single get_segmentInfo_fGridOffset()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_FGRIDOFFSET_OFFSET))(this);
	}

	::AkCallbackType get_musicSyncType()
	{
		return ((::AkCallbackType(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO_GET_MUSICSYNCTYPE_OFFSET))(this);
	}

	::System::String* get_userCueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO_GET_USERCUENAME_OFFSET))(this);
	}
};
