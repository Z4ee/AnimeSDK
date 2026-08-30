#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKRAMP_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1EEED6A0)
#define AKRAMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EEED4B0)
#define AKRAMP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EEED5D0)
#define AKRAMP_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEED400)
#define AKRAMP_GET_FNEXT_OFFSET UNITYSDK_OFFSET(0x1EEEDBD0)
#define AKRAMP_GET_FPREV_OFFSET UNITYSDK_OFFSET(0x1EEEDA60)
#define AKRAMP_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEED450)
#define AKRAMP_SET_FNEXT_OFFSET UNITYSDK_OFFSET(0x1EEEDB10)
#define AKRAMP_SET_FPREV_OFFSET UNITYSDK_OFFSET(0x1EEED9A0)
#define AKRAMP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EEED880)
#define AKRAMP__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1EEED900)
#define AKRAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEED3F0)

inline static constexpr unsigned int AkRamp_TypeDefinitionIndex = 43589;

class AkRamp : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKRAMP__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRAMP__CTOR_1_OFFSET))(this);
	}

	::System::Void _ctor_2(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKRAMP__CTOR_2_OFFSET))(this, a1, a2);
	}

	static ::System::IntPtr getCPtr(::AkRamp* a1)
	{
		return ((::System::IntPtr(*)(::AkRamp*))((::PBYTE)hIl2Cpp + AKRAMP_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKRAMP_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRAMP_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRAMP_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKRAMP_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_fPrev(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKRAMP_SET_FPREV_OFFSET))(this, a1);
	}

	::System::Single get_fPrev()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRAMP_GET_FPREV_OFFSET))(this);
	}

	::System::Void set_fNext(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKRAMP_SET_FNEXT_OFFSET))(this, a1);
	}

	::System::Single get_fNext()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRAMP_GET_FNEXT_OFFSET))(this);
	}
};
