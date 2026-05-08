#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackInfo.h"
#include "unitysdk/AkCallbackType.h"

namespace System { class String; }

#define AKMUSICSYNCCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C3D0020)
#define AKMUSICSYNCCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1C3CFF80)
#define AKMUSICSYNCCALLBACKINFO_GET_MUSICSYNCTYPE_OFFSET UNITYSDK_OFFSET(0x1C3D06F0)
#define AKMUSICSYNCCALLBACKINFO_GET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x1C3D01F0)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_FBARDURATION_OFFSET UNITYSDK_OFFSET(0x1C3D0570)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_FBEATDURATION_OFFSET UNITYSDK_OFFSET(0x1C3D04F0)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_FGRIDDURATION_OFFSET UNITYSDK_OFFSET(0x1C3D05F0)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_FGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x1C3D0670)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_IACTIVEDURATION_OFFSET UNITYSDK_OFFSET(0x1C3D0370)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_ICURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x1C3D0270)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_IPOSTEXITDURATION_OFFSET UNITYSDK_OFFSET(0x1C3D03F0)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_IPREENTRYDURATION_OFFSET UNITYSDK_OFFSET(0x1C3D02F0)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_IREMAININGLOOKAHEADTIME_OFFSET UNITYSDK_OFFSET(0x1C3D0470)
#define AKMUSICSYNCCALLBACKINFO_GET_USERCUENAME_OFFSET UNITYSDK_OFFSET(0x1C3D0770)
#define AKMUSICSYNCCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1C3CFF90)
#define AKMUSICSYNCCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C3D0860)
#define AKMUSICSYNCCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3CFEF0)

inline static constexpr unsigned int AkMusicSyncCallbackInfo_TypeDefinitionIndex = 31445;

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
