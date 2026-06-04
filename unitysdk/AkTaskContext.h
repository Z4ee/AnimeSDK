#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKTASKCONTEXT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B4AEA90)
#define AKTASKCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B4AE970)
#define AKTASKCONTEXT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4AEA20)
#define AKTASKCONTEXT_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B4AE830)
#define AKTASKCONTEXT_GET_UIDXTHREAD_OFFSET UNITYSDK_OFFSET(0x1B4AED30)
#define AKTASKCONTEXT_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B4AE880)
#define AKTASKCONTEXT_SET_UIDXTHREAD_OFFSET UNITYSDK_OFFSET(0x1B4AEC70)
#define AKTASKCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B4AEDE0)
#define AKTASKCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AE820)

inline static constexpr unsigned int AkTaskContext_TypeDefinitionIndex = 41174;

class AkTaskContext : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTASKCONTEXT__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTASKCONTEXT__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkTaskContext* a1)
	{
		return ((::System::IntPtr(*)(::AkTaskContext*))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_uIdxThread(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_SET_UIDXTHREAD_OFFSET))(this, a1);
	}

	::System::UInt32 get_uIdxThread()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_GET_UIDXTHREAD_OFFSET))(this);
	}
};
