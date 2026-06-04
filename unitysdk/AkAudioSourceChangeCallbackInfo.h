#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKAUDIOSOURCECHANGECALLBACKINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B4182E0)
#define AKAUDIOSOURCECHANGECALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B4181C0)
#define AKAUDIOSOURCECHANGECALLBACKINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B418270)
#define AKAUDIOSOURCECHANGECALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B418080)
#define AKAUDIOSOURCECHANGECALLBACKINFO_GET_BOTHERAUDIOPLAYING_OFFSET UNITYSDK_OFFSET(0x1B4184C0)
#define AKAUDIOSOURCECHANGECALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B4180D0)
#define AKAUDIOSOURCECHANGECALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B418570)
#define AKAUDIOSOURCECHANGECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B418070)

inline static constexpr unsigned int AkAudioSourceChangeCallbackInfo_TypeDefinitionIndex = 41100;

class AkAudioSourceChangeCallbackInfo : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOSOURCECHANGECALLBACKINFO__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOSOURCECHANGECALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkAudioSourceChangeCallbackInfo* a1)
	{
		return ((::System::IntPtr(*)(::AkAudioSourceChangeCallbackInfo*))((::PBYTE)hIl2Cpp + AKAUDIOSOURCECHANGECALLBACKINFO_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOSOURCECHANGECALLBACKINFO_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOSOURCECHANGECALLBACKINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOSOURCECHANGECALLBACKINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOSOURCECHANGECALLBACKINFO_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Boolean get_bOtherAudioPlaying()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOSOURCECHANGECALLBACKINFO_GET_BOTHERAUDIOPLAYING_OFFSET))(this);
	}
};
