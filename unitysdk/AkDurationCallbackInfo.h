#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkEventCallbackInfo.h"

#define AKDURATIONCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B42DE50)
#define AKDURATIONCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B42DD30)
#define AKDURATIONCALLBACKINFO_GET_AUDIONODEID_OFFSET UNITYSDK_OFFSET(0x1B42E390)
#define AKDURATIONCALLBACKINFO_GET_BSTREAMING_OFFSET UNITYSDK_OFFSET(0x1B42E4F0)
#define AKDURATIONCALLBACKINFO_GET_FDURATION_OFFSET UNITYSDK_OFFSET(0x1B42E230)
#define AKDURATIONCALLBACKINFO_GET_FESTIMATEDDURATION_OFFSET UNITYSDK_OFFSET(0x1B42E2E0)
#define AKDURATIONCALLBACKINFO_GET_MEDIAID_OFFSET UNITYSDK_OFFSET(0x1B42E440)
#define AKDURATIONCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B421480)
#define AKDURATIONCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B42E5A0)
#define AKDURATIONCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B421F40)
#define AKDURATIONCALLBACKINFO___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B42E7E0)
#define AKDURATIONCALLBACKINFO___IFIXBASEPROXY_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B42E710)

inline static constexpr unsigned int AkDurationCallbackInfo_TypeDefinitionIndex = 41118;

class AkDurationCallbackInfo : public ::AkEventCallbackInfo
{
public:
	::System::IntPtr swigCPtr; // 0x28

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDURATIONCALLBACKINFO__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDURATIONCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkDurationCallbackInfo* a1)
	{
		return ((::System::IntPtr(*)(::AkDurationCallbackInfo*))((::PBYTE)hIl2Cpp + AKDURATIONCALLBACKINFO_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDURATIONCALLBACKINFO_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Dispose(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDURATIONCALLBACKINFO_DISPOSE_OFFSET))(this, a1);
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

	::System::Void __iFixBaseProxy_setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDURATIONCALLBACKINFO___IFIXBASEPROXY_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDURATIONCALLBACKINFO___IFIXBASEPROXY_DISPOSE_OFFSET))(this, a1);
	}
};
