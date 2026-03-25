#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKAUDIOINTERRUPTIONCALLBACKINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18B90450)
#define AKAUDIOINTERRUPTIONCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B90360)
#define AKAUDIOINTERRUPTIONCALLBACKINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18B903E0)
#define AKAUDIOINTERRUPTIONCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x18B90250)
#define AKAUDIOINTERRUPTIONCALLBACKINFO_GET_BENTERINTERRUPTION_OFFSET UNITYSDK_OFFSET(0x18B905F0)
#define AKAUDIOINTERRUPTIONCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x18B902A0)
#define AKAUDIOINTERRUPTIONCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18B906A0)
#define AKAUDIOINTERRUPTIONCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18B90240)

inline static constexpr unsigned int AkAudioInterruptionCallbackInfo_TypeDefinitionIndex = 34452;

class AkAudioInterruptionCallbackInfo : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkAudioInterruptionCallbackInfo* obj)
	{
		return ((::System::IntPtr(*)(::AkAudioInterruptionCallbackInfo*))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Boolean get_bEnterInterruption()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO_GET_BENTERINTERRUPTION_OFFSET))(this);
	}
};
