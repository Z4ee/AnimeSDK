#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkEventCallbackInfo.h"

namespace System { class String; }

#define AKMARKERCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B445550)
#define AKMARKERCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B445430)
#define AKMARKERCALLBACKINFO_GET_STRLABEL_OFFSET UNITYSDK_OFFSET(0x1B4458A0)
#define AKMARKERCALLBACKINFO_GET_UIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1B445740)
#define AKMARKERCALLBACKINFO_GET_UPOSITION_OFFSET UNITYSDK_OFFSET(0x1B4457F0)
#define AKMARKERCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B445480)
#define AKMARKERCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B4459C0)
#define AKMARKERCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B445320)
#define AKMARKERCALLBACKINFO___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B445B40)
#define AKMARKERCALLBACKINFO___IFIXBASEPROXY_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B445B30)

inline static constexpr unsigned int AkMarkerCallbackInfo_TypeDefinitionIndex = 41143;

class AkMarkerCallbackInfo : public ::AkEventCallbackInfo
{
public:
	::System::IntPtr swigCPtr; // 0x28

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMarkerCallbackInfo* a1)
	{
		return ((::System::IntPtr(*)(::AkMarkerCallbackInfo*))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Dispose(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO_DISPOSE_OFFSET))(this, a1);
	}

	::System::UInt32 get_uIdentifier()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO_GET_UIDENTIFIER_OFFSET))(this);
	}

	::System::UInt32 get_uPosition()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO_GET_UPOSITION_OFFSET))(this);
	}

	::System::String* get_strLabel()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO_GET_STRLABEL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO___IFIXBASEPROXY_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO___IFIXBASEPROXY_DISPOSE_OFFSET))(this, a1);
	}
};
