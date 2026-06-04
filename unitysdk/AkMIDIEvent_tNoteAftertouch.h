#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKMIDIEVENT_TNOTEAFTERTOUCH_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B441620)
#define AKMIDIEVENT_TNOTEAFTERTOUCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B441500)
#define AKMIDIEVENT_TNOTEAFTERTOUCH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4415B0)
#define AKMIDIEVENT_TNOTEAFTERTOUCH_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B43E8B0)
#define AKMIDIEVENT_TNOTEAFTERTOUCH_GET_BYNOTE_OFFSET UNITYSDK_OFFSET(0x1B4418C0)
#define AKMIDIEVENT_TNOTEAFTERTOUCH_GET_BYVALUE_OFFSET UNITYSDK_OFFSET(0x1B441A30)
#define AKMIDIEVENT_TNOTEAFTERTOUCH_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B441410)
#define AKMIDIEVENT_TNOTEAFTERTOUCH_SET_BYNOTE_OFFSET UNITYSDK_OFFSET(0x1B441800)
#define AKMIDIEVENT_TNOTEAFTERTOUCH_SET_BYVALUE_OFFSET UNITYSDK_OFFSET(0x1B441970)
#define AKMIDIEVENT_TNOTEAFTERTOUCH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B441AE0)
#define AKMIDIEVENT_TNOTEAFTERTOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B43EA10)

inline static constexpr unsigned int AkMIDIEvent_tNoteAftertouch_TypeDefinitionIndex = 41137;

class AkMIDIEvent_tNoteAftertouch : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMIDIEvent_tNoteAftertouch* a1)
	{
		return ((::System::IntPtr(*)(::AkMIDIEvent_tNoteAftertouch*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_byNote(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH_SET_BYNOTE_OFFSET))(this, a1);
	}

	::System::Byte get_byNote()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH_GET_BYNOTE_OFFSET))(this);
	}

	::System::Void set_byValue(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH_SET_BYVALUE_OFFSET))(this, a1);
	}

	::System::Byte get_byValue()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEAFTERTOUCH_GET_BYVALUE_OFFSET))(this);
	}
};
