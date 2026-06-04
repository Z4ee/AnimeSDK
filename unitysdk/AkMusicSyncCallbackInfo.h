#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackInfo.h"
#include "unitysdk/AkCallbackType.h"

namespace System { class String; }

#define AKMUSICSYNCCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B448110)
#define AKMUSICSYNCCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B447FF0)
#define AKMUSICSYNCCALLBACKINFO_GET_MUSICSYNCTYPE_OFFSET UNITYSDK_OFFSET(0x1B4489E0)
#define AKMUSICSYNCCALLBACKINFO_GET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x1B448300)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_FBARDURATION_OFFSET UNITYSDK_OFFSET(0x1B4487D0)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_FBEATDURATION_OFFSET UNITYSDK_OFFSET(0x1B448720)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_FGRIDDURATION_OFFSET UNITYSDK_OFFSET(0x1B448880)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_FGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x1B448930)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_IACTIVEDURATION_OFFSET UNITYSDK_OFFSET(0x1B448510)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_ICURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x1B4483B0)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_IPOSTEXITDURATION_OFFSET UNITYSDK_OFFSET(0x1B4485C0)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_IPREENTRYDURATION_OFFSET UNITYSDK_OFFSET(0x1B448460)
#define AKMUSICSYNCCALLBACKINFO_GET_SEGMENTINFO_IREMAININGLOOKAHEADTIME_OFFSET UNITYSDK_OFFSET(0x1B448670)
#define AKMUSICSYNCCALLBACKINFO_GET_USERCUENAME_OFFSET UNITYSDK_OFFSET(0x1B448A90)
#define AKMUSICSYNCCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B448040)
#define AKMUSICSYNCCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B448BB0)
#define AKMUSICSYNCCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B447F60)
#define AKMUSICSYNCCALLBACKINFO___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B448CC0)
#define AKMUSICSYNCCALLBACKINFO___IFIXBASEPROXY_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B448CB0)

inline static constexpr unsigned int AkMusicSyncCallbackInfo_TypeDefinitionIndex = 41151;

class AkMusicSyncCallbackInfo : public ::AkCallbackInfo
{
public:
	::System::IntPtr swigCPtr; // 0x20

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMusicSyncCallbackInfo* a1)
	{
		return ((::System::IntPtr(*)(::AkMusicSyncCallbackInfo*))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Dispose(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO_DISPOSE_OFFSET))(this, a1);
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

	::System::Void __iFixBaseProxy_setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO___IFIXBASEPROXY_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMUSICSYNCCALLBACKINFO___IFIXBASEPROXY_DISPOSE_OFFSET))(this, a1);
	}
};
