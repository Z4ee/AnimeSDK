#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/Object.h"

#define AKCALLBACKSERIALIZER_AUDIOSOURCECHANGECALLBACKFUNC_OFFSET UNITYSDK_OFFSET(0x1D58C390)
#define AKCALLBACKSERIALIZER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D58C1B0)
#define AKCALLBACKSERIALIZER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D58BFC0)
#define AKCALLBACKSERIALIZER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D58C0E0)
#define AKCALLBACKSERIALIZER_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1D58BF10)
#define AKCALLBACKSERIALIZER_INIT_OFFSET UNITYSDK_OFFSET(0x1D588C90)
#define AKCALLBACKSERIALIZER_ISMISSEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D588FF0)
#define AKCALLBACKSERIALIZER_LOCK_OFFSET UNITYSDK_OFFSET(0x1D58AAC0)
#define AKCALLBACKSERIALIZER_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1D58BF60)
#define AKCALLBACKSERIALIZER_SETLOCALOUTPUT_OFFSET UNITYSDK_OFFSET(0x1D5891B0)
#define AKCALLBACKSERIALIZER_TERM_OFFSET UNITYSDK_OFFSET(0x1D588F40)
#define AKCALLBACKSERIALIZER_UNLOCK_OFFSET UNITYSDK_OFFSET(0x1D58ADA0)
#define AKCALLBACKSERIALIZER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D58C4F0)
#define AKCALLBACKSERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D58BF00)

inline static constexpr unsigned int AkCallbackSerializer_TypeDefinitionIndex = 43532;

class AkCallbackSerializer : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkCallbackSerializer* a1)
	{
		return ((::System::IntPtr(*)(::AkCallbackSerializer*))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_DISPOSE_1_OFFSET))(this, a1);
	}

	static ::AKRESULT Init(::System::IntPtr a1, ::System::UInt32 a2)
	{
		return ((::AKRESULT(*)(::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_INIT_OFFSET))(a1, a2);
	}

	static ::System::Void Term()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_TERM_OFFSET))();
	}

	static ::System::Boolean IsMissedCallback()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_ISMISSEDCALLBACK_OFFSET))();
	}

	static ::System::IntPtr Lock()
	{
		return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_LOCK_OFFSET))();
	}

	static ::System::Void Unlock()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_UNLOCK_OFFSET))();
	}

	static ::System::Void SetLocalOutput(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_SETLOCALOUTPUT_OFFSET))(a1);
	}

	static ::AKRESULT AudioSourceChangeCallbackFunc(::System::Boolean a1, ::System::Object* a2)
	{
		return ((::AKRESULT(*)(::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKSERIALIZER_AUDIOSOURCECHANGECALLBACKFUNC_OFFSET))(a1, a2);
	}
};
