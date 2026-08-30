#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKMIDIEVENT_TCC_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1DA932C0)
#define AKMIDIEVENT_TCC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DA930D0)
#define AKMIDIEVENT_TCC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DA931F0)
#define AKMIDIEVENT_TCC_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1DA93020)
#define AKMIDIEVENT_TCC_GET_BYCC_OFFSET UNITYSDK_OFFSET(0x1DA93560)
#define AKMIDIEVENT_TCC_GET_BYVALUE_OFFSET UNITYSDK_OFFSET(0x1DA936D0)
#define AKMIDIEVENT_TCC_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1DA93070)
#define AKMIDIEVENT_TCC_SET_BYCC_OFFSET UNITYSDK_OFFSET(0x1DA934A0)
#define AKMIDIEVENT_TCC_SET_BYVALUE_OFFSET UNITYSDK_OFFSET(0x1DA93610)
#define AKMIDIEVENT_TCC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DA93780)
#define AKMIDIEVENT_TCC__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA93010)

inline static constexpr unsigned int AkMIDIEvent_tCc_TypeDefinitionIndex = 43561;

class AkMIDIEvent_tCc : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMIDIEvent_tCc* a1)
	{
		return ((::System::IntPtr(*)(::AkMIDIEvent_tCc*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_byCc(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_SET_BYCC_OFFSET))(this, a1);
	}

	::System::Byte get_byCc()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_GET_BYCC_OFFSET))(this);
	}

	::System::Void set_byValue(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_SET_BYVALUE_OFFSET))(this, a1);
	}

	::System::Byte get_byValue()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_GET_BYVALUE_OFFSET))(this);
	}
};
