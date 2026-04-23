#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkEventCallbackInfo.h"

namespace System { class String; }

#define AKMARKERCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5FB2E0)
#define AKMARKERCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5FB1C0)
#define AKMARKERCALLBACKINFO_GET_STRLABEL_OFFSET UNITYSDK_OFFSET(0x1A5FB5F0)
#define AKMARKERCALLBACKINFO_GET_UIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1A5FB490)
#define AKMARKERCALLBACKINFO_GET_UPOSITION_OFFSET UNITYSDK_OFFSET(0x1A5FB540)
#define AKMARKERCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5FB210)
#define AKMARKERCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5FB710)
#define AKMARKERCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5FB0B0)
#define AKMARKERCALLBACKINFO___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5FB890)
#define AKMARKERCALLBACKINFO___IFIXBASEPROXY_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5FB880)

inline static constexpr unsigned int AkMarkerCallbackInfo_TypeDefinitionIndex = 40316;

class AkMarkerCallbackInfo : public ::AkEventCallbackInfo
{
public:
	::System::IntPtr swigCPtr; // 0x28

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMarkerCallbackInfo* obj)
	{
		return ((::System::IntPtr(*)(::AkMarkerCallbackInfo*))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Dispose(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO_DISPOSE_OFFSET))(this, disposing);
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

	::System::Void __iFixBaseProxy_setCPtr(::System::IntPtr P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO___IFIXBASEPROXY_SETCPTR_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO___IFIXBASEPROXY_DISPOSE_OFFSET))(this, P0);
	}
};
