#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKAUDIOSOURCECHANGECALLBACKINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E7E9770)
#define AKAUDIOSOURCECHANGECALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E7E9650)
#define AKAUDIOSOURCECHANGECALLBACKINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E7E9700)
#define AKAUDIOSOURCECHANGECALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1E7E9590)
#define AKAUDIOSOURCECHANGECALLBACKINFO_GET_BOTHERAUDIOPLAYING_OFFSET UNITYSDK_OFFSET(0x1E7E9920)
#define AKAUDIOSOURCECHANGECALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1E7E95A0)
#define AKAUDIOSOURCECHANGECALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7E99A0)
#define AKAUDIOSOURCECHANGECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E9580)

inline static constexpr unsigned int AkAudioSourceChangeCallbackInfo_TypeDefinitionIndex = 32945;

class AkAudioSourceChangeCallbackInfo : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOSOURCECHANGECALLBACKINFO__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOSOURCECHANGECALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkAudioSourceChangeCallbackInfo* obj)
	{
		return ((::System::IntPtr(*)(::AkAudioSourceChangeCallbackInfo*))((::PBYTE)hIl2Cpp + AKAUDIOSOURCECHANGECALLBACKINFO_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOSOURCECHANGECALLBACKINFO_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOSOURCECHANGECALLBACKINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOSOURCECHANGECALLBACKINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOSOURCECHANGECALLBACKINFO_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Boolean get_bOtherAudioPlaying()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOSOURCECHANGECALLBACKINFO_GET_BOTHERAUDIOPLAYING_OFFSET))(this);
	}
};
