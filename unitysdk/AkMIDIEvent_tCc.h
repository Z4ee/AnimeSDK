#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKMIDIEVENT_TCC_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1ECB78A0)
#define AKMIDIEVENT_TCC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ECB7780)
#define AKMIDIEVENT_TCC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ECB7830)
#define AKMIDIEVENT_TCC_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1ECB76C0)
#define AKMIDIEVENT_TCC_GET_BYCC_OFFSET UNITYSDK_OFFSET(0x1ECB7AD0)
#define AKMIDIEVENT_TCC_GET_BYVALUE_OFFSET UNITYSDK_OFFSET(0x1ECB7BD0)
#define AKMIDIEVENT_TCC_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1ECB76D0)
#define AKMIDIEVENT_TCC_SET_BYCC_OFFSET UNITYSDK_OFFSET(0x1ECB7A50)
#define AKMIDIEVENT_TCC_SET_BYVALUE_OFFSET UNITYSDK_OFFSET(0x1ECB7B50)
#define AKMIDIEVENT_TCC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ECB7C50)
#define AKMIDIEVENT_TCC__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECB76B0)

inline static constexpr unsigned int AkMIDIEvent_tCc_TypeDefinitionIndex = 33615;

class AkMIDIEvent_tCc : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMIDIEvent_tCc* obj)
	{
		return ((::System::IntPtr(*)(::AkMIDIEvent_tCc*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_byCc(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_SET_BYCC_OFFSET))(this, value);
	}

	::System::Byte get_byCc()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_GET_BYCC_OFFSET))(this);
	}

	::System::Void set_byValue(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_SET_BYVALUE_OFFSET))(this, value);
	}

	::System::Byte get_byValue()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_GET_BYVALUE_OFFSET))(this);
	}
};
