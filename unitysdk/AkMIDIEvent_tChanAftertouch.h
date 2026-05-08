#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKMIDIEVENT_TCHANAFTERTOUCH_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C372E70)
#define AKMIDIEVENT_TCHANAFTERTOUCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C372D50)
#define AKMIDIEVENT_TCHANAFTERTOUCH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C372E00)
#define AKMIDIEVENT_TCHANAFTERTOUCH_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1C372C90)
#define AKMIDIEVENT_TCHANAFTERTOUCH_GET_BYVALUE_OFFSET UNITYSDK_OFFSET(0x1C3730A0)
#define AKMIDIEVENT_TCHANAFTERTOUCH_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1C372CA0)
#define AKMIDIEVENT_TCHANAFTERTOUCH_SET_BYVALUE_OFFSET UNITYSDK_OFFSET(0x1C373020)
#define AKMIDIEVENT_TCHANAFTERTOUCH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C373120)
#define AKMIDIEVENT_TCHANAFTERTOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C372C80)

inline static constexpr unsigned int AkMIDIEvent_tChanAftertouch_TypeDefinitionIndex = 31432;

class AkMIDIEvent_tChanAftertouch : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCHANAFTERTOUCH__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCHANAFTERTOUCH__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMIDIEvent_tChanAftertouch* obj)
	{
		return ((::System::IntPtr(*)(::AkMIDIEvent_tChanAftertouch*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCHANAFTERTOUCH_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCHANAFTERTOUCH_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCHANAFTERTOUCH_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCHANAFTERTOUCH_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCHANAFTERTOUCH_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_byValue(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCHANAFTERTOUCH_SET_BYVALUE_OFFSET))(this, value);
	}

	::System::Byte get_byValue()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCHANAFTERTOUCH_GET_BYVALUE_OFFSET))(this);
	}
};
