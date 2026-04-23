#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkEventCallbackInfo.h"

#define AKDURATIONCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5E40B0)
#define AKDURATIONCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5E3F90)
#define AKDURATIONCALLBACKINFO_GET_AUDIONODEID_OFFSET UNITYSDK_OFFSET(0x1A5E4570)
#define AKDURATIONCALLBACKINFO_GET_BSTREAMING_OFFSET UNITYSDK_OFFSET(0x1A5E46D0)
#define AKDURATIONCALLBACKINFO_GET_FDURATION_OFFSET UNITYSDK_OFFSET(0x1A5E4410)
#define AKDURATIONCALLBACKINFO_GET_FESTIMATEDDURATION_OFFSET UNITYSDK_OFFSET(0x1A5E44C0)
#define AKDURATIONCALLBACKINFO_GET_MEDIAID_OFFSET UNITYSDK_OFFSET(0x1A5E4620)
#define AKDURATIONCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5D74E0)
#define AKDURATIONCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5E4780)
#define AKDURATIONCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5D8520)
#define AKDURATIONCALLBACKINFO___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5E49C0)
#define AKDURATIONCALLBACKINFO___IFIXBASEPROXY_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5E48F0)

inline static constexpr unsigned int AkDurationCallbackInfo_TypeDefinitionIndex = 40291;

class AkDurationCallbackInfo : public ::AkEventCallbackInfo
{
public:
	::System::IntPtr swigCPtr; // 0x28

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDURATIONCALLBACKINFO__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDURATIONCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkDurationCallbackInfo* obj)
	{
		return ((::System::IntPtr(*)(::AkDurationCallbackInfo*))((::PBYTE)hIl2Cpp + AKDURATIONCALLBACKINFO_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDURATIONCALLBACKINFO_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Dispose(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDURATIONCALLBACKINFO_DISPOSE_OFFSET))(this, disposing);
	}

	::System::Single get_fDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDURATIONCALLBACKINFO_GET_FDURATION_OFFSET))(this);
	}

	::System::Single get_fEstimatedDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDURATIONCALLBACKINFO_GET_FESTIMATEDDURATION_OFFSET))(this);
	}

	::System::UInt32 get_audioNodeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDURATIONCALLBACKINFO_GET_AUDIONODEID_OFFSET))(this);
	}

	::System::UInt32 get_mediaID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDURATIONCALLBACKINFO_GET_MEDIAID_OFFSET))(this);
	}

	::System::Boolean get_bStreaming()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDURATIONCALLBACKINFO_GET_BSTREAMING_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_setCPtr(::System::IntPtr P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDURATIONCALLBACKINFO___IFIXBASEPROXY_SETCPTR_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDURATIONCALLBACKINFO___IFIXBASEPROXY_DISPOSE_OFFSET))(this, P0);
	}
};
