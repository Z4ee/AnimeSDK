#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/Object.h"

#define AKBANKCALLBACKINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C1270B0)
#define AKBANKCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C126F90)
#define AKBANKCALLBACKINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C127040)
#define AKBANKCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1C126ED0)
#define AKBANKCALLBACKINFO_GET_BANKID_OFFSET UNITYSDK_OFFSET(0x1C127260)
#define AKBANKCALLBACKINFO_GET_INMEMORYBANKPTR_OFFSET UNITYSDK_OFFSET(0x1C1272E0)
#define AKBANKCALLBACKINFO_GET_LOADRESULT_OFFSET UNITYSDK_OFFSET(0x1C127360)
#define AKBANKCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1C126EE0)
#define AKBANKCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C1273E0)
#define AKBANKCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C126EC0)

inline static constexpr unsigned int AkBankCallbackInfo_TypeDefinitionIndex = 31396;

class AkBankCallbackInfo : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkBankCallbackInfo* obj)
	{
		return ((::System::IntPtr(*)(::AkBankCallbackInfo*))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_DISPOSE_1_OFFSET))(this, disposing);
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
