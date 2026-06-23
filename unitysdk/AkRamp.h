#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKRAMP_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E5F46A0)
#define AKRAMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E5F4580)
#define AKRAMP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E5F4630)
#define AKRAMP_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1E5F44C0)
#define AKRAMP_GET_FNEXT_OFFSET UNITYSDK_OFFSET(0x1E5F4B10)
#define AKRAMP_GET_FPREV_OFFSET UNITYSDK_OFFSET(0x1E5F4A00)
#define AKRAMP_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1E5F44D0)
#define AKRAMP_SET_FNEXT_OFFSET UNITYSDK_OFFSET(0x1E5F4A80)
#define AKRAMP_SET_FPREV_OFFSET UNITYSDK_OFFSET(0x1E5F4970)
#define AKRAMP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5F4850)
#define AKRAMP__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E5F48D0)
#define AKRAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F44B0)

inline static constexpr unsigned int AkRamp_TypeDefinitionIndex = 33008;

class AkRamp : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKRAMP__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRAMP__CTOR_1_OFFSET))(this);
	}

	::System::Void _ctor_2(::System::Single in_fPrev, ::System::Single in_fNext)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKRAMP__CTOR_2_OFFSET))(this, in_fPrev, in_fNext);
	}

	static ::System::IntPtr getCPtr(::AkRamp* obj)
	{
		return ((::System::IntPtr(*)(::AkRamp*))((::PBYTE)hIl2Cpp + AKRAMP_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKRAMP_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRAMP_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRAMP_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKRAMP_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_fPrev(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKRAMP_SET_FPREV_OFFSET))(this, value);
	}

	::System::Single get_fPrev()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRAMP_GET_FPREV_OFFSET))(this);
	}

	::System::Void set_fNext(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKRAMP_SET_FNEXT_OFFSET))(this, value);
	}

	::System::Single get_fNext()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRAMP_GET_FNEXT_OFFSET))(this);
	}
};
