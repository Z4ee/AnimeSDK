#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/Object.h"

#define AKBANKCALLBACKINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1EEB25C0)
#define AKBANKCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EEB23D0)
#define AKBANKCALLBACKINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EEB24F0)
#define AKBANKCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEB2320)
#define AKBANKCALLBACKINFO_GET_BANKID_OFFSET UNITYSDK_OFFSET(0x1EEB27A0)
#define AKBANKCALLBACKINFO_GET_INMEMORYBANKPTR_OFFSET UNITYSDK_OFFSET(0x1EEB2850)
#define AKBANKCALLBACKINFO_GET_LOADRESULT_OFFSET UNITYSDK_OFFSET(0x1EEB2900)
#define AKBANKCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEB2370)
#define AKBANKCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EEB29B0)
#define AKBANKCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEB2310)

inline static constexpr unsigned int AkBankCallbackInfo_TypeDefinitionIndex = 43528;

class AkBankCallbackInfo : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkBankCallbackInfo* a1)
	{
		return ((::System::IntPtr(*)(::AkBankCallbackInfo*))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::UInt32 get_bankID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_GET_BANKID_OFFSET))(this);
	}

	::System::IntPtr get_inMemoryBankPtr()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_GET_INMEMORYBANKPTR_OFFSET))(this);
	}

	::AKRESULT get_loadResult()
	{
		return ((::AKRESULT(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_GET_LOADRESULT_OFFSET))(this);
	}
};
