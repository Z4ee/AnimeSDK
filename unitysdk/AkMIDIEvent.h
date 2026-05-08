#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkMIDICcTypes.h"
#include "unitysdk/AkMIDIEventTypes.h"
#include "unitysdk/System/Object.h"

class AkMIDIEvent_tCc;
class AkMIDIEvent_tChanAftertouch;
class AkMIDIEvent_tGen;
class AkMIDIEvent_tNoteAftertouch;
class AkMIDIEvent_tNoteOnOff;
class AkMIDIEvent_tPitchBend;
class AkMIDIEvent_tProgramChange;

#define AKMIDIEVENT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C0923B0)
#define AKMIDIEVENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C092290)
#define AKMIDIEVENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C092340)
#define AKMIDIEVENT_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1C0921D0)
#define AKMIDIEVENT_GET_BYAFTERTOUCHNOTE_OFFSET UNITYSDK_OFFSET(0x1C093880)
#define AKMIDIEVENT_GET_BYCCVALUE_OFFSET UNITYSDK_OFFSET(0x1C093580)
#define AKMIDIEVENT_GET_BYCC_OFFSET UNITYSDK_OFFSET(0x1C093480)
#define AKMIDIEVENT_GET_BYCHANAFTERTOUCHVALUE_OFFSET UNITYSDK_OFFSET(0x1C093A80)
#define AKMIDIEVENT_GET_BYCHAN_OFFSET UNITYSDK_OFFSET(0x1C0925E0)
#define AKMIDIEVENT_GET_BYNOTEAFTERTOUCHVALUE_OFFSET UNITYSDK_OFFSET(0x1C093980)
#define AKMIDIEVENT_GET_BYONOFFNOTE_OFFSET UNITYSDK_OFFSET(0x1C093280)
#define AKMIDIEVENT_GET_BYPROGRAMNUM_OFFSET UNITYSDK_OFFSET(0x1C093B80)
#define AKMIDIEVENT_GET_BYTYPE_OFFSET UNITYSDK_OFFSET(0x1C093180)
#define AKMIDIEVENT_GET_BYVALUELSB_OFFSET UNITYSDK_OFFSET(0x1C093680)
#define AKMIDIEVENT_GET_BYVALUEMSB_OFFSET UNITYSDK_OFFSET(0x1C093780)
#define AKMIDIEVENT_GET_BYVELOCITY_OFFSET UNITYSDK_OFFSET(0x1C093380)
#define AKMIDIEVENT_GET_CC_OFFSET UNITYSDK_OFFSET(0x1C0928A0)
#define AKMIDIEVENT_GET_CHANAFTERTOUCH_OFFSET UNITYSDK_OFFSET(0x1C092EA0)
#define AKMIDIEVENT_GET_GEN_OFFSET UNITYSDK_OFFSET(0x1C092710)
#define AKMIDIEVENT_GET_NOTEAFTERTOUCH_OFFSET UNITYSDK_OFFSET(0x1C092D20)
#define AKMIDIEVENT_GET_NOTEONOFF_OFFSET UNITYSDK_OFFSET(0x1C092A20)
#define AKMIDIEVENT_GET_PITCHBEND_OFFSET UNITYSDK_OFFSET(0x1C092BA0)
#define AKMIDIEVENT_GET_PROGRAMCHANGE_OFFSET UNITYSDK_OFFSET(0x1C093020)
#define AKMIDIEVENT_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1C0921E0)
#define AKMIDIEVENT_SET_BYAFTERTOUCHNOTE_OFFSET UNITYSDK_OFFSET(0x1C093800)
#define AKMIDIEVENT_SET_BYCCVALUE_OFFSET UNITYSDK_OFFSET(0x1C093500)
#define AKMIDIEVENT_SET_BYCC_OFFSET UNITYSDK_OFFSET(0x1C093400)
#define AKMIDIEVENT_SET_BYCHANAFTERTOUCHVALUE_OFFSET UNITYSDK_OFFSET(0x1C093A00)
#define AKMIDIEVENT_SET_BYCHAN_OFFSET UNITYSDK_OFFSET(0x1C092560)
#define AKMIDIEVENT_SET_BYNOTEAFTERTOUCHVALUE_OFFSET UNITYSDK_OFFSET(0x1C093900)
#define AKMIDIEVENT_SET_BYONOFFNOTE_OFFSET UNITYSDK_OFFSET(0x1C093200)
#define AKMIDIEVENT_SET_BYPROGRAMNUM_OFFSET UNITYSDK_OFFSET(0x1C093B00)
#define AKMIDIEVENT_SET_BYTYPE_OFFSET UNITYSDK_OFFSET(0x1C093100)
#define AKMIDIEVENT_SET_BYVALUELSB_OFFSET UNITYSDK_OFFSET(0x1C093600)
#define AKMIDIEVENT_SET_BYVALUEMSB_OFFSET UNITYSDK_OFFSET(0x1C093700)
#define AKMIDIEVENT_SET_BYVELOCITY_OFFSET UNITYSDK_OFFSET(0x1C093300)
#define AKMIDIEVENT_SET_CC_OFFSET UNITYSDK_OFFSET(0x1C092800)
#define AKMIDIEVENT_SET_CHANAFTERTOUCH_OFFSET UNITYSDK_OFFSET(0x1C092E00)
#define AKMIDIEVENT_SET_GEN_OFFSET UNITYSDK_OFFSET(0x1C092660)
#define AKMIDIEVENT_SET_NOTEAFTERTOUCH_OFFSET UNITYSDK_OFFSET(0x1C092C80)
#define AKMIDIEVENT_SET_NOTEONOFF_OFFSET UNITYSDK_OFFSET(0x1C092980)
#define AKMIDIEVENT_SET_PITCHBEND_OFFSET UNITYSDK_OFFSET(0x1C092B00)
#define AKMIDIEVENT_SET_PROGRAMCHANGE_OFFSET UNITYSDK_OFFSET(0x1C092F80)
#define AKMIDIEVENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C093C00)
#define AKMIDIEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0921C0)

