#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKTASKCONTEXT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C4CCD90)
#define AKTASKCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4CCC70)
#define AKTASKCONTEXT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C4CCD20)
#define AKTASKCONTEXT_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1C4CCBB0)
#define AKTASKCONTEXT_GET_UIDXTHREAD_OFFSET UNITYSDK_OFFSET(0x1C4CCFC0)
#define AKTASKCONTEXT_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1C4CCBC0)
#define AKTASKCONTEXT_SET_UIDXTHREAD_OFFSET UNITYSDK_OFFSET(0x1C4CCF40)
#define AKTASKCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4CD040)
#define AKTASKCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4CCBA0)

inline static constexpr unsigned int AkTaskContext_TypeDefinitionIndex = 31468;

class AkTaskContext : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTASKCONTEXT__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTASKCONTEXT__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkTaskContext* obj)
	{
		return ((::System::IntPtr(*)(::AkTaskContext*))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_uIdxThread(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_SET_UIDXTHREAD_OFFSET))(this, value);
	}

	::System::UInt32 get_uIdxThread()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_GET_UIDXTHREAD_OFFSET))(this);
	}
};
