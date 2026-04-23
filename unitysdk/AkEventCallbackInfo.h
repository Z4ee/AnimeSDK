#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackInfo.h"

#define AKEVENTCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5E4260)
#define AKEVENTCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5E6B50)
#define AKEVENTCALLBACKINFO_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1A5E6BA0)
#define AKEVENTCALLBACKINFO_GET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x1A5CAAD0)
#define AKEVENTCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5E3FE0)
#define AKEVENTCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5E6C50)
#define AKEVENTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5D8400)
#define AKEVENTCALLBACKINFO___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5E6D60)
#define AKEVENTCALLBACKINFO___IFIXBASEPROXY_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5E6D50)

inline static constexpr unsigned int AkEventCallbackInfo_TypeDefinitionIndex = 40294;

class AkEventCallbackInfo : public ::AkCallbackInfo
{
public:
	::System::IntPtr swigCPtr; // 0x20

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKEVENTCALLBACKINFO__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENTCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkEventCallbackInfo* obj)
	{
		return ((::System::IntPtr(*)(::AkEventCallbackInfo*))((::PBYTE)hIl2Cpp + AKEVENTCALLBACKINFO_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKEVENTCALLBACKINFO_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Dispose(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKEVENTCALLBACKINFO_DISPOSE_OFFSET))(this, disposing);
	}

	::System::UInt32 get_playingID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENTCALLBACKINFO_GET_PLAYINGID_OFFSET))(this);
	}

	::System::UInt32 get_eventID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENTCALLBACKINFO_GET_EVENTID_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_setCPtr(::System::IntPtr P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKEVENTCALLBACKINFO___IFIXBASEPROXY_SETCPTR_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKEVENTCALLBACKINFO___IFIXBASEPROXY_DISPOSE_OFFSET))(this, P0);
	}
};
