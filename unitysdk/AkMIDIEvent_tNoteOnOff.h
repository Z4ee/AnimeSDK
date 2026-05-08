#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKMIDIEVENT_TNOTEONOFF_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C2A1160)
#define AKMIDIEVENT_TNOTEONOFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C2A1040)
#define AKMIDIEVENT_TNOTEONOFF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C2A10F0)
#define AKMIDIEVENT_TNOTEONOFF_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1C2A0F80)
#define AKMIDIEVENT_TNOTEONOFF_GET_BYNOTE_OFFSET UNITYSDK_OFFSET(0x1C2A1390)
#define AKMIDIEVENT_TNOTEONOFF_GET_BYVELOCITY_OFFSET UNITYSDK_OFFSET(0x1C2A1490)
#define AKMIDIEVENT_TNOTEONOFF_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1C2A0F90)
#define AKMIDIEVENT_TNOTEONOFF_SET_BYNOTE_OFFSET UNITYSDK_OFFSET(0x1C2A1310)
#define AKMIDIEVENT_TNOTEONOFF_SET_BYVELOCITY_OFFSET UNITYSDK_OFFSET(0x1C2A1410)
#define AKMIDIEVENT_TNOTEONOFF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C2A1510)
#define AKMIDIEVENT_TNOTEONOFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A0F70)

inline static constexpr unsigned int AkMIDIEvent_tNoteOnOff_TypeDefinitionIndex = 31428;

class AkMIDIEvent_tNoteOnOff : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMIDIEvent_tNoteOnOff* obj)
	{
		return ((::System::IntPtr(*)(::AkMIDIEvent_tNoteOnOff*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_byNote(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_SET_BYNOTE_OFFSET))(this, value);
	}

	::System::Byte get_byNote()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_GET_BYNOTE_OFFSET))(this);
	}

	::System::Void set_byVelocity(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_SET_BYVELOCITY_OFFSET))(this, value);
	}

	::System::Byte get_byVelocity()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_GET_BYVELOCITY_OFFSET))(this);
	}
};
