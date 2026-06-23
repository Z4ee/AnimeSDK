#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkEventCallbackInfo.h"

#define AKDURATIONCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E77D5A0)
#define AKDURATIONCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1E77D500)
#define AKDURATIONCALLBACKINFO_GET_AUDIONODEID_OFFSET UNITYSDK_OFFSET(0x1E77D870)
#define AKDURATIONCALLBACKINFO_GET_BSTREAMING_OFFSET UNITYSDK_OFFSET(0x1E77D970)
#define AKDURATIONCALLBACKINFO_GET_FDURATION_OFFSET UNITYSDK_OFFSET(0x1E77D770)
#define AKDURATIONCALLBACKINFO_GET_FESTIMATEDDURATION_OFFSET UNITYSDK_OFFSET(0x1E77D7F0)
#define AKDURATIONCALLBACKINFO_GET_MEDIAID_OFFSET UNITYSDK_OFFSET(0x1E77D8F0)
#define AKDURATIONCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1E77D510)
#define AKDURATIONCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E77D9F0)
#define AKDURATIONCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E77D3F0)

inline static constexpr unsigned int AkDurationCallbackInfo_TypeDefinitionIndex = 32963;

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
};
