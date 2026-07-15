#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKCALLBACKINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B957F00)
#define AKCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B957D10)
#define AKCALLBACKINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B957E30)
#define AKCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B957C60)
#define AKCALLBACKINFO_GET_GAMEOBJID_OFFSET UNITYSDK_OFFSET(0x1B958190)
#define AKCALLBACKINFO_GET_PCOOKIE_OFFSET UNITYSDK_OFFSET(0x1B9580E0)
#define AKCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B957CB0)
#define AKCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B958240)
#define AKCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B957C50)

inline static constexpr unsigned int AkCallbackInfo_TypeDefinitionIndex = 41920;

class AkCallbackInfo : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCALLBACKINFO__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkCallbackInfo* a1)
	{
		return ((::System::IntPtr(*)(::AkCallbackInfo*))((::PBYTE)hIl2Cpp + AKCALLBACKINFO_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKCALLBACKINFO_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCALLBACKINFO_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::IntPtr get_pCookie()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKINFO_GET_PCOOKIE_OFFSET))(this);
	}

	::System::UInt64 get_gameObjID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKINFO_GET_GAMEOBJID_OFFSET))(this);
	}
};
