#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKCALLBACKINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C29B160)
#define AKCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C29B040)
#define AKCALLBACKINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C29B0F0)
#define AKCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1C29AF80)
#define AKCALLBACKINFO_GET_GAMEOBJID_OFFSET UNITYSDK_OFFSET(0x1C29B390)
#define AKCALLBACKINFO_GET_PCOOKIE_OFFSET UNITYSDK_OFFSET(0x1C29B310)
#define AKCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1C29AF90)
#define AKCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C29B410)
#define AKCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C29AF70)

inline static constexpr unsigned int AkCallbackInfo_TypeDefinitionIndex = 31399;

class AkCallbackInfo : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCALLBACKINFO__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkCallbackInfo* obj)
	{
		return ((::System::IntPtr(*)(::AkCallbackInfo*))((::PBYTE)hIl2Cpp + AKCALLBACKINFO_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKCALLBACKINFO_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCALLBACKINFO_DISPOSE_1_OFFSET))(this, disposing);
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
