#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkEventCallbackInfo.h"
#include "unitysdk/AkMIDICcTypes.h"
#include "unitysdk/AkMIDIEventTypes.h"

#define AKMIDIEVENTCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DA96680)
#define AKMIDIEVENTCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1DA96560)
#define AKMIDIEVENTCALLBACKINFO_GET_BYAFTERTOUCHNOTE_OFFSET UNITYSDK_OFFSET(0x1DA96F50)
#define AKMIDIEVENTCALLBACKINFO_GET_BYCCVALUE_OFFSET UNITYSDK_OFFSET(0x1DA96D40)
#define AKMIDIEVENTCALLBACKINFO_GET_BYCC_OFFSET UNITYSDK_OFFSET(0x1DA96C90)
#define AKMIDIEVENTCALLBACKINFO_GET_BYCHANAFTERTOUCHVALUE_OFFSET UNITYSDK_OFFSET(0x1DA970B0)
#define AKMIDIEVENTCALLBACKINFO_GET_BYCHAN_OFFSET UNITYSDK_OFFSET(0x1DA96870)
#define AKMIDIEVENTCALLBACKINFO_GET_BYNOTEAFTERTOUCHVALUE_OFFSET UNITYSDK_OFFSET(0x1DA97000)
#define AKMIDIEVENTCALLBACKINFO_GET_BYONOFFNOTE_OFFSET UNITYSDK_OFFSET(0x1DA96B30)
#define AKMIDIEVENTCALLBACKINFO_GET_BYPARAM1_OFFSET UNITYSDK_OFFSET(0x1DA96920)
#define AKMIDIEVENTCALLBACKINFO_GET_BYPARAM2_OFFSET UNITYSDK_OFFSET(0x1DA969D0)
#define AKMIDIEVENTCALLBACKINFO_GET_BYPROGRAMNUM_OFFSET UNITYSDK_OFFSET(0x1DA97160)
#define AKMIDIEVENTCALLBACKINFO_GET_BYTYPE_OFFSET UNITYSDK_OFFSET(0x1DA96A80)
#define AKMIDIEVENTCALLBACKINFO_GET_BYVALUELSB_OFFSET UNITYSDK_OFFSET(0x1DA96DF0)
#define AKMIDIEVENTCALLBACKINFO_GET_BYVALUEMSB_OFFSET UNITYSDK_OFFSET(0x1DA96EA0)
#define AKMIDIEVENTCALLBACKINFO_GET_BYVELOCITY_OFFSET UNITYSDK_OFFSET(0x1DA96BE0)
#define AKMIDIEVENTCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1DA965B0)
#define AKMIDIEVENTCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DA97210)
#define AKMIDIEVENTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA96450)

inline static constexpr unsigned int AkMIDIEventCallbackInfo_TypeDefinitionIndex = 43566;

class AkMIDIEventCallbackInfo : public ::AkEventCallbackInfo
{
public:
	::System::IntPtr swigCPtr; // 0x28

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMIDIEventCallbackInfo* a1)
	{
		return ((::System::IntPtr(*)(::AkMIDIEventCallbackInfo*))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Dispose(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_DISPOSE_OFFSET))(this, a1);
	}

	::System::Byte get_byChan()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYCHAN_OFFSET))(this);
	}

	::System::Byte get_byParam1()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYPARAM1_OFFSET))(this);
	}

	::System::Byte get_byParam2()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYPARAM2_OFFSET))(this);
	}

	::AkMIDIEventTypes get_byType()
	{
		return ((::AkMIDIEventTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYTYPE_OFFSET))(this);
	}

	::System::Byte get_byOnOffNote()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYONOFFNOTE_OFFSET))(this);
	}

	::System::Byte get_byVelocity()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYVELOCITY_OFFSET))(this);
	}

	::AkMIDICcTypes get_byCc()
	{
		return ((::AkMIDICcTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYCC_OFFSET))(this);
	}

	::System::Byte get_byCcValue()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYCCVALUE_OFFSET))(this);
	}

	::System::Byte get_byValueLsb()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYVALUELSB_OFFSET))(this);
	}

	::System::Byte get_byValueMsb()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYVALUEMSB_OFFSET))(this);
	}

	::System::Byte get_byAftertouchNote()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYAFTERTOUCHNOTE_OFFSET))(this);
	}

	::System::Byte get_byNoteAftertouchValue()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYNOTEAFTERTOUCHVALUE_OFFSET))(this);
	}

	::System::Byte get_byChanAftertouchValue()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYCHANAFTERTOUCHVALUE_OFFSET))(this);
	}

	::System::Byte get_byProgramNum()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYPROGRAMNUM_OFFSET))(this);
	}
};
