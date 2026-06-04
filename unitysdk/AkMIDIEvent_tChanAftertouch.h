#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKMIDIEVENT_TCHANAFTERTOUCH_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B4408F0)
#define AKMIDIEVENT_TCHANAFTERTOUCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B4407D0)
#define AKMIDIEVENT_TCHANAFTERTOUCH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B440880)
#define AKMIDIEVENT_TCHANAFTERTOUCH_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B43EB40)
#define AKMIDIEVENT_TCHANAFTERTOUCH_GET_BYVALUE_OFFSET UNITYSDK_OFFSET(0x1B440B90)
#define AKMIDIEVENT_TCHANAFTERTOUCH_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B4406E0)
#define AKMIDIEVENT_TCHANAFTERTOUCH_SET_BYVALUE_OFFSET UNITYSDK_OFFSET(0x1B440AD0)
#define AKMIDIEVENT_TCHANAFTERTOUCH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B440C40)
#define AKMIDIEVENT_TCHANAFTERTOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B43ECA0)

inline static constexpr unsigned int AkMIDIEvent_tChanAftertouch_TypeDefinitionIndex = 41138;

class AkMIDIEvent_tChanAftertouch : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCHANAFTERTOUCH__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCHANAFTERTOUCH__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMIDIEvent_tChanAftertouch* a1)
	{
		return ((::System::IntPtr(*)(::AkMIDIEvent_tChanAftertouch*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCHANAFTERTOUCH_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCHANAFTERTOUCH_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCHANAFTERTOUCH_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCHANAFTERTOUCH_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCHANAFTERTOUCH_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_byValue(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCHANAFTERTOUCH_SET_BYVALUE_OFFSET))(this, a1);
	}

	::System::Byte get_byValue()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCHANAFTERTOUCH_GET_BYVALUE_OFFSET))(this);
	}
};
