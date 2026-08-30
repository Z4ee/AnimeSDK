#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKAUDIOINTERRUPTIONCALLBACKINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D57F4F0)
#define AKAUDIOINTERRUPTIONCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D57F300)
#define AKAUDIOINTERRUPTIONCALLBACKINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D57F420)
#define AKAUDIOINTERRUPTIONCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1D57F250)
#define AKAUDIOINTERRUPTIONCALLBACKINFO_GET_BENTERINTERRUPTION_OFFSET UNITYSDK_OFFSET(0x1D57F6D0)
#define AKAUDIOINTERRUPTIONCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1D57F2A0)
#define AKAUDIOINTERRUPTIONCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D57F780)
#define AKAUDIOINTERRUPTIONCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D57F240)

inline static constexpr unsigned int AkAudioInterruptionCallbackInfo_TypeDefinitionIndex = 43524;

class AkAudioInterruptionCallbackInfo : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkAudioInterruptionCallbackInfo* a1)
	{
		return ((::System::IntPtr(*)(::AkAudioInterruptionCallbackInfo*))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Boolean get_bEnterInterruption()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO_GET_BENTERINTERRUPTION_OFFSET))(this);
	}
};
