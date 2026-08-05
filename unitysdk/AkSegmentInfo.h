#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKSEGMENTINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1F7EEBE0)
#define AKSEGMENTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F7EEAC0)
#define AKSEGMENTINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F7EEB70)
#define AKSEGMENTINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1F7EEA00)
#define AKSEGMENTINFO_GET_FBARDURATION_OFFSET UNITYSDK_OFFSET(0x1F7EF430)
#define AKSEGMENTINFO_GET_FBEATDURATION_OFFSET UNITYSDK_OFFSET(0x1F7EF320)
#define AKSEGMENTINFO_GET_FGRIDDURATION_OFFSET UNITYSDK_OFFSET(0x1F7EF540)
#define AKSEGMENTINFO_GET_FGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x1F7EF650)
#define AKSEGMENTINFO_GET_IACTIVEDURATION_OFFSET UNITYSDK_OFFSET(0x1F7EF010)
#define AKSEGMENTINFO_GET_ICURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F7EEE10)
#define AKSEGMENTINFO_GET_IPOSTEXITDURATION_OFFSET UNITYSDK_OFFSET(0x1F7EF110)
#define AKSEGMENTINFO_GET_IPREENTRYDURATION_OFFSET UNITYSDK_OFFSET(0x1F7EEF10)
#define AKSEGMENTINFO_GET_IREMAININGLOOKAHEADTIME_OFFSET UNITYSDK_OFFSET(0x1F7EF210)
#define AKSEGMENTINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1F7EEA10)
#define AKSEGMENTINFO_SET_FBARDURATION_OFFSET UNITYSDK_OFFSET(0x1F7EF3A0)
#define AKSEGMENTINFO_SET_FBEATDURATION_OFFSET UNITYSDK_OFFSET(0x1F7EF290)
#define AKSEGMENTINFO_SET_FGRIDDURATION_OFFSET UNITYSDK_OFFSET(0x1F7EF4B0)
#define AKSEGMENTINFO_SET_FGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x1F7EF5C0)
#define AKSEGMENTINFO_SET_IACTIVEDURATION_OFFSET UNITYSDK_OFFSET(0x1F7EEF90)
#define AKSEGMENTINFO_SET_ICURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F7EED90)
#define AKSEGMENTINFO_SET_IPOSTEXITDURATION_OFFSET UNITYSDK_OFFSET(0x1F7EF090)
#define AKSEGMENTINFO_SET_IPREENTRYDURATION_OFFSET UNITYSDK_OFFSET(0x1F7EEE90)
#define AKSEGMENTINFO_SET_IREMAININGLOOKAHEADTIME_OFFSET UNITYSDK_OFFSET(0x1F7EF190)
#define AKSEGMENTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7EF6D0)
#define AKSEGMENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7EE9F0)

inline static constexpr unsigned int AkSegmentInfo_TypeDefinitionIndex = 33647;

class AkSegmentInfo : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSEGMENTINFO__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkSegmentInfo* obj)
	{
		return ((::System::IntPtr(*)(::AkSegmentInfo*))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_iCurrentPosition(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SET_ICURRENTPOSITION_OFFSET))(this, value);
	}

	::System::Int32 get_iCurrentPosition()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GET_ICURRENTPOSITION_OFFSET))(this);
	}

	::System::Void set_iPreEntryDuration(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SET_IPREENTRYDURATION_OFFSET))(this, value);
	}

	::System::Int32 get_iPreEntryDuration()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GET_IPREENTRYDURATION_OFFSET))(this);
	}

	::System::Void set_iActiveDuration(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SET_IACTIVEDURATION_OFFSET))(this, value);
	}

	::System::Int32 get_iActiveDuration()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GET_IACTIVEDURATION_OFFSET))(this);
	}

	::System::Void set_iPostExitDuration(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SET_IPOSTEXITDURATION_OFFSET))(this, value);
	}

	::System::Int32 get_iPostExitDuration()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GET_IPOSTEXITDURATION_OFFSET))(this);
	}

	::System::Void set_iRemainingLookAheadTime(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SET_IREMAININGLOOKAHEADTIME_OFFSET))(this, value);
	}

	::System::Int32 get_iRemainingLookAheadTime()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GET_IREMAININGLOOKAHEADTIME_OFFSET))(this);
	}

	::System::Void set_fBeatDuration(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SET_FBEATDURATION_OFFSET))(this, value);
	}

	::System::Single get_fBeatDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GET_FBEATDURATION_OFFSET))(this);
	}

	::System::Void set_fBarDuration(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SET_FBARDURATION_OFFSET))(this, value);
	}

	::System::Single get_fBarDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GET_FBARDURATION_OFFSET))(this);
	}

	::System::Void set_fGridDuration(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SET_FGRIDDURATION_OFFSET))(this, value);
	}

	::System::Single get_fGridDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GET_FGRIDDURATION_OFFSET))(this);
	}

	::System::Void set_fGridOffset(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_SET_FGRIDOFFSET_OFFSET))(this, value);
	}

	::System::Single get_fGridOffset()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSEGMENTINFO_GET_FGRIDOFFSET_OFFSET))(this);
	}
};
