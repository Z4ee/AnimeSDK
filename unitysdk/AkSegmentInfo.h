#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKSEGMENTINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E3AB2A0)
#define AKSEGMENTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E3AB180)
#define AKSEGMENTINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E3AB230)
#define AKSEGMENTINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1E3AB0C0)
#define AKSEGMENTINFO_GET_FBARDURATION_OFFSET UNITYSDK_OFFSET(0x1E3ABAF0)
#define AKSEGMENTINFO_GET_FBEATDURATION_OFFSET UNITYSDK_OFFSET(0x1E3AB9E0)
#define AKSEGMENTINFO_GET_FGRIDDURATION_OFFSET UNITYSDK_OFFSET(0x1E3ABC00)
#define AKSEGMENTINFO_GET_FGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x1E3ABD10)
#define AKSEGMENTINFO_GET_IACTIVEDURATION_OFFSET UNITYSDK_OFFSET(0x1E3AB6D0)
#define AKSEGMENTINFO_GET_ICURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x1E3AB4D0)
#define AKSEGMENTINFO_GET_IPOSTEXITDURATION_OFFSET UNITYSDK_OFFSET(0x1E3AB7D0)
#define AKSEGMENTINFO_GET_IPREENTRYDURATION_OFFSET UNITYSDK_OFFSET(0x1E3AB5D0)
#define AKSEGMENTINFO_GET_IREMAININGLOOKAHEADTIME_OFFSET UNITYSDK_OFFSET(0x1E3AB8D0)
#define AKSEGMENTINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1E3AB0D0)
#define AKSEGMENTINFO_SET_FBARDURATION_OFFSET UNITYSDK_OFFSET(0x1E3ABA60)
#define AKSEGMENTINFO_SET_FBEATDURATION_OFFSET UNITYSDK_OFFSET(0x1E3AB950)
#define AKSEGMENTINFO_SET_FGRIDDURATION_OFFSET UNITYSDK_OFFSET(0x1E3ABB70)
#define AKSEGMENTINFO_SET_FGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x1E3ABC80)
#define AKSEGMENTINFO_SET_IACTIVEDURATION_OFFSET UNITYSDK_OFFSET(0x1E3AB650)
#define AKSEGMENTINFO_SET_ICURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x1E3AB450)
#define AKSEGMENTINFO_SET_IPOSTEXITDURATION_OFFSET UNITYSDK_OFFSET(0x1E3AB750)
#define AKSEGMENTINFO_SET_IPREENTRYDURATION_OFFSET UNITYSDK_OFFSET(0x1E3AB550)
#define AKSEGMENTINFO_SET_IREMAININGLOOKAHEADTIME_OFFSET UNITYSDK_OFFSET(0x1E3AB850)
#define AKSEGMENTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3ABD90)
#define AKSEGMENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3AB0B0)

inline static constexpr unsigned int AkSegmentInfo_TypeDefinitionIndex = 33012;

class AkSegmentInfo : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

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
