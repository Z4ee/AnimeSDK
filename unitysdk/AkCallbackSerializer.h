#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/Object.h"

#define AKCALLBACKSERIALIZER_AUDIOSOURCECHANGECALLBACKFUNC_OFFSET UNITYSDK_OFFSET(0x1C4B6080)
#define AKCALLBACKSERIALIZER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C4B5C40)
#define AKCALLBACKSERIALIZER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4B5B20)
#define AKCALLBACKSERIALIZER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C4B5BD0)
#define AKCALLBACKSERIALIZER_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1C4B5A60)
#define AKCALLBACKSERIALIZER_INIT_OFFSET UNITYSDK_OFFSET(0x1C4B5DF0)
#define AKCALLBACKSERIALIZER_LOCK_OFFSET UNITYSDK_OFFSET(0x1C4B5F00)
#define AKCALLBACKSERIALIZER_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1C4B5A70)
#define AKCALLBACKSERIALIZER_SETLOCALOUTPUT_OFFSET UNITYSDK_OFFSET(0x1C4B6000)
#define AKCALLBACKSERIALIZER_TERM_OFFSET UNITYSDK_OFFSET(0x1C4B5E80)
#define AKCALLBACKSERIALIZER_UNLOCK_OFFSET UNITYSDK_OFFSET(0x1C4B5F80)
#define AKCALLBACKSERIALIZER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4B6140)
#define AKCALLBACKSERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B5A50)

inline static constexpr unsigned int AkCallbackSerializer_TypeDefinitionIndex = 31400;

class AkCallbackSerializer : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkCallbackSerializer* obj)
	{
		return ((::System::IntPtr(*)(::AkCallbackSerializer*))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_DISPOSE_1_OFFSET))(this, disposing);
	}

	static ::AKRESULT Init(::System::IntPtr in_pMemory, ::System::UInt32 in_uSize)
	{
		return ((::AKRESULT(*)(::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_INIT_OFFSET))(in_pMemory, in_uSize);
	}

	static ::System::Void Term()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_TERM_OFFSET))();
	}

	static ::System::IntPtr Lock()
	{
		return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_LOCK_OFFSET))();
	}

	static ::System::Void Unlock()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_UNLOCK_OFFSET))();
	}

	static ::System::Void SetLocalOutput(::System::UInt32 in_uErrorLevel)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_SETLOCALOUTPUT_OFFSET))(in_uErrorLevel);
	}

	static ::AKRESULT AudioSourceChangeCallbackFunc(::System::Boolean in_bOtherAudioPlaying, ::System::Object* in_pCookie)
	{
		return ((::AKRESULT(*)(::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_AUDIOSOURCECHANGECALLBACKFUNC_OFFSET))(in_bOtherAudioPlaying, in_pCookie);
	}
};
