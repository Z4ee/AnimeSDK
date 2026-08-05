#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKMIDIEVENT_TNOTEAFTERTOUCH_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1FAF8600)
#define AKMIDIEVENT_TNOTEAFTERTOUCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FAF84E0)
#define AKMIDIEVENT_TNOTEAFTERTOUCH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FAF8590)
#define AKMIDIEVENT_TNOTEAFTERTOUCH_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1FAF8420)
#define AKMIDIEVENT_TNOTEAFTERTOUCH_GET_BYNOTE_OFFSET UNITYSDK_OFFSET(0x1FAF8830)
#define AKMIDIEVENT_TNOTEAFTERTOUCH_GET_BYVALUE_OFFSET UNITYSDK_OFFSET(0x1FAF8930)
#define AKMIDIEVENT_TNOTEAFTERTOUCH_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1FAF8430)
#define AKMIDIEVENT_TNOTEAFTERTOUCH_SET_BYNOTE_OFFSET UNITYSDK_OFFSET(0x1FAF87B0)
#define AKMIDIEVENT_TNOTEAFTERTOUCH_SET_BYVALUE_OFFSET UNITYSDK_OFFSET(0x1FAF88B0)
#define AKMIDIEVENT_TNOTEAFTERTOUCH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAF89B0)
#define AKMIDIEVENT_TNOTEAFTERTOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAF8410)

inline static constexpr unsigned int AkMIDIEvent_tNoteAftertouch_TypeDefinitionIndex = 33617;

class AkMIDIEvent_tNoteAftertouch : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMIDIEvent_tNoteAftertouch* obj)
	{
		return ((::System::IntPtr(*)(::AkMIDIEvent_tNoteAftertouch*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_byNote(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH_SET_BYNOTE_OFFSET))(this, value);
	}

	::System::Byte get_byNote()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH_GET_BYNOTE_OFFSET))(this);
	}

	::System::Void set_byValue(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH_SET_BYVALUE_OFFSET))(this, value);
	}

	::System::Byte get_byValue()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH_GET_BYVALUE_OFFSET))(this);
	}
};