inline static constexpr unsigned int AkMIDIEvent_TypeDefinitionIndex = 31426;

class AkMIDIEvent : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMIDIEvent* obj)
	{
		return ((::System::IntPtr(*)(::AkMIDIEvent*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_byChan(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYCHAN_OFFSET))(this, value);
	}

	::System::Byte get_byChan()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYCHAN_OFFSET))(this);
	}

	::System::Void set_Gen(::AkMIDIEvent_tGen* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDIEvent_tGen*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_GEN_OFFSET))(this, value);
	}

	::AkMIDIEvent_tGen* get_Gen()
	{
		return ((::AkMIDIEvent_tGen*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_GEN_OFFSET))(this);
	}

	::System::Void set_Cc(::AkMIDIEvent_tCc* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDIEvent_tCc*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_CC_OFFSET))(this, value);
	}

	::AkMIDIEvent_tCc* get_Cc()
	{
		return ((::AkMIDIEvent_tCc*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_CC_OFFSET))(this);
	}

	::System::Void set_NoteOnOff(::AkMIDIEvent_tNoteOnOff* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDIEvent_tNoteOnOff*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_NOTEONOFF_OFFSET))(this, value);
	}

	::AkMIDIEvent_tNoteOnOff* get_NoteOnOff()
	{
		return ((::AkMIDIEvent_tNoteOnOff*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_NOTEONOFF_OFFSET))(this);
	}

	::System::Void set_PitchBend(::AkMIDIEvent_tPitchBend* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDIEvent_tPitchBend*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_PITCHBEND_OFFSET))(this, value);
	}

	::AkMIDIEvent_tPitchBend* get_PitchBend()
	{
		return ((::AkMIDIEvent_tPitchBend*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_PITCHBEND_OFFSET))(this);
	}

	::System::Void set_NoteAftertouch(::AkMIDIEvent_tNoteAftertouch* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDIEvent_tNoteAftertouch*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_NOTEAFTERTOUCH_OFFSET))(this, value);
	}

	::AkMIDIEvent_tNoteAftertouch* get_NoteAftertouch()
	{
		return ((::AkMIDIEvent_tNoteAftertouch*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_NOTEAFTERTOUCH_OFFSET))(this);
	}

	::System::Void set_ChanAftertouch(::AkMIDIEvent_tChanAftertouch* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDIEvent_tChanAftertouch*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_CHANAFTERTOUCH_OFFSET))(this, value);
	}

	::AkMIDIEvent_tChanAftertouch* get_ChanAftertouch()
	{
		return ((::AkMIDIEvent_tChanAftertouch*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_CHANAFTERTOUCH_OFFSET))(this);
	}

	::System::Void set_ProgramChange(::AkMIDIEvent_tProgramChange* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDIEvent_tProgramChange*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_PROGRAMCHANGE_OFFSET))(this, value);
	}

	::AkMIDIEvent_tProgramChange* get_ProgramChange()
	{
		return ((::AkMIDIEvent_tProgramChange*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_PROGRAMCHANGE_OFFSET))(this);
	}

	::System::Void set_byType(::AkMIDIEventTypes value)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDIEventTypes))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYTYPE_OFFSET))(this, value);
	}

	::AkMIDIEventTypes get_byType()
	{
		return ((::AkMIDIEventTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYTYPE_OFFSET))(this);
	}

	::System::Void set_byOnOffNote(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYONOFFNOTE_OFFSET))(this, value);
	}

	::System::Byte get_byOnOffNote()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYONOFFNOTE_OFFSET))(this);
	}

	::System::Void set_byVelocity(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYVELOCITY_OFFSET))(this, value);
	}

	::System::Byte get_byVelocity()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYVELOCITY_OFFSET))(this);
	}

	::System::Void set_byCc(::AkMIDICcTypes value)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDICcTypes))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYCC_OFFSET))(this, value);
	}

	::AkMIDICcTypes get_byCc()
	{
		return ((::AkMIDICcTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYCC_OFFSET))(this);
	}

	::System::Void set_byCcValue(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYCCVALUE_OFFSET))(this, value);
	}

	::System::Byte get_byCcValue()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYCCVALUE_OFFSET))(this);
	}

	::System::Void set_byValueLsb(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYVALUELSB_OFFSET))(this, value);
	}

	::System::Byte get_byValueLsb()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYVALUELSB_OFFSET))(this);
	}

	::System::Void set_byValueMsb(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYVALUEMSB_OFFSET))(this, value);
	}

	::System::Byte get_byValueMsb()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYVALUEMSB_OFFSET))(this);
	}

	::System::Void set_byAftertouchNote(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYAFTERTOUCHNOTE_OFFSET))(this, value);
	}

	::System::Byte get_byAftertouchNote()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYAFTERTOUCHNOTE_OFFSET))(this);
	}

	::System::Void set_byNoteAftertouchValue(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYNOTEAFTERTOUCHVALUE_OFFSET))(this, value);
	}

	::System::Byte get_byNoteAftertouchValue()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYNOTEAFTERTOUCHVALUE_OFFSET))(this);
	}

	::System::Void set_byChanAftertouchValue(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYCHANAFTERTOUCHVALUE_OFFSET))(this, value);
	}

	::System::Byte get_byChanAftertouchValue()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYCHANAFTERTOUCHVALUE_OFFSET))(this);
	}

	::System::Void set_byProgramNum(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYPROGRAMNUM_OFFSET))(this, value);
	}

	::System::Byte get_byProgramNum()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYPROGRAMNUM_OFFSET))(this);
	}
};
