#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKSEGMENTINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B45FBB0)
#define AKSEGMENTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B45FA90)
#define AKSEGMENTINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B45FB40)
#define AKSEGMENTINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B45F950)
#define AKSEGMENTINFO_GET_FBARDURATION_OFFSET UNITYSDK_OFFSET(0x1B4606F0)
#define AKSEGMENTINFO_GET_FBEATDURATION_OFFSET UNITYSDK_OFFSET(0x1B460580)
#define AKSEGMENTINFO_GET_FGRIDDURATION_OFFSET UNITYSDK_OFFSET(0x1B460860)
#define AKSEGMENTINFO_GET_FGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x1B4609D0)
#define AKSEGMENTINFO_GET_IACTIVEDURATION_OFFSET UNITYSDK_OFFSET(0x1B460130)
#define AKSEGMENTINFO_GET_ICURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x1B45FE50)
#define AKSEGMENTINFO_GET_IPOSTEXITDURATION_OFFSET UNITYSDK_OFFSET(0x1B4602A0)
#define AKSEGMENTINFO_GET_IPREENTRYDURATION_OFFSET UNITYSDK_OFFSET(0x1B45FFC0)
#define AKSEGMENTINFO_GET_IREMAININGLOOKAHEADTIME_OFFSET UNITYSDK_OFFSET(0x1B460410)
#define AKSEGMENTINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B45F9A0)
#define AKSEGMENTINFO_SET_FBARDURATION_OFFSET UNITYSDK_OFFSET(0x1B460630)
#define AKSEGMENTINFO_SET_FBEATDURATION_OFFSET UNITYSDK_OFFSET(0x1B4604C0)
#define AKSEGMENTINFO_SET_FGRIDDURATION_OFFSET UNITYSDK_OFFSET(0x1B4607A0)
#define AKSEGMENTINFO_SET_FGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x1B460910)
#define AKSEGMENTINFO_SET_IACTIVEDURATION_OFFSET UNITYSDK_OFFSET(0x1B460070)
#define AKSEGMENTINFO_SET_ICURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x1B45FD90)
#define AKSEGMENTINFO_SET_IPOSTEXITDURATION_OFFSET UNITYSDK_OFFSET(0x1B4601E0)
#define AKSEGMENTINFO_SET_IPREENTRYDURATION_OFFSET UNITYSDK_OFFSET(0x1B45FF00)
#define AKSEGMENTINFO_SET_IREMAININGLOOKAHEADTIME_OFFSET UNITYSDK_OFFSET(0x1B460350)
#define AKSEGMENTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B460A80)
#define AKSEGMENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B45F940)

inline static constexpr unsigned int AkSegmentInfo_TypeDefinitionIndex = 41167;

class AkSegmentInfo : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSEGMENTINFO__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkSegmentInfo* a1)
	{
		return ((::System::IntPtr(*)(::AkSegmentInfo*))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_iCurrentPosition(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SET_ICURRENTPOSITION_OFFSET))(this, a1);
	}

	::System::Int32 get_iCurrentPosition()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GET_ICURRENTPOSITION_OFFSET))(this);
	}

	::System::Void set_iPreEntryDuration(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SET_IPREENTRYDURATION_OFFSET))(this, a1);
	}

	::System::Int32 get_iPreEntryDuration()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GET_IPREENTRYDURATION_OFFSET))(this);
	}

	::System::Void set_iActiveDuration(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SET_IACTIVEDURATION_OFFSET))(this, a1);
	}

	::System::Int32 get_iActiveDuration()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GET_IACTIVEDURATION_OFFSET))(this);
	}

	::System::Void set_iPostExitDuration(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SET_IPOSTEXITDURATION_OFFSET))(this, a1);
	}

	::System::Int32 get_iPostExitDuration()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GET_IPOSTEXITDURATION_OFFSET))(this);
	}

	::System::Void set_iRemainingLookAheadTime(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SET_IREMAININGLOOKAHEADTIME_OFFSET))(this, a1);
	}

	::System::Int32 get_iRemainingLookAheadTime()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GET_IREMAININGLOOKAHEADTIME_OFFSET))(this);
	}

	::System::Void set_fBeatDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SET_FBEATDURATION_OFFSET))(this, a1);
	}

	::System::Single get_fBeatDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GET_FBEATDURATION_OFFSET))(this);
	}

	::System::Void set_fBarDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SET_FBARDURATION_OFFSET))(this, a1);
	}

	::System::Single get_fBarDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GET_FBARDURATION_OFFSET))(this);
	}

	::System::Void set_fGridDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SET_FGRIDDURATION_OFFSET))(this, a1);
	}

	::System::Single get_fGridDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GET_FGRIDDURATION_OFFSET))(this);
	}

	::System::Void set_fGridOffset(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SET_FGRIDOFFSET_OFFSET))(this, a1);
	}

	::System::Single get_fGridOffset()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GET_FGRIDOFFSET_OFFSET))(this);
	}
};
